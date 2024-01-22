/* This will contain the test functions */

#include "tests.hpp"

template <typename T>
void test(const T expected, const T actual, const std::string testName){
    if( expected == actual )
        std::cout << "The " << testName << " was succesful!" << std::endl;
    else {
        std::cout << "The " << testName << " failed!" << std::endl;
        std::cout << "Expected: " << expected << " but the actual was " << actual << std::endl;
    }
}

void testToDoClass(ToDo& expected, ToDo& tester){
    tester.setTitle(expected.getTitle());
    test(expected.getTitle(), tester.getTitle(), "Title setter-getter test");

    tester.setDescription(expected.getDescription());
    test(expected.getDescription(), tester.getDescription(), "Description setter-getter test");

    tester.setPriority(expected.getPriority());
    test(expected.getPriority(), tester.getPriority(), "Priority setter-getter test");

    tester.setDeadline(expected.getDeadline());
    test(expected.getDeadline(), tester.getDeadline(), "Deadline setter-getter test");

    std::cout << "The expected object is: " << std::endl;
    expected.print();

}