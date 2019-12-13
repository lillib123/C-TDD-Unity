/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "../unity/unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "ProductionCode2.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_IgnoredTest(void);
extern void test_AnotherIgnoredTest(void);
extern void test_ThisFunctionHasNotBeenTested_NeedsToBeImplemented(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test/TestProductionCode2.c");
  /*RUN_TEST(test_IgnoredTest, 18);
  RUN_TEST(test_AnotherIgnoredTest, 23);
  RUN_TEST(test_ThisFunctionHasNotBeenTested_NeedsToBeImplemented, 28);*/

  return (UnityEnd());
}
