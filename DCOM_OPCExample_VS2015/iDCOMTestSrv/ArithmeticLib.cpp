// ArithmeticLib.cpp : CArithmeticLib ��ʵ��

#include "stdafx.h"
#include "ArithmeticLib.h"


// CArithmeticLib



STDMETHODIMP CArithmeticLib::add(int nNum1, int nNum2, int * pnResult)
{
	// TODO: �ڴ����ʵ�ִ���
	*pnResult = nNum1 + nNum2;

	return S_OK;
}


STDMETHODIMP CArithmeticLib::sub(int nNum1, int nNum2, int * pnResult)
{
	// TODO: �ڴ����ʵ�ִ���
	*pnResult = nNum1 - nNum2;
	return S_OK;
}
