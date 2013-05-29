/*L
*  Copyright Northwestern University
*  Copyright Stanford University (ATB 1.0 and ATS 1.0)
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
L*/

////////////////////////////////////////////////////////////////////////
//
// StdAfx.h
//
// This file was generated by XMLSpy 2012r2sp1 Enterprise Edition.
//
// YOU SHOULD NOT MODIFY THIS FILE, BECAUSE IT WILL BE
// OVERWRITTEN WHEN YOU RE-RUN CODE GENERATION.
//
// Refer to the XMLSpy Documentation for further details.
// http://www.altova.com/xmlspy
//
////////////////////////////////////////////////////////////////////////

#pragma once
#ifndef ALTOVA_STDAFX_H_INCLUDED
#define ALTOVA_STDAFX_H_INCLUDED

#if _MSC_VER < 1300
#pragma warning ( disable : 4786 )	// identifier was truncated to '255' characters in the debug information
#endif

#if !defined( __GNUC__ )

#include <tchar.h>
#include <windows.h>

#endif


#include <xercesc/dom/DOM.hpp>
#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/sax/HandlerBase.hpp>
#include <xercesc/framework/LocalFileFormatTarget.hpp>


#ifdef _DEBUG
	#pragma comment(lib, "xerces-c_3D")
#else
	#pragma comment(lib, "xerces-c_3")
#endif





//{{AFX_INSERT_LOCATION}}

#endif // ALTOVA_STDAFX_H_INCLUDED