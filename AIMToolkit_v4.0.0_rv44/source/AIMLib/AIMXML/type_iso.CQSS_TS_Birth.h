/*L
*  Copyright Northwestern University
*  Copyright Stanford University (ATB 1.0 and ATS 1.0)
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
L*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CQSS_TS_Birth
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CQSS_TS_Birth

#include "type_iso.CQSET_TS_Birth.h"


namespace AIMXML
{

namespace iso
{	

class CQSS_TS_Birth : public ::AIMXML::iso::CQSET_TS_Birth
{
public:
	AIMXML_EXPORT CQSS_TS_Birth(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CQSS_TS_Birth(CQSS_TS_Birth const& init);
	void operator=(CQSS_TS_Birth const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CQSS_TS_Birth); }
	MemberElement<iso::CTS_Birth, _altova_mi_iso_altova_CQSS_TS_Birth_altova_term> term;
	struct term { typedef Iterator<iso::CTS_Birth> iterator; };
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CQSS_TS_Birth