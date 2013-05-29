/*L
*  Copyright Northwestern University
*  Copyright Stanford University (ATB 1.0 and ATS 1.0)
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
L*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CCO
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CCO

#include "type_iso.CQTY.h"


namespace AIMXML
{

namespace iso
{	

class CCO : public ::AIMXML::iso::CQTY
{
public:
	AIMXML_EXPORT CCO(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CCO(CCO const& init);
	void operator=(CCO const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CCO); }

	MemberAttribute<int,_altova_mi_iso_altova_CCO_altova_value2, 0, 0> value2;	// value Cint
	MemberElement<iso::CCD, _altova_mi_iso_altova_CCO_altova_code> code;
	struct code { typedef Iterator<iso::CCD> iterator; };
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CCO