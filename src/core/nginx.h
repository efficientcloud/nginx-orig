#ifndef _NGINX_H_INCLUDED_
#define _NGINX_H_INCLUDED_


#define  NGINX_VER   "nginx/0.0.1"
#define  NGINX_CONF  "nginx.conf"
#define  NGINX_PID   "nginx.pid"


extern int           ngx_max_module;
extern u_int         ngx_connection_counter;

extern ngx_module_t  ngx_core_module;



#endif /* _NGINX_H_INCLUDED_ */
