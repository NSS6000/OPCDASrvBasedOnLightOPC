// iDCOMTestSrv.cpp : WinMain ��ʵ��


#include "stdafx.h"
#include "resource.h"
#include "iDCOMTestSrv_i.h"


#include <stdio.h>

class CiDCOMTestSrvModule : public ATL::CAtlServiceModuleT< CiDCOMTestSrvModule, IDS_SERVICENAME >
	{
public :
	DECLARE_LIBID(LIBID_iDCOMTestSrvLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_IDCOMTESTSRV, "{4E0B3F95-5B78-48AC-8CAF-A0C3CFCB1206}")
		HRESULT InitializeSecurity() throw()
	{
		// TODO : ���� CoInitializeSecurity ��Ϊ�����ṩ�ʵ��İ�ȫ����
		// ���� - PKT ����������֤��
		// RPC_C_IMP_LEVEL_IDENTIFY ��ģ�⼶��
		// �Լ��ʵ��ķ� null ��ȫ˵������

		return S_OK;
	}
	};

CiDCOMTestSrvModule _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

