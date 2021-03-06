/********************************************************************
 * COPYRIGHT: 
 * Copyright (c) 1997-2001, International Business Machines Corporation and
 * others. All Rights Reserved.
 ********************************************************************/


/**
 * IntlTestConvert is the medium level test class for everything in the directory "utility".
 */

#include "unicode/utypes.h"
#include "itconv.h"
#include "cppcnvt.h"

#ifdef ICU_UNICODECONVERTER_USE_DEPRECATES
void IntlTestConvert::runIndexedTest( int32_t index, UBool exec, const char* &name, char* par )
{
    if (exec) logln("TestSuite Convert: ");
    switch (index) {
        case 0:
            name = "TestConvert"; 
            if (exec) {
                logln("TestConvert---"); logln("");
                ConvertTest test;
                callTest( test, par );
            }
            break;

        default: name = ""; break; //needed to end loop
    }
}

#endif /* ICU_UNICODECONVERTER_USE_DEPRECATES */
