/*
*  Copyright Northwestern University
*  Copyright Stanford University (ATB 1.0 and ATS 1.0)
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.

*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CCharacteristicQuantification
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CCharacteristicQuantification



namespace AIMXML
{

class CCharacteristicQuantification : public TypeBase
{
public:
	AIMXML_EXPORT CCharacteristicQuantification(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CCharacteristicQuantification(CCharacteristicQuantification const& init);
	void operator=(CCharacteristicQuantification const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCharacteristicQuantification); }

	MemberAttribute<__int64,_altova_mi_altova_CCharacteristicQuantification_altova_cagridId, 0, 0> cagridId;	// cagridId Cinteger

	MemberAttribute<string_type,_altova_mi_altova_CCharacteristicQuantification_altova_name, 0, 0> name;	// name Cstring

	MemberAttribute<double,_altova_mi_altova_CCharacteristicQuantification_altova_annotatorConfidence, 0, 0> annotatorConfidence;	// annotatorConfidence Cdouble
	AIMXML_EXPORT void SetXsiType();
};


}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CCharacteristicQuantification