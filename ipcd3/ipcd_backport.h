#ifndef __IPCD_BACK_PORT_H_
#define __IPCD_BACK_PORT_H_

#define  MAX_LEN   1024
#define  MAX_NUM   1024

/* 对外接口 */
typedef void *(*IPCD_back_start)();
typedef int(*IPCD_add)(char *name);
typedef int(*IPCD_del)(char *name);
typedef int(*IPCD_lint)(char *name);
typedef int(*IPCD_back_destroy)(void *ipcd_man);
typedef int (*IPCD_remove)(char * name);

class  IPCD_INFO
{
  public:
  int pos;
  char ipcd_name [MAX_LEN];
};

class  IPCD_MANGER
{
    public:
    char linux_base_dir[MAX_LEN];
    char win_base_dir[MAX_LEN];
    char svn_base_dir[MAX_LEN];
    char win_linux_base_dir[MAX_LEN];
    char win_lint_dir[MAX_LEN];
    int ipcd_num;
    IPCD_INFO *ipcd_list[MAX_NUM];
};


#endif // !__IPCD_BACK_PORT_H_
