/*L
*  Copyright Northwestern University
*  Copyright Stanford University (ATB 1.0 and ATS 1.0)
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
L*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CNPPD_TS_DateTime
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CNPPD_TS_DateTime

#include "type_iso.CANY.h"


namespace AIMXML
{

namespace iso
{	

class CNPPD_TS_DateTime : public ::AIMXML::iso::CANY
{
public:
	AIMXML_EXPORT CNPPD_TS_DateTime(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CNPPD_TS_DateTime(CNPPD_TS_DateTime const& init);
	void operator=(CNPPD_TS_DateTime const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CNPPD_TS_DateTime); }
	MemberElement<iso::CUVP_TS_DateTime, _altova_mi_iso_altova_CNPPD_TS_DateTime_altova_item> item;
	struct item { typedef Iterator<iso::CUVP_TS_DateTime> iterator; };
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CNPPD_TS_DateTime