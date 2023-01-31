

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __wmnetsourcecreator_h__
#define __wmnetsourcecreator_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __INSNetSourceCreator_FWD_DEFINED__
#define __INSNetSourceCreator_FWD_DEFINED__
typedef interface INSNetSourceCreator INSNetSourceCreator;

#endif 	/* __INSNetSourceCreator_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wmnetsourcecreator_0000_0000 */
/* [local] */ 

//+-------------------------------------------------------------------------
//
//  Microsoft Windows Media
//  Copyright (C) Microsoft Corporation. All rights reserved
//
//  Automatically generated by Midl from WMNetSourceCreator.idl
//
// DO NOT EDIT THIS FILE.
//
//--------------------------------------------------------------------------
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( CLSID_ClientNetManager, 0xCD12A3CE,0x9C42,0x11D2,0xBE,0xED,0x00,0x60,0x08,0x2F,0x20,0x54  );
EXTERN_GUID( IID_INSNetSourceCreator, 0x0C0E4080,0x9081,0x11d2,0xBE,0xEC,0x00,0x60,0x08,0x2F,0x20,0x54  );

typedef unsigned __int64 QWORD;



extern RPC_IF_HANDLE __MIDL_itf_wmnetsourcecreator_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmnetsourcecreator_0000_0000_v0_0_s_ifspec;

#ifndef __INSNetSourceCreator_INTERFACE_DEFINED__
#define __INSNetSourceCreator_INTERFACE_DEFINED__

/* interface INSNetSourceCreator */
/* [unique][version][uuid][object] */ 


EXTERN_C const IID IID_INSNetSourceCreator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0C0E4080-9081-11d2-BEEC-0060082F2054")
    INSNetSourceCreator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateNetSource( 
            /* [annotation][in] */ 
            _In_  LPCWSTR pszStreamName,
            /* [annotation][in] */ 
            _In_  IUnknown *pMonitor,
            /* [annotation][in] */ 
            _In_  BYTE *pData,
            /* [annotation][in] */ 
            _In_  IUnknown *pUserContext,
            /* [annotation][in] */ 
            _In_  IUnknown *pCallback,
            /* [annotation][in] */ 
            _In_  QWORD qwContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNetSourceProperties( 
            /* [annotation][in] */ 
            _In_  LPCWSTR pszStreamName,
            /* [annotation][out] */ 
            _Out_  IUnknown **ppPropertiesNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNetSourceSharedNamespace( 
            /* [annotation][out] */ 
            _Out_  IUnknown **ppSharedNamespace) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNetSourceAdminInterface( 
            /* [annotation][in] */ 
            _In_  LPCWSTR pszStreamName,
            /* [annotation][out] */ 
            _Out_  VARIANT *pVal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumProtocolsSupported( 
            /* [annotation][out] */ 
            _Out_  DWORD *pcProtocols) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProtocolName( 
            /* [annotation][in] */ 
            _In_  DWORD dwProtocolNum,
            /* [annotation][out] */ 
            _Out_  WCHAR *pwszProtocolName,
            /* [annotation][out][in] */ 
            _Inout_  WORD *pcchProtocolName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INSNetSourceCreatorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INSNetSourceCreator * This,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INSNetSourceCreator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INSNetSourceCreator * This);
        
        DECLSPEC_XFGVIRT(INSNetSourceCreator, Initialize)
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in INSNetSourceCreator * This);
        
        DECLSPEC_XFGVIRT(INSNetSourceCreator, CreateNetSource)
        HRESULT ( STDMETHODCALLTYPE *CreateNetSource )( 
            __RPC__in INSNetSourceCreator * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszStreamName,
            /* [annotation][in] */ 
            _In_  IUnknown *pMonitor,
            /* [annotation][in] */ 
            _In_  BYTE *pData,
            /* [annotation][in] */ 
            _In_  IUnknown *pUserContext,
            /* [annotation][in] */ 
            _In_  IUnknown *pCallback,
            /* [annotation][in] */ 
            _In_  QWORD qwContext);
        
        DECLSPEC_XFGVIRT(INSNetSourceCreator, GetNetSourceProperties)
        HRESULT ( STDMETHODCALLTYPE *GetNetSourceProperties )( 
            __RPC__in INSNetSourceCreator * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszStreamName,
            /* [annotation][out] */ 
            _Out_  IUnknown **ppPropertiesNode);
        
        DECLSPEC_XFGVIRT(INSNetSourceCreator, GetNetSourceSharedNamespace)
        HRESULT ( STDMETHODCALLTYPE *GetNetSourceSharedNamespace )( 
            __RPC__in INSNetSourceCreator * This,
            /* [annotation][out] */ 
            _Out_  IUnknown **ppSharedNamespace);
        
        DECLSPEC_XFGVIRT(INSNetSourceCreator, GetNetSourceAdminInterface)
        HRESULT ( STDMETHODCALLTYPE *GetNetSourceAdminInterface )( 
            __RPC__in INSNetSourceCreator * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszStreamName,
            /* [annotation][out] */ 
            _Out_  VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(INSNetSourceCreator, GetNumProtocolsSupported)
        HRESULT ( STDMETHODCALLTYPE *GetNumProtocolsSupported )( 
            __RPC__in INSNetSourceCreator * This,
            /* [annotation][out] */ 
            _Out_  DWORD *pcProtocols);
        
        DECLSPEC_XFGVIRT(INSNetSourceCreator, GetProtocolName)
        HRESULT ( STDMETHODCALLTYPE *GetProtocolName )( 
            __RPC__in INSNetSourceCreator * This,
            /* [annotation][in] */ 
            _In_  DWORD dwProtocolNum,
            /* [annotation][out] */ 
            _Out_  WCHAR *pwszProtocolName,
            /* [annotation][out][in] */ 
            _Inout_  WORD *pcchProtocolName);
        
        DECLSPEC_XFGVIRT(INSNetSourceCreator, Shutdown)
        HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            __RPC__in INSNetSourceCreator * This);
        
        END_INTERFACE
    } INSNetSourceCreatorVtbl;

    interface INSNetSourceCreator
    {
        CONST_VTBL struct INSNetSourceCreatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INSNetSourceCreator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INSNetSourceCreator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INSNetSourceCreator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INSNetSourceCreator_Initialize(This)	\
    ( (This)->lpVtbl -> Initialize(This) ) 

#define INSNetSourceCreator_CreateNetSource(This,pszStreamName,pMonitor,pData,pUserContext,pCallback,qwContext)	\
    ( (This)->lpVtbl -> CreateNetSource(This,pszStreamName,pMonitor,pData,pUserContext,pCallback,qwContext) ) 

#define INSNetSourceCreator_GetNetSourceProperties(This,pszStreamName,ppPropertiesNode)	\
    ( (This)->lpVtbl -> GetNetSourceProperties(This,pszStreamName,ppPropertiesNode) ) 

#define INSNetSourceCreator_GetNetSourceSharedNamespace(This,ppSharedNamespace)	\
    ( (This)->lpVtbl -> GetNetSourceSharedNamespace(This,ppSharedNamespace) ) 

#define INSNetSourceCreator_GetNetSourceAdminInterface(This,pszStreamName,pVal)	\
    ( (This)->lpVtbl -> GetNetSourceAdminInterface(This,pszStreamName,pVal) ) 

#define INSNetSourceCreator_GetNumProtocolsSupported(This,pcProtocols)	\
    ( (This)->lpVtbl -> GetNumProtocolsSupported(This,pcProtocols) ) 

#define INSNetSourceCreator_GetProtocolName(This,dwProtocolNum,pwszProtocolName,pcchProtocolName)	\
    ( (This)->lpVtbl -> GetProtocolName(This,dwProtocolNum,pwszProtocolName,pcchProtocolName) ) 

#define INSNetSourceCreator_Shutdown(This)	\
    ( (This)->lpVtbl -> Shutdown(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INSNetSourceCreator_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_wmnetsourcecreator_0000_0001 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_wmnetsourcecreator_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmnetsourcecreator_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif

