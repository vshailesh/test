#ifndef TestStudent_h
#define TestStudent_h

#include <cppunit/extensions/HelperMacros.h>

class StudentTest : public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE( StudentTest );
    CPPUNIT_TEST( testConstructor );
    CPPUNIT_TEST( testAssignAndRetrieveGrades );
    CPPUNIT_TEST_SUITE_END();

    public:
    void setUp();
    void tearDown();

    //method to test the constructor
    void testConstructor();
    
    //method to test the assigning retrieval of grades
    void testAssignAndRetrieveGrades();
};

#endif