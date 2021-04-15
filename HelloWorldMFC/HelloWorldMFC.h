// HelloWorldMFC.h : main header file for the HelloWorldMFC DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CHelloWorldMFCApp
// See HelloWorldMFC.cpp for the implementation of this class
//

class CHelloWorldMFCApp : public CWinApp
{
public:
	CHelloWorldMFCApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
