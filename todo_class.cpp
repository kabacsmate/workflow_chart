#include "todo_class.hpp"

unsigned int ToDo::idCounter = 0;
// Constructor
ToDo::ToDo(const std::string& cTitle, const std::string& cDescription, uint32_t cPriority, time_t cDeadline){
    id = ToDo::idCounter++;
    title = cTitle;
    description = cDescription;
    priority = cPriority;
    preconditions = nullptr;
    dependents = nullptr;
    deadline = cDeadline;
}

// Getter functions
uint32_t ToDo::getID(){
    return id;
}

std::string ToDo::getTitle(){
    return title;
}

std::string ToDo::getDescription(){
    return description;
}

uint32_t ToDo::getPriority(){
    return priority;
}

void* ToDo::getPreconditions(){
    return preconditions;
}

void* ToDo::getDependents(){
    return dependents;
}

time_t ToDo::getDeadline(){
    return deadline;
}

//Setter functions
void ToDo::setTitle(std::string newTitle){
    title = newTitle;
}

void ToDo::setDescription(std::string newDescription){
    description = newDescription;
}

void ToDo::setPriority(uint32_t newPriority){
    priority = newPriority;
}

void ToDo::setPreconditions(void* newPreconditions){ // maybe it should be reimplemented
    preconditions = newPreconditions;
}

void ToDo::setDependents(void* newDependents){ //maybe it should be reimplemented
    dependents = newDependents;
}

void ToDo::setDeadline(time_t newDeadline){
    deadline = newDeadline;
}

//Other functions
void ToDo::print(){
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Identifier: " << getID() << std::endl;
    std::cout << "Title: " << getTitle() << std::endl;
    std::cout << "Description: " << getDescription() << std::endl;
    std::cout << "Priority: " << getPriority() << std::endl;
    std::cout << "Deadline: " << getDeadline() << std::endl << std::endl;
}