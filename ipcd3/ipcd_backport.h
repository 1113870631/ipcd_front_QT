#ifndef __IPCD_BACK_PORT_H_
#define __IPCD_BACK_PORT_H_

#define  MAX_LEN   1024
#define  MAX_NUM   1024

typedef struct  ipcd_info
{
  int pos;
  char *ipcd_name;
}IPCD_INFO;

typedef struct Node {
    unsigned int uldatalen;
    void *pUserdata;
    char szNodeName[1024];
    unsigned int ulPos;
    struct Node *pstnext;
} OneNode;

typedef struct list
{
   OneNode *pstTailNode;
   OneNode *pstHeadNode;
   unsigned int ulNodeNum;
}list;

typedef struct  ipcd_manger
{
    char linux_base_dir[MAX_LEN];
    char win_base_dir[MAX_LEN];
    char svn_base_dir[MAX_LEN];
    char win_linux_base_dir[MAX_LEN];
    char win_lint_dir[MAX_LEN];
    int ipcd_num;
    list *ipcd_info_list;
}IPCD_MANGER;

/* 对外接口 */
typedef void *(*IPCD_back_start)(void);
typedef int(*IPCD_add)(char * name, IPCD_MANGER *ipcd_man);
typedef int(*IPCD_del)(char * name, IPCD_MANGER *ipcd_man);
typedef int(*IPCD_back_destroy)(IPCD_MANGER * ipcd_man);
typedef int (*IPCD_remove)(char * name, IPCD_MANGER *ipcd_man);
typedef OneNode* (*IPCD_get_one_node)(IPCD_MANGER *ipcd_man, int flag);


#endif // !__IPCD_BACK_PORT_H_
