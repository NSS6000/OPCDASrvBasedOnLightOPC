// ArithmeticLib.h : CArithmeticLib ������

#pragma once
#include "resource.h"       // ������



#include "iDCOMTestSrv_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
#endif

using namespace ATL;


// CArithmeticLib

class ATL_NO_VTABLE CArithmeticLib :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CArithmeticLib, &CLSID_ArithmeticLib>,
	public IDispatchImpl<IArithmeticLib, &IID_IArithmeticLib, &LIBID_iDCOMTestSrvLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CArithmeticLib()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_ARITHMETICLIB)


BEGIN_COM_MAP(CArithmeticLib)
	COM_INTERFACE_ENTRY(IArithmeticLib)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(add)(int nNum1, int nNum2, int * pnResult);
	STDMETHOD(sub)(int nNum1, int nNum2, int * pnResult);
};

OBJECT_ENTRY_AUTO(__uuidof(ArithmeticLib), CArithmeticLib)
