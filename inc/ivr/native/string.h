/**
* @last update Jun 24 2022
* @Maintenance yangdi@gdi.com.cn
*/


#ifndef IVR_STRING_H
#define IVR_STRING_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <wchar.h>

typedef wchar_t ivr_char_type;

#define IVR_STRING_SIZE sizeof(void *)
#define IVR_CHAR_STRING_SIZE sizeof(void *)

#ifndef IVR_CORE_API_IVR_STRING_TYPE_DEFINED
#define IVR_CORE_API_IVR_STRING_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_STRING_SIZE];
} ivr_string;

#endif

#ifndef IVR_CORE_API_IVR_CHAR_STRING_TYPE_DEFINED
#define IVR_CORE_API_IVR_CHAR_STRING_TYPE_DEFINED
typedef struct {
	uint8_t _dont_touch_that[IVR_CHAR_STRING_SIZE];
} ivr_char_string;
#endif

// reduce extern "C" nesting for VS2013
#ifdef __cplusplus
}
#endif

#include <native/array.h>
#include <native/native.h>
#include <native/variant.h>

#ifdef __cplusplus
extern "C" {
#endif

ivr_int IVRAPI ivr_char_string_length(const ivr_char_string *p_cs);
const char IVRAPI *ivr_char_string_get_data(const ivr_char_string *p_cs);
void IVRAPI ivr_char_string_destroy(ivr_char_string *p_cs);

void IVRAPI ivr_string_new(ivr_string *r_dest);
void IVRAPI ivr_string_new_copy(ivr_string *r_dest, const ivr_string *p_src);
void IVRAPI ivr_string_new_with_wide_string(ivr_string *r_dest, const wchar_t *p_contents, const int p_size);

const wchar_t IVRAPI *ivr_string_operator_index(ivr_string *p_self, const ivr_int p_idx);
wchar_t IVRAPI ivr_string_operator_index_const(const ivr_string *p_self, const ivr_int p_idx);
const wchar_t IVRAPI *ivr_string_wide_str(const ivr_string *p_self);

ivr_bool IVRAPI ivr_string_operator_equal(const ivr_string *p_self, const ivr_string *p_b);
ivr_bool IVRAPI ivr_string_operator_less(const ivr_string *p_self, const ivr_string *p_b);
ivr_string IVRAPI ivr_string_operator_plus(const ivr_string *p_self, const ivr_string *p_b);

/* Standard size stuff */

ivr_int IVRAPI ivr_string_length(const ivr_string *p_self);

/* Helpers */

signed char IVRAPI ivr_string_casecmp_to(const ivr_string *p_self, const ivr_string *p_str);
signed char IVRAPI ivr_string_nocasecmp_to(const ivr_string *p_self, const ivr_string *p_str);
signed char IVRAPI ivr_string_naturalnocasecmp_to(const ivr_string *p_self, const ivr_string *p_str);

ivr_bool IVRAPI ivr_string_begins_with(const ivr_string *p_self, const ivr_string *p_string);
ivr_bool IVRAPI ivr_string_begins_with_char_array(const ivr_string *p_self, const char *p_char_array);
ivr_array IVRAPI ivr_string_bigrams(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_chr(wchar_t p_character);
ivr_bool IVRAPI ivr_string_ends_with(const ivr_string *p_self, const ivr_string *p_string);
ivr_int IVRAPI ivr_string_count(const ivr_string *p_self, ivr_string p_what, ivr_int p_from, ivr_int p_to);
ivr_int IVRAPI ivr_string_countn(const ivr_string *p_self, ivr_string p_what, ivr_int p_from, ivr_int p_to);
ivr_int IVRAPI ivr_string_find(const ivr_string *p_self, ivr_string p_what);
ivr_int IVRAPI ivr_string_find_from(const ivr_string *p_self, ivr_string p_what, ivr_int p_from);
ivr_int IVRAPI ivr_string_findmk(const ivr_string *p_self, const ivr_array *p_keys);
ivr_int IVRAPI ivr_string_findmk_from(const ivr_string *p_self, const ivr_array *p_keys, ivr_int p_from);
ivr_int IVRAPI ivr_string_findmk_from_in_place(const ivr_string *p_self, const ivr_array *p_keys, ivr_int p_from, ivr_int *r_key);
ivr_int IVRAPI ivr_string_findn(const ivr_string *p_self, ivr_string p_what);
ivr_int IVRAPI ivr_string_findn_from(const ivr_string *p_self, ivr_string p_what, ivr_int p_from);
ivr_int IVRAPI ivr_string_find_last(const ivr_string *p_self, ivr_string p_what);
ivr_string IVRAPI ivr_string_format(const ivr_string *p_self, const ivr_variant *p_values);
ivr_string IVRAPI ivr_string_format_with_custom_placeholder(const ivr_string *p_self, const ivr_variant *p_values, const char *p_placeholder);
ivr_string IVRAPI ivr_string_hex_encode_buffer(const uint8_t *p_buffer, ivr_int p_len);
ivr_int IVRAPI ivr_string_hex_to_int(const ivr_string *p_self);
ivr_int IVRAPI ivr_string_hex_to_int_without_prefix(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_insert(const ivr_string *p_self, ivr_int p_at_pos, ivr_string p_string);
ivr_bool IVRAPI ivr_string_is_numeric(const ivr_string *p_self);
ivr_bool IVRAPI ivr_string_is_subsequence_of(const ivr_string *p_self, const ivr_string *p_string);
ivr_bool IVRAPI ivr_string_is_subsequence_ofi(const ivr_string *p_self, const ivr_string *p_string);
ivr_string IVRAPI ivr_string_lpad(const ivr_string *p_self, ivr_int p_min_length);
ivr_string IVRAPI ivr_string_lpad_with_custom_character(const ivr_string *p_self, ivr_int p_min_length, const ivr_string *p_character);
ivr_bool IVRAPI ivr_string_match(const ivr_string *p_self, const ivr_string *p_wildcard);
ivr_bool IVRAPI ivr_string_matchn(const ivr_string *p_self, const ivr_string *p_wildcard);
ivr_string IVRAPI ivr_string_md5(const uint8_t *p_md5);
ivr_string IVRAPI ivr_string_num(double p_num);
ivr_string IVRAPI ivr_string_num_int64(int64_t p_num, ivr_int p_base);
ivr_string IVRAPI ivr_string_num_int64_capitalized(int64_t p_num, ivr_int p_base, ivr_bool p_capitalize_hex);
ivr_string IVRAPI ivr_string_num_real(double p_num);
ivr_string IVRAPI ivr_string_num_scientific(double p_num);
ivr_string IVRAPI ivr_string_num_with_decimals(double p_num, ivr_int p_decimals);
ivr_string IVRAPI ivr_string_pad_decimals(const ivr_string *p_self, ivr_int p_digits);
ivr_string IVRAPI ivr_string_pad_zeros(const ivr_string *p_self, ivr_int p_digits);
ivr_string IVRAPI ivr_string_replace_first(const ivr_string *p_self, ivr_string p_key, ivr_string p_with);
ivr_string IVRAPI ivr_string_replace(const ivr_string *p_self, ivr_string p_key, ivr_string p_with);
ivr_string IVRAPI ivr_string_replacen(const ivr_string *p_self, ivr_string p_key, ivr_string p_with);
ivr_int IVRAPI ivr_string_rfind(const ivr_string *p_self, ivr_string p_what);
ivr_int IVRAPI ivr_string_rfindn(const ivr_string *p_self, ivr_string p_what);
ivr_int IVRAPI ivr_string_rfind_from(const ivr_string *p_self, ivr_string p_what, ivr_int p_from);
ivr_int IVRAPI ivr_string_rfindn_from(const ivr_string *p_self, ivr_string p_what, ivr_int p_from);
ivr_string IVRAPI ivr_string_rpad(const ivr_string *p_self, ivr_int p_min_length);
ivr_string IVRAPI ivr_string_rpad_with_custom_character(const ivr_string *p_self, ivr_int p_min_length, const ivr_string *p_character);
ivr_real IVRAPI ivr_string_similarity(const ivr_string *p_self, const ivr_string *p_string);
ivr_string IVRAPI ivr_string_sprintf(const ivr_string *p_self, const ivr_array *p_values, ivr_bool *p_error);
ivr_string IVRAPI ivr_string_substr(const ivr_string *p_self, ivr_int p_from, ivr_int p_chars);
double IVRAPI ivr_string_to_double(const ivr_string *p_self);
ivr_real IVRAPI ivr_string_to_float(const ivr_string *p_self);
ivr_int IVRAPI ivr_string_to_int(const ivr_string *p_self);

ivr_string IVRAPI ivr_string_camelcase_to_underscore(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_camelcase_to_underscore_lowercased(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_capitalize(const ivr_string *p_self);
double IVRAPI ivr_string_char_to_double(const char *p_what);
ivr_int IVRAPI ivr_string_char_to_int(const char *p_what);
int64_t IVRAPI ivr_string_wchar_to_int(const wchar_t *p_str);
ivr_int IVRAPI ivr_string_char_to_int_with_len(const char *p_what, ivr_int p_len);
int64_t IVRAPI ivr_string_char_to_int64_with_len(const wchar_t *p_str, int p_len);
int64_t IVRAPI ivr_string_hex_to_int64(const ivr_string *p_self);
int64_t IVRAPI ivr_string_hex_to_int64_with_prefix(const ivr_string *p_self);
int64_t IVRAPI ivr_string_to_int64(const ivr_string *p_self);
double IVRAPI ivr_string_unicode_char_to_double(const wchar_t *p_str, const wchar_t **r_end);

ivr_int IVRAPI ivr_string_get_slice_count(const ivr_string *p_self, ivr_string p_splitter);
ivr_string IVRAPI ivr_string_get_slice(const ivr_string *p_self, ivr_string p_splitter, ivr_int p_slice);
ivr_string IVRAPI ivr_string_get_slicec(const ivr_string *p_self, wchar_t p_splitter, ivr_int p_slice);

ivr_array IVRAPI ivr_string_split(const ivr_string *p_self, const ivr_string *p_splitter);
ivr_array IVRAPI ivr_string_split_allow_empty(const ivr_string *p_self, const ivr_string *p_splitter);
ivr_array IVRAPI ivr_string_split_floats(const ivr_string *p_self, const ivr_string *p_splitter);
ivr_array IVRAPI ivr_string_split_floats_allows_empty(const ivr_string *p_self, const ivr_string *p_splitter);
ivr_array IVRAPI ivr_string_split_floats_mk(const ivr_string *p_self, const ivr_array *p_splitters);
ivr_array IVRAPI ivr_string_split_floats_mk_allows_empty(const ivr_string *p_self, const ivr_array *p_splitters);
ivr_array IVRAPI ivr_string_split_ints(const ivr_string *p_self, const ivr_string *p_splitter);
ivr_array IVRAPI ivr_string_split_ints_allows_empty(const ivr_string *p_self, const ivr_string *p_splitter);
ivr_array IVRAPI ivr_string_split_ints_mk(const ivr_string *p_self, const ivr_array *p_splitters);
ivr_array IVRAPI ivr_string_split_ints_mk_allows_empty(const ivr_string *p_self, const ivr_array *p_splitters);
ivr_array IVRAPI ivr_string_split_spaces(const ivr_string *p_self);

wchar_t IVRAPI ivr_string_char_lowercase(wchar_t p_char);
wchar_t IVRAPI ivr_string_char_uppercase(wchar_t p_char);
ivr_string IVRAPI ivr_string_to_lower(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_to_upper(const ivr_string *p_self);

ivr_string IVRAPI ivr_string_get_basename(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_get_extension(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_left(const ivr_string *p_self, ivr_int p_pos);
wchar_t IVRAPI ivr_string_ord_at(const ivr_string *p_self, ivr_int p_idx);
ivr_string IVRAPI ivr_string_plus_file(const ivr_string *p_self, const ivr_string *p_file);
ivr_string IVRAPI ivr_string_right(const ivr_string *p_self, ivr_int p_pos);
ivr_string IVRAPI ivr_string_strip_edges(const ivr_string *p_self, ivr_bool p_left, ivr_bool p_right);
ivr_string IVRAPI ivr_string_strip_escapes(const ivr_string *p_self);

void IVRAPI ivr_string_erase(ivr_string *p_self, ivr_int p_pos, ivr_int p_chars);

ivr_char_string IVRAPI ivr_string_ascii(const ivr_string *p_self);
ivr_char_string IVRAPI ivr_string_ascii_extended(const ivr_string *p_self);
ivr_char_string IVRAPI ivr_string_utf8(const ivr_string *p_self);
ivr_bool IVRAPI ivr_string_parse_utf8(ivr_string *p_self, const char *p_utf8);
ivr_bool IVRAPI ivr_string_parse_utf8_with_len(ivr_string *p_self, const char *p_utf8, ivr_int p_len);
ivr_string IVRAPI ivr_string_chars_to_utf8(const char *p_utf8);
ivr_string IVRAPI ivr_string_chars_to_utf8_with_len(const char *p_utf8, ivr_int p_len);

uint32_t IVRAPI ivr_string_hash(const ivr_string *p_self);
uint64_t IVRAPI ivr_string_hash64(const ivr_string *p_self);
uint32_t IVRAPI ivr_string_hash_chars(const char *p_cstr);
uint32_t IVRAPI ivr_string_hash_chars_with_len(const char *p_cstr, ivr_int p_len);
uint32_t IVRAPI ivr_string_hash_utf8_chars(const wchar_t *p_str);
uint32_t IVRAPI ivr_string_hash_utf8_chars_with_len(const wchar_t *p_str, ivr_int p_len);
ivr_pool_byte_array IVRAPI ivr_string_md5_buffer(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_md5_text(const ivr_string *p_self);
ivr_pool_byte_array IVRAPI ivr_string_sha256_buffer(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_sha256_text(const ivr_string *p_self);

ivr_bool ivr_string_empty(const ivr_string *p_self);

// path functions
ivr_string IVRAPI ivr_string_get_base_dir(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_get_file(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_humanize_size(uint64_t p_size);
ivr_bool IVRAPI ivr_string_is_abs_path(const ivr_string *p_self);
ivr_bool IVRAPI ivr_string_is_rel_path(const ivr_string *p_self);
ivr_bool IVRAPI ivr_string_is_resource_file(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_path_to(const ivr_string *p_self, const ivr_string *p_path);
ivr_string IVRAPI ivr_string_path_to_file(const ivr_string *p_self, const ivr_string *p_path);
ivr_string IVRAPI ivr_string_simplify_path(const ivr_string *p_self);

ivr_string IVRAPI ivr_string_c_escape(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_c_escape_multiline(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_c_unescape(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_http_escape(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_http_unescape(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_json_escape(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_word_wrap(const ivr_string *p_self, ivr_int p_chars_per_line);
ivr_string IVRAPI ivr_string_xml_escape(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_xml_escape_with_quotes(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_xml_unescape(const ivr_string *p_self);

ivr_string IVRAPI ivr_string_percent_decode(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_percent_encode(const ivr_string *p_self);

ivr_bool IVRAPI ivr_string_is_valid_float(const ivr_string *p_self);
ivr_bool IVRAPI ivr_string_is_valid_hex_number(const ivr_string *p_self, ivr_bool p_with_prefix);
ivr_bool IVRAPI ivr_string_is_valid_html_color(const ivr_string *p_self);
ivr_bool IVRAPI ivr_string_is_valid_identifier(const ivr_string *p_self);
ivr_bool IVRAPI ivr_string_is_valid_integer(const ivr_string *p_self);
ivr_bool IVRAPI ivr_string_is_valid_ip_address(const ivr_string *p_self);

ivr_string IVRAPI ivr_string_dedent(const ivr_string *p_self);
ivr_string IVRAPI ivr_string_trim_prefix(const ivr_string *p_self, const ivr_string *p_prefix);
ivr_string IVRAPI ivr_string_trim_suffix(const ivr_string *p_self, const ivr_string *p_suffix);
ivr_string IVRAPI ivr_string_rstrip(const ivr_string *p_self, const ivr_string *p_chars);
ivr_pool_string_array IVRAPI ivr_string_rsplit(const ivr_string *p_self, const ivr_string *p_divisor, const ivr_bool p_allow_empty, const ivr_int p_maxsplit);

void IVRAPI ivr_string_destroy(ivr_string *p_self);

#ifdef __cplusplus
}
#endif

#endif // IVR_STRING_H
