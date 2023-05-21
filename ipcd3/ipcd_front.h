#ifndef IPCD_FRONT_H
#define IPCD_FRONT_H
#include "ipcd_backport.h"
#include <QString>
#include <QListWidget>

class IPCD_MANGER_FRONT
{
public:
    /* 当前选择问题 */
    QListWidgetItem * curr_ipcd_iteml;
    void * ipcd_man_back;
    /* 后端回调接口 */
    IPCD_init back_init;
    IPCD_add back_add;
    IPCD_del back_del;
    IPCD_destroy back_destroy;
    IPCD_list_foreach back_get_each;
    IPCD_node2info back_node2info;

    IPCD_MANGER_FRONT();
    ~IPCD_MANGER_FRONT();
};


#endif // IPCD_FRONT_H
