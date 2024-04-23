cmake_minimum_required(VERSION 3.10)
set(DLL_NAME IVRNative)
project(${DLL_NAME})

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# Include
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc/core)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc/ivr)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc/object)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)
# Sources
file(GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

# Add DLL project
add_library(${DLL_NAME} SHARED ${SOURCES})
set(SHARED_PATH ${CMAKE_SOURCE_DIR}/bin/ CACHE PATH "location of shared resources")

# Libs
target_link_libraries(${DLL_NAME} 
          debug ${CMAKE_CURRENT_SOURCE_DIR}/lib/ideavr.windows.64.lib 
          optimized  ${CMAKE_CURRENT_SOURCE_DIR}/lib/ideavr.windows.release.64.lib
          )

# set_property(TARGET ${DLL_NAME} PROPERTY FOLDER "Modules")  # Orgnized into folders
# Copy dll to 
ADD_CUSTOM_COMMAND(TARGET ${DLL_NAME}
		  POST_BUILD          
	      COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${DLL_NAME}> ${SHARED_PATH}
)


# Add test
add_executable(test ${CMAKE_CURRENT_SOURCE_DIR}/test/testDll.cpp
                    ${CMAKE_CURRENT_SOURCE_DIR}/test/dlfcn.c
)
target_link_libraries(test
          debug ${CMAKE_CURRENT_SOURCE_DIR}/lib/ideavr.windows.64.lib 
          optimized  ${CMAKE_CURRENT_SOURCE_DIR}/lib/ideavr.windows.release.64.lib
          )



# Set properties of test
target_compile_definitions(test  PRIVATE -DDLL_PATH="${SHARED_PATH}") 

# Set default project
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT test )
