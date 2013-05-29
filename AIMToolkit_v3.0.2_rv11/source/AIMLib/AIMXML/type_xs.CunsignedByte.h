/*
*  Copyright Northwestern University
*  Copyright Stanford University (ATB 1.0 and ATS 1.0)
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.

*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_xs_ALTOVA_CunsignedByte
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_xs_ALTOVA_CunsignedByte



namespace AIMXML
{

namespace xs
{	

class CunsignedByte : public TypeBase
{
public:
	AIMXML_EXPORT CunsignedByte(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CunsignedByte(CunsignedByte const& init);
	void operator=(CunsignedByte const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CunsignedByte); }
	void operator= (const unsigned& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::IntegerFormatter);
		XercesTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator unsigned()
	{
		return CastAs<unsigned >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_xs_ALTOVA_CunsignedByte