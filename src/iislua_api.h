#pragma once

// iis module
IISLUA_API int iislua_debug(lua_State *L);
IISLUA_API int iislua_exec(lua_State *L);
IISLUA_API int iislua_exit(lua_State *L);
IISLUA_API int iislua_flush(lua_State *L);
IISLUA_API int iislua_headers_sent(lua_State *L);
IISLUA_API int iislua_map_path(lua_State *L);
IISLUA_API int iislua_print(lua_State *L);
IISLUA_API int iislua_redirect(lua_State *L);
IISLUA_API int iislua_say(lua_State *L);

// iis.req module
IISLUA_API int iislua_req_get_headers(lua_State *L);
IISLUA_API int iislua_req_get_method(lua_State *L);
IISLUA_API int iislua_req_get_post_args(lua_State *L);
IISLUA_API int iislua_req_get_remote_addr(lua_State *L);
IISLUA_API int iislua_req_get_url(lua_State *L);
IISLUA_API int iislua_req_get_url_args(lua_State *L);
IISLUA_API int iislua_req_http_version(lua_State *L);
IISLUA_API int iislua_req_set_header(lua_State *L);
IISLUA_API int iislua_req_set_method(lua_State *L);
IISLUA_API int iislua_req_set_url(lua_State *L);

// iis.resp module
IISLUA_API int iislua_resp_clear(lua_State *L);
IISLUA_API int iislua_resp_clear_headers(lua_State *L);
IISLUA_API int iislua_resp_get_headers(lua_State *L);
IISLUA_API int iislua_resp_get_status(lua_State *L);
IISLUA_API int iislua_resp_set_header(lua_State *L);
IISLUA_API int iislua_resp_set_status(lua_State *L);

// iis.srv module
IISLUA_API int iislua_srv_get_variable(lua_State *L);
IISLUA_API int iislua_srv_set_variable(lua_State *L);

// iis.user module
IISLUA_API int iislua_user_get_name(lua_State *L);
IISLUA_API int iislua_user_get_type(lua_State *L);