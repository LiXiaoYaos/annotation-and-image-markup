/*
*  Copyright Northwestern University
*  Copyright Stanford University (ATB 1.0 and ATS 1.0)
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.

*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CequipmentType
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CequipmentType



namespace AIMXML
{

class CequipmentType : public TypeBase
{
public:
	AIMXML_EXPORT CequipmentType(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CequipmentType(CequipmentType const& init);
	void operator=(CequipmentType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CequipmentType); }
	MemberElement<CEquipment, _altova_mi_altova_CequipmentType_altova_Equipment> Equipment;
	struct Equipment { typedef Iterator<CEquipment> iterator; };
};


}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CequipmentType