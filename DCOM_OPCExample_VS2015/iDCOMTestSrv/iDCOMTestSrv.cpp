// iDCOMTestSrv.cpp : WinMain ��ʵ��


#include "stdafx.h"
#include "resource.h"
#include "iDCOMTestSrv_i.h"


using namespace ATL;

#include <stdio.h>

class CiDCOMTestSrvModule : public ATL::CAtlServiceModuleT< CiDCOMTestSrvModule, IDS_SERVICENAME >
{
public :
	DECLARE_LIBID(LIBID_iDCOMTestSrvLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_IDCOMTESTSRV, "{9D17DCE8-2F22-4893-A9C1-659AC7274E98}")
		HRESULT InitializeSecurity() throw()
	{
		// TODO : ���� CoInitializeSecurity ��Ϊ�����ṩ�ʵ��İ�ȫ����
		// ���� - PKT ����������֤��
		// RPC_C_IMP_LEVEL_IDENTIFY ��ģ�⼶��
		// �Լ��ʵ��ķ� NULL ��ȫ��������

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

