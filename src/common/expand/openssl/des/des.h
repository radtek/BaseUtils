/****************************************************************************************************************************
*
*   文 件 名 ： xdelta.h 
*   文件描述 ：使用des加解密数据的功能接口头文件 
*   创建日期 ：2018年9月18日
*   版本号 ： 
*   负责人 ： Zhangsheng 
*   其 他 ：
*   修改日志 ：
*
****************************************************************************************************************************/

#ifndef __DES_H__
#define __DES_H__

#include  <common/baselib/baselib.h> //编译时加参数 -I./（即common文件夹所在的路径）

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */

/*---------------------------------外部变量说明---------------------------------*/




/*---------------------------------外部函数原型说明---------------------------------*/




/*---------------------------------内部函数原型说明---------------------------------*/




/*---------------------------------全局变量---------------------------------*/




/*---------------------------------模块级变量---------------------------------*/




/*---------------------------------常量定义---------------------------------*/




/*---------------------------------宏定义---------------------------------*/


#pragma pack(1)



#pragma pack()

int des_decrypt_data(const char *_key, const char *_vt,char *_raw_ptr,size_t _raw_size, char **_dst_buf, size_t *_dst_size);
int des_encrypt_data(const char *_key, const char *_vt,char *_raw_ptr,size_t _raw_size, char **_dst_buf, size_t *_dst_size);

#ifdef __cplusplus
#if __cplusplus
 }
#endif
#endif /* __cplusplus */
 
 
#endif /* __DES_H__ */
