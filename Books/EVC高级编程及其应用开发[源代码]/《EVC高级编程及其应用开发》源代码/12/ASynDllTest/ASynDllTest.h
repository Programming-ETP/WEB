// ASynDllTest.h : main header file for the ASYNDLLTEST application
//

#if !defined(AFX_ASYNDLLTEST_H__D057E130_C3E6_41C6_BCA4_F7B5A48A651B__INCLUDED_)
#define AFX_ASYNDLLTEST_H__D057E130_C3E6_41C6_BCA4_F7B5A48A651B__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CASynDllTestApp:
// See ASynDllTest.cpp for the implementation of this class
//

class CASynDllTestApp : public CWinApp
{
public:
	CASynDllTestApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CASynDllTestApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CASynDllTestApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft eMbedded Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ASYNDLLTEST_H__D057E130_C3E6_41C6_BCA4_F7B5A48A651B__INCLUDED_)
