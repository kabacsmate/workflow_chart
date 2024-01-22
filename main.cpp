/* This is the main function of my Workflow chart creater application. */
#include <stdio.h>
#include "todo_class.hpp"
#include <iostream>
#include "tests.hpp"

using namespace std;

int main(){
    ToDo firstToDo("Elso tennivalo.", "Ezzel probald ki, hogy mukodik-e a konstruktor.", 420, 1);
    ToDo secondToDo;

    testToDoClass(firstToDo, secondToDo);

    return 0;
}