/*L
*  Copyright Northwestern University
*  Copyright Stanford University (ATB 1.0 and ATS 1.0)
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
L*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CHIST_TEL_Url
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CHIST_TEL_Url

#include "type_iso.CLIST_TEL_Url.h"


namespace AIMXML
{

namespace iso
{	

class CHIST_TEL_Url : public ::AIMXML::iso::CLIST_TEL_Url
{
public:
	AIMXML_EXPORT CHIST_TEL_Url(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CHIST_TEL_Url(CHIST_TEL_Url const& init);
	void operator=(CHIST_TEL_Url const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CHIST_TEL_Url); }
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CHIST_TEL_Url