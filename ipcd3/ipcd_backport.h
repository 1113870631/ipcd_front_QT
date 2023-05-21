#ifndef __IPCD_BACK_PORT_H_
#define __IPCD_BACK_PORT_H_

#define  MAX_LEN   1024
#define  MAX_NUM   1024

typedef struct  ipcd_info
{
  char ipcd_name[1024];
}IPCD_INFO;

/* 对外接口 */
typedef void* (*IPCD_init)(void);
typedef void* (*IPCD_node2info)(void* node);
typedef void (*IPCD_destroy)(void *ipcd_man);
typedef int (*IPCD_add)(char * name,  void *ipcd_man);
typedef int (*IPCD_del)(char * name, void *ipcd_man);
typedef int (*IPCD_lint)(char * name, void *ipcd_man);
typedef int (*IPCD_list_foreach)(void *pstIpcdMan, void ** ppaptrarr);

#endif // !__IPCD_BACK_PORT_H_
