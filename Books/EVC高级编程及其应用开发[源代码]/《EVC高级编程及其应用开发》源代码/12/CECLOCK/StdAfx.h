// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__95D4C494_BB51_44B4_9629_739D9F60E0C6__INCLUDED_)
#define AFX_STDAFX_H__95D4C494_BB51_44B4_9629_739D9F60E0C6__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions

#if defined(_WIN32_WCE_PSPC) && (_WIN32_WCE < 211)
#error OLE classes not supported for Palm-Size PC.
#endif
#ifndef _AFX_NO_OLE_SUPPORT
// OLE support available only for dynamic builds in MFC for Windows CE
#include <afxole.h>         // MFC OLE classes
#include <afxodlgs.h>       // MFC OLE dialog classes
#include <afxdisp.h>        // MFC OLE automation classes
#endif // _AFX_NO_OLE_SUPPORT


#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT


//{{AFX_INSERT_LOCATION}}
// Microsoft eMbedded Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__95D4C494_BB51_44B4_9629_739D9F60E0C6__INCLUDED_)
