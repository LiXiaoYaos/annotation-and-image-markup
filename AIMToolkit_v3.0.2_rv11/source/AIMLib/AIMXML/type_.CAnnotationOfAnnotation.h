/*
*  Copyright Northwestern University
*  Copyright Stanford University (ATB 1.0 and ATS 1.0)
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.

*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CAnnotationOfAnnotation
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CAnnotationOfAnnotation

#include "type_.CAnnotation.h"


namespace AIMXML
{

class CAnnotationOfAnnotation : public ::AIMXML::CAnnotation
{
public:
	AIMXML_EXPORT CAnnotationOfAnnotation(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CAnnotationOfAnnotation(CAnnotationOfAnnotation const& init);
	void operator=(CAnnotationOfAnnotation const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAnnotationOfAnnotation); }
	MemberElement<CreferencedAnnotationCollectionType, _altova_mi_altova_CAnnotationOfAnnotation_altova_referencedAnnotationCollection> referencedAnnotationCollection;
	struct referencedAnnotationCollection { typedef Iterator<CreferencedAnnotationCollectionType> iterator; };
	AIMXML_EXPORT void SetXsiType();
};


}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CAnnotationOfAnnotation