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

    this->back_start = (IPCD_back_start)GetProcAddress(g_hDll, "IPCD_back_start");
    if (this->back_start == NULL)
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

    this->back_destroy = (IPCD_back_destroy)GetProcAddress(g_hDll, "IPCD_back_destroy");
    if (this->back_destroy == NULL)
    {
        printf("back port init fail\n");
        exit(0);
    }

    this->back_remove = (IPCD_remove)GetProcAddress(g_hDll, "IPCD_remove");
    if (this->back_remove == NULL)
    {
        printf("back port init fail\n");
        exit(0);
    }

    this->back_get_one = (IPCD_get_one_node)GetProcAddress(g_hDll, "IPCD_get_one_node");
    if (this->back_get_one == NULL)
    {
        printf("back port init fail\n");
        exit(0);
    }
}

IPCD_MANGER_FRONT::~IPCD_MANGER_FRONT()
{
   printf("test2\n");
}
