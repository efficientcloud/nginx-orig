#ifndef _NGX_HTTP_PROXY_HANDLER_H_INCLUDED_
#define _NGX_HTTP_PROXY_HANDLER_H_INCLUDED_


#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_event.h>
#include <ngx_http.h>


typedef struct {
    ngx_msec_t    send_timeout;
    ngx_peers_t  *peers;
} ngx_http_proxy_loc_conf_t;


typedef struct ngx_http_proxy_ctx_s  ngx_http_proxy_ctx_t;

struct ngx_http_proxy_ctx_s {
    ngx_peer_connection_t       upstream;
    ngx_peer_t                 *peer;

    ngx_connection_t           *connection;

    ngx_http_request_t         *request;

    ngx_http_proxy_loc_conf_t  *lcf;

    ngx_chain_t                *work_request_hunks;
    ngx_chain_t                *request_hunks;

    char                       *action;
};


#endif /* _NGX_HTTP_PROXY_HANDLER_H_INCLUDED_ */
