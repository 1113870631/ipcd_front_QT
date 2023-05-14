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
    IPCD_MANGER * ipcd_man_back;
    /* 后端回调接口 */
    IPCD_back_start back_start;
    IPCD_add back_add;
    IPCD_del back_del;
    IPCD_lint back_lint;
    IPCD_back_destroy back_destroy;
    IPCD_remove back_remove;

    IPCD_MANGER_FRONT();
    ~IPCD_MANGER_FRONT();
};


#endif // IPCD_FRONT_H
