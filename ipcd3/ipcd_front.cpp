#include "ipcd_backport.h"
#include "ipcd_front.h"
#include "stdio.h"
#include <windows.h>


IPCD_MANGER_FRONT::IPCD_MANGER_FRONT()
{

    /* 加载后端接口库 */
    HMODULE  g_hDll = LoadLibrary(L"libipcd_backport.dll");
    if (g_hDll == NULL)
    {
        printf("libipcd_backport.dll fail\n");
        exit(0);
    }

    this->back_init = (IPCD_init)GetProcAddress(g_hDll, "IPCD_init");
    if (this->back_init == NULL)
    {
        printf("back port init fail\n");
        exit(0);
    };

    this->back_add = (IPCD_add)GetProcAddress(g_hDll, "IPCD_add");
    if (this->back_add == NULL)
    {
        printf("back port init fail\n");
        exit(0);
    }

    this->back_del = (IPCD_del)GetProcAddress(g_hDll, "IPCD_del");
    if (this->back_del == NULL)
    {
        printf("back port init fail\n");
        exit(0);
    }

    this->back_destroy = (IPCD_destroy)GetProcAddress(g_hDll, "IPCD_destroy");
    if (this->back_destroy == NULL)
    {
        printf("back port init fail\n");
        exit(0);
    }

    this->back_get_each = (IPCD_list_foreach)GetProcAddress(g_hDll, "IPCD_list_foreach");
    if (this->back_get_each == NULL)
    {
        printf("back port init fail\n");
        exit(0);
    }

    this->back_node2info = (IPCD_node2info)GetProcAddress(g_hDll, "IPCD_node2info");
    if (this->back_node2info == NULL)
    {
        printf("back port init fail\n");
        exit(0);
    }
}

IPCD_MANGER_FRONT::~IPCD_MANGER_FRONT()
{
   printf("test2\n");
}
