#ifndef IVR_CPP_HTTPREQUEST_HPP
#define IVR_CPP_HTTPREQUEST_HPP


#include <ivrnative_api_struct.gen.h>
#include <cstdint>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "HTTPClient.hpp"

#include "Node.hpp"
namespace ivr {


class HTTPRequest : public Node {
	struct ___method_bindings {
		ivr_method_bind *mb__redirect_request;
		ivr_method_bind *mb__request_done;
		ivr_method_bind *mb__timeout;
		ivr_method_bind *mb_cancel_request;
		ivr_method_bind *mb_get_body_size;
		ivr_method_bind *mb_get_body_size_limit;
		ivr_method_bind *mb_get_download_chunk_size;
		ivr_method_bind *mb_get_download_file;
		ivr_method_bind *mb_get_downloaded_bytes;
		ivr_method_bind *mb_get_http_client_status;
		ivr_method_bind *mb_get_max_redirects;
		ivr_method_bind *mb_get_timeout;
		ivr_method_bind *mb_is_using_threads;
		ivr_method_bind *mb_request;
		ivr_method_bind *mb_set_body_size_limit;
		ivr_method_bind *mb_set_download_chunk_size;
		ivr_method_bind *mb_set_download_file;
		ivr_method_bind *mb_set_max_redirects;
		ivr_method_bind *mb_set_timeout;
		ivr_method_bind *mb_set_use_threads;
	};
	static ___method_bindings ___mb;
	static void *_detail_class_tag;

public:
	static void ___init_method_bindings();
	inline static size_t ___get_id() { return (size_t)_detail_class_tag; }

	static inline const char *___get_class_name() { return (const char *) "HTTPRequest"; }
	static inline const char *___get_ivr_class_name() { return (const char *) "HTTPRequest"; }
	static inline Object *___get_from_variant(Variant a) { ivr_object *o = (ivr_object*) a; return (o) ? (Object *) ivr::nativescript_1_1_api->ivr_nativescript_get_instance_binding_data(ivr::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Result {
		RESULT_SUCCESS = 0,
		RESULT_CHUNKED_BODY_SIZE_MISMATCH = 1,
		RESULT_CANT_CONNECT = 2,
		RESULT_CANT_RESOLVE = 3,
		RESULT_CONNECTION_ERROR = 4,
		RESULT_SSL_HANDSHAKE_ERROR = 5,
		RESULT_NO_RESPONSE = 6,
		RESULT_BODY_SIZE_LIMIT_EXCEEDED = 7,
		RESULT_REQUEST_FAILED = 8,
		RESULT_DOWNLOAD_FILE_CANT_OPEN = 9,
		RESULT_DOWNLOAD_FILE_WRITE_ERROR = 10,
		RESULT_REDIRECT_LIMIT_REACHED = 11,
		RESULT_TIMEOUT = 12,
	};

	// constants


	static HTTPRequest *_new();

	// methods
	void _redirect_request(const String arg0);
	void _request_done(const int64_t arg0, const int64_t arg1, const PoolStringArray arg2, const PoolByteArray arg3);
	void _timeout();
	void cancel_request();
	int64_t get_body_size() const;
	int64_t get_body_size_limit() const;
	int64_t get_download_chunk_size() const;
	String get_download_file() const;
	int64_t get_downloaded_bytes() const;
	HTTPClient::Status get_http_client_status() const;
	int64_t get_max_redirects() const;
	int64_t get_timeout();
	bool is_using_threads() const;
	Error request(const String url, const PoolStringArray custom_headers = PoolStringArray(), const bool ssl_validate_domain = true, const int64_t method = 0, const String request_data = "");
	void set_body_size_limit(const int64_t bytes);
	void set_download_chunk_size(const int64_t arg0);
	void set_download_file(const String path);
	void set_max_redirects(const int64_t amount);
	void set_timeout(const int64_t timeout);
	void set_use_threads(const bool enable);

};

}

#endif