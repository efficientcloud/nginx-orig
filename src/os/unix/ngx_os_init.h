#ifndef _NGX_OS_INIT_H_INCLUDED_
#define _NGX_OS_INIT_H_INCLUDED_


#include <ngx_config.h>
#include <ngx_log.h>
#include <ngx_hunk.h>
#include <ngx_connection.h>


int ngx_os_init(ngx_log_t *log);

extern ngx_os_io_t  ngx_os_io;


#endif /* _NGX_OS_INIT_H_INCLUDED_ */
