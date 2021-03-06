#ifndef __TEXTFILETESTCASE_H
#define __TEXTFILETESTCASE_H

#include "cppunit/extensions/HelperMacros.h"


class TextFileTestCase : public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE( TextFileTestCase );
	CPPUNIT_TEST( testWrite );
	CPPUNIT_TEST( testRead );	
	CPPUNIT_TEST_SUITE_END();
public:
	TextFileTestCase(void);
	~TextFileTestCase(void);
protected:
	void	testWrite();
	void	testRead();	
};

#endif