/*
 *
 *  Copyright (C) 2003-2010, OFFIS e.V.
 *  All rights reserved.  See COPYRIGHT file for details.
 *
 *  This software and supporting documentation were developed by
 *
 *    OFFIS e.V.
 *    R&D Division Health
 *    Escherweg 2
 *    D-26121 Oldenburg, Germany
 *
 *
 *  Module: dcmsr
 *
 *  Author: Joerg Riesmeier
 *
 *  Purpose:
 *    classes: DSRKeyObjectSelectionDocumentConstraintChecker
 *
 *  Last Update:      $Author: joergr $
 *  Update Date:      $Date: 2010-10-14 13:16:32 $
 *  CVS/RCS Revision: $Revision: 1.5 $
 *  Status:           $State: Exp $
 *
 *  CVS/RCS Log at end of file
 *
 */


#ifndef DSRKEYCC_H
#define DSRKEYCC_H

#include "dcmtk/config/osconfig.h"   /* make sure OS specific configuration is included first */

#include "dcmtk/dcmsr/dsriodcc.h"


/*---------------------*
 *  class declaration  *
 *---------------------*/

/** Class for checking the content relationship constraints of the
 *  Key Object Selection Document IOD
 */
class DSRKeyObjectSelectionDocumentConstraintChecker
  : public DSRIODConstraintChecker
{

  public:

    /** default constructor
     */
    DSRKeyObjectSelectionDocumentConstraintChecker();

    /** destructor
     */
    virtual ~DSRKeyObjectSelectionDocumentConstraintChecker();

    /** check whether by-reference relationships are allowed for this SR IOD
     ** @return always returns OFFalse, i.e. by-reference relationships are not allowed
     */
    virtual OFBool isByReferenceAllowed() const;

    /** check whether this SR IOD requires template support
     ** @return always returns OFTrue, i.e. template support is required
     */
    virtual OFBool isTemplateSupportRequired() const;

    /** get identifier of the root template
     ** @return root template identifier (TID) "2010"
     */
    virtual const char *getRootTemplateIdentifier() const;

    /** get the associated document type of the SR IOD
     ** @return document type (DSRTypes::DT_KeyObjectSelectionDocument)
     */
    virtual E_DocumentType getDocumentType() const;

    /** check whether specified content relationship is allowed for this IOD
     ** @param  sourceValueType   value type of the source content item to be checked
     *  @param  relationshipType  type of relationship between source and target item
     *  @param  targetValueType   value type of the target content item to be checked
     *  @param  byReference       optional flag indicating whether the node/relationship
     *                            should be added by-value (default) or by-reference
     ** @return OFTrue if content relationship is allowed, OFFalse otherwise
     */
    virtual OFBool checkContentRelationship(const E_ValueType sourceValueType,
                                            const E_RelationshipType relationshipType,
                                            const E_ValueType targetValueType,
                                            const OFBool byReference = OFFalse) const;
};


#endif


/*
 *  CVS/RCS Log:
 *  $Log: dsrkeycc.h,v $
 *  Revision 1.5  2010-10-14 13:16:32  joergr
 *  Updated copyright header. Added reference to COPYRIGHT file.
 *
 *  Revision 1.4  2010-09-30 08:57:14  joergr
 *  Renamed class and enumeration related to the Key Object Selection Document.
 *
 *  Revision 1.3  2005-12-08 16:05:08  meichel
 *  Changed include path schema for all DCMTK header files
 *
 *  Revision 1.2  2003/10/09 12:56:42  joergr
 *  Added check for root template identifier when reading an SR document.
 *
 *  Revision 1.1  2003/09/15 14:22:04  joergr
 *  Introduced new class to facilitate checking of SR IOD relationship content
 *  constraints. Replaced old implementation distributed over numerous classes.
 *
 */
