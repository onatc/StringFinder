#include <string>
#include <vector>
#include <cxxtest/TestSuite.h>

#include "search.h"

class SearchTests : public CxxTest::TestSuite
{
public:
   void testLinearSearchTrueEnd( void )
   {
     
	   std::vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };


		TS_ASSERT_EQUALS(linear_search(list, 10).index, 9);
		TS_ASSERT_EQUALS(linear_search(list, 10).value, 10);
		TS_ASSERT_EQUALS(linear_search(list, 10).found, true);
   }  

   void testLinearSearchTrueMid(void)
   {

	   std::vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };


	   TS_ASSERT_EQUALS(linear_search(list, 4).index, 3);
	   TS_ASSERT_EQUALS(linear_search(list, 4).value, 4);
	   TS_ASSERT_EQUALS(linear_search(list, 4).found, true);
   }

   void testLinearSearchFalse(void)
   {

	   std::vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };


	   TS_ASSERT_EQUALS(linear_search(list, 11).index, 9);
	   TS_ASSERT_EQUALS(linear_search(list, 11).value, 10);
	   TS_ASSERT_EQUALS(linear_search(list, 11).found, false);
   }

   void testIterativeSearchTrueSmall(void)
   {

	   std::vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };


	   TS_ASSERT_EQUALS(iterative_binary_search(list, 3).index, 2);
	   TS_ASSERT_EQUALS(iterative_binary_search(list, 3).value, 3);
	   TS_ASSERT_EQUALS(iterative_binary_search(list, 3).found, true);
   }

   void testIterativeSearchTrueLarge(void)
   {

	   std::vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };


	   TS_ASSERT_EQUALS(iterative_binary_search(list, 8).index, 7);
	   TS_ASSERT_EQUALS(iterative_binary_search(list, 8).value, 8);
	   TS_ASSERT_EQUALS(iterative_binary_search(list, 8).found, true);
   }

   void testIterativeSearchTrueMid(void)
   {

	   std::vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };


	   TS_ASSERT_EQUALS(iterative_binary_search(list, 4).index, 3);
	   TS_ASSERT_EQUALS(iterative_binary_search(list, 4).value, 4);
	   TS_ASSERT_EQUALS(iterative_binary_search(list, 4).found, true);
   }

   void testIterativeSearchFalse(void)
   {

	   std::vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };


	   TS_ASSERT_EQUALS(iterative_binary_search(list, 11).index, 9);
	   TS_ASSERT_EQUALS(iterative_binary_search(list, 11).value, 10);
	   TS_ASSERT_EQUALS(iterative_binary_search(list, 11).found, false);
   }

   void testRecursiveSearchTrueSmall(void)
   {

	   std::vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };


	   TS_ASSERT_EQUALS(recursive_binary_search(list, 2).index, 1);
	   TS_ASSERT_EQUALS(recursive_binary_search(list, 2).value, 2);
	   TS_ASSERT_EQUALS(recursive_binary_search(list, 2).found, true);
   }

   void testRecursiveSearchTrueLarge(void)
   {

	   std::vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };


	   TS_ASSERT_EQUALS(recursive_binary_search(list, 10).index, 9);
	   TS_ASSERT_EQUALS(recursive_binary_search(list, 10).value, 10);
	   TS_ASSERT_EQUALS(recursive_binary_search(list, 10).found, true);
   }

   void testRecursiveSearchTrueMid(void)
   {

	   std::vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };


	   TS_ASSERT_EQUALS(recursive_binary_search(list, 5).index, 4);
	   TS_ASSERT_EQUALS(recursive_binary_search(list, 5).value, 5);
	   TS_ASSERT_EQUALS(recursive_binary_search(list, 5).found, true);
   }

   void testRecursiveSearchFalseLarge(void)
   {

	   std::vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };


	   TS_ASSERT_EQUALS(recursive_binary_search(list, 11).index, 9);
	   TS_ASSERT_EQUALS(recursive_binary_search(list, 11).value, 10);
	   TS_ASSERT_EQUALS(recursive_binary_search(list, 11).found, false);
   }

   void testRecursiveSearchFalseSmall(void)
   {

	   std::vector<int> list = { 1,2,3,4,5,6,7,8,9,10 };


	   TS_ASSERT_EQUALS(recursive_binary_search(list, 0).index, 0);
	   TS_ASSERT_EQUALS(recursive_binary_search(list, 0).value, 1);
	   TS_ASSERT_EQUALS(recursive_binary_search(list, 0).found, false);
   }



};
