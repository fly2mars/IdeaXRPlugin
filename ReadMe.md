# IdearXR插件
 IdearXR  不能直接调用外部第三方库的接口函数，需要经过一层中转的方式接入。

 调用方式为：

 IdearVR .is脚本调用自定义DLL，通过DLL中的函数调用从第三方SDK功能。

## 编译
mkdir build
cd build
cmake ..

测试平台：Windows 10， Windows 11， VS2019, VS 2022

## 调用流程
从菜单->工具->从创建自定义插件中进入设置，与[帮助页面]()过程相同。

创建过程中需要注意的问题包括：
1. 从脚本中读取并创建对象
2. 自动生成的插件中：位于native中的.idns文件中应手工添加类型，否则会到指脚本中创建失败。
   ```
   [ivr_resource type="IVRNativeScript" load_steps=2 format=2]
   
    [ext_resource path = "res://addons/suTest/native/suTestNode.idnlib" type = "IVRNativeLibrary" id=1]
   
    [resource]
   
    resource_name = "" 
    class_name = "MyScriptClass"   # 此处手工添加类名
    library = ExtResource( 1 )
   ```



## IVRScript 脚本说明
https://dev.ideavr.top/docs/tutorial/IVR_scripts/basic_grammar

- 语言特性：IVRScript是一种高级、动态类型的编程语言，语法类似于Python，例如使用缩进来定义块，关键字也有相似之处。
- 标识符规则：标识符可以包含字母、数字和下划线，但不能以数字开头，并且区分大小写。
- 关键字：提供了一系列不能作为标识符使用的保留关键字列表。
- 运算符优先级：列出了支持的运算符及其优先级，优先级高的运算符排在列表上方。
- 注释：以井号(#)开头至行尾的任何内容都视为注释，将被忽略。

### 编码风格

- 脚本创建：选择节点，添加脚本，选择IVRScript语言。

- 编码风格：推荐使用换行符(LF)，避免不必要的括号，使用英文布尔运算符。

- 代码长度：每行代码不超过100个字符，尽量控制在80个字符以内。

- 命名约定：文件名使用蛇类命名法(snake_case)，类和节点名使用帕斯卡命名法(PascalCase)。

### 数据类型
- 内置类型：包括基本数据类型如null、bool、int、float等，它们通常在栈上分配并按值传递。
- 内置向量类型：如Rect2, Vector2、Vector3, Transform2D, Plane(normal, d), Quat, AABB, Basis(3*3 matrix), Transform等，提供了更复杂的数据结构来处理多维数据和集合。
- 引擎内置类型：Color, NodePath, RID, Object, Array, Dictionary,
- 函数和变量：介绍了如何声明变量和函数，包括局部变量、类成员变量以及如何使用var和- const关键字。
- 控制流：描述了使用if/elif/else、while、for和match语句来控制程序的执行流程。
- 类：
  - 默认情况下，所有脚本文件都是未命名的类。在这种情况下，只能使用文件的路径引用它们，使用相对路径或绝对路径

### 类
以文件形式保存，可以继承自：（1）全局类；（2）另一个类文件；（3）另一个类文件中的内部类。
  - 不允许多重继承。 继承使用 extends 关键字：
    ```
     # 继承/扩展一个全局可用的类
     extends SomeClass
     
     # 继承/扩展一个命名的类文件
     extends "somefile.is"
     
     # 继承/扩展另一个文件中的内部类
     extends "somefile.is".SomeInnerClass
    ```
    要检查给定的实例是否从给定的类继承，可以使用 is 关键字：
    ```
    const someclass = preload("somefile.is")
    #判断somevar是否继承自someclass
    if somevar is someclass:
        somevar.func_in_someclass()
    ```
    要调用基类（即当前类extends的类）中的函数，请在函数名前面加上一个.
    ```
    .base_func(args)
    ```
    这特别有用，因为扩展类中的函数会替换基类中同名的函数。所以如果仍然想调用它们，可以使用 .（这就像其他语言中的super关键字一样）：
    ```
    func some_func(x):
    .some_func(x) # 调用父类中的相同方法。
    ```
    >NOTE
    > - 默认函数像_init和大多数通知像_enter_tree，_exit_tree， _process，_physics_process 等，将自动调用在所有父类中的函数。重载它们时无需显式调用它们。
    > - 在类实例化时调用的类构造函数名为 _init。如前所述，父类的构造函数在继承类时被自动调用。所以通常不需要显式调用 ._init()。
### 函数
- 函数属于一个类。

- 变量查找的作用域优先级是：本地→类成员→全局。 

- self 变量始终可用，并作为访问类成员的选项提供，但并不一定是必需的（与Python不同，不应该将self作为函数的第一个参数传递）。
```
func my_function(a: int, b: String):
    pass
```
引用函数 与python不同，IVRScript中的函数不能储存在变量中，不能作为参数传递给另一个函数，也不能从其他函数返回，这是出于性能原因。 若要在运行时按名称引用一个函数（例如，将其存储在一个变量中，或将其作为参数传递给另一个函数），必须使用call或funcref帮助函数。
```
# 按名称调用函数
my_node.call("my_function", args)

# 存储函数的引用
var my_func = funcref(my_node, "my_function")
# 调用存储的函数引用
my_func.call_func(args)
```


### setter/getter
知道类的成员变量何时出于任何原因更改通常是很有用的。也可能需要以某种方式封装其访问。

为此,IVRScript使用 setget 关键字提供了一个 setter/getter 语法。在变量定义后可直接使用:
```
var my_var setget my_var_set, my_var_get


func my_var_set(new_value):
    my_var = new_value


func my_var_get():
    return my_var # Getter 必须返回一个值。
```
每当 my_var 的值被外部代码（即不是来自该类中的本地使用）修改时，setter 函数（上面的 setterfunc）就会被调用。这发生在值改变之前。setter 必须决定如何处理新值。反之亦然，当 my_var 被访问时，getter 函数（上面的 getterfunc）必须 return 所需的值。

### 常用关键词
- onready: 使用节点时，通常希望将对场景部分的引用保留在变量中。由于仅在进入活动场景树时才保证要配置场景，因此只有在调用 Node._ready() 时才能获得子节点。
  ```
  var my_node
  
  func _ready():
      my_node = get_node("MyNode")
  ```
  - 上面有些麻烦，尤其是当节点和外部引用堆积时。为此，IVRScript 具有关键字onready，将成员变量的初始化推迟到调用_ready()。它可以用一行替换上面的代码：
  ```
  onready var my_node = get_node("MyNode")
  ```
- export： 关键字定义的变量可以将变量开放到编辑器中修改。
- tool：默认情况下，脚本不在编辑器内运行，并且只能更改导出的属性。在某些情况下，确实希望它们在编辑器中运行。为此，可以用tool关键字并将它放在文件的顶部。
- extends：继承
- preload：可以预加载一个类或变量，用于创建或比较 var ball = preload(ball.is).new()
- yield: 提供协程，调用yield()将立即从当前函数返回，并且使用该函数的当前冻结状态作为返回值。在此结果对象上调用resume()将继续执行并返回函数返回的任何内容。恢复后，该状态对象将失效。例如：
  ```
  func my_func():
    print("Hello")  # 打印
    yield()         # 在my_func上冻结
    print("World")  # y.resume后继续
  
  
  func _ready():
    var y = my_func()
    print(my_dear)
    y.resume
  ```
  结合信号使用协程可以在等待特定事件发生时挂起函数的执行。在游戏开发中，这种模式极其有用。例如，可以等待一个动画播放完毕或一个定时器触发后再继续执行，而这整个过程对编写代码的人来说都是透明和直观的。
### 内置函数方法
内置函数大多应用于相关操作出发后的回调
- func _init():初始化对象时被调用。
- func _enter_tree()：在节点进入SceneTree时被调用（例如，在实例化，场景更改时或在脚本中调用add_child()之后）。
- func _exit_tree():在节点即将离开SceneTree时被调用（例如，释放，更改场景或在脚本中调用remove_child()之后）。
- add_child()和remove_child()方法，可以暂时理解为为某节点添加子节点以及删除子节点的方法。
- func _ready()：在节点“就绪”时调用，即在节点及其子节点都进入场景树时调用。也就是说当节点及其子节点都进入场景树时。如果节点有子节点，它们的_ready()回调会首先被触发，然后父节点会收到_ready()通知。每个节点只能对_ready()调用一次。 从场景树中删除节点并再次添加后，将不会第二次调用_ready()。一般在其中定义初始化内容。当实例化连接到第一个执行场景的场景时，IdeaXR 将实例化树下的节点(进行_init调用)，并构建从根向下的树。这导致_enter_tree()调用，向下级联树。当树构建完成，叶子节点调用_ready()。一旦所有子节点都完成了对它们的子节点的调用,，一个节点就会调用_ready()方法。然后，这将导致反向级联回到树的根部。一般来说来说，_ready()函数的使用会比较频繁，因为会在其中设置初始的内容。其他两个函数相对使用不多
- func _input(event):有输入事件时调用。 输入事件在节点树中向上传播，直到一个节点将其消耗为止。仅当节点在场景树中存在时（即，如果它不是孤立的），才调用此方法。
- func _unhandled_input(event):当输入事件未被_input或任何 GUI使用时调用。输入事件通过节点树向上传播，直到节点使用它。对于项目输入，该函数通常比_input更适合，因为它们允许 GUI 首先拦截事件。
- func _process(delta):在主循环的处理步骤中调用。_process()在每个帧上都以尽可能快的速度发生，因此自上一帧以来的增量(delta)时间不是恒定的。仅当节点在场景树中存在时（即，如果它不是孤立的），才调用此方法。当需要帧之间依赖于帧速率的 deltatime 时，请使用 _process()。如果更新对象数据的代码，需要尽可能频繁地更新，那么_process()中是正确放置这些代码的地方。
- func _physics_process(delta):在主循环的物理处理步骤中调用。物理处理意味着将帧速率同步到物理，即增量变量应为常数。(delta≈0.016s)当一个帧之间需要独立于帧速率的 deltatime 时，请使用_physics_process()。如果不管时间是快还是慢，代码需要随着时间的推移进行一致的更新，那么_physics_process()中是正确的放置这些代码的地方。重复的运动学和对象变换操作，应在此处执行。