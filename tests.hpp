/* Header file for the test functions */
#include <string>
#include "todo_class.hpp"


template <typename T>
void test(const T expected, const T actual, const std::string testName);
void testToDoClass(ToDo& expected, ToDo& tester);