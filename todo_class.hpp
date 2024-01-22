/* This header files will contain my main class for the ToDo app */
#pragma once

#include <iostream>
#include <stdint.h>
#include <string>


class ToDo{
    private:
        static unsigned int idCounter;
        unsigned int id;
        std::string title;
        std::string description;
        unsigned int priority;
        void* preconditions;
        void* dependents;
        time_t deadline;
    public:
        // Constructor
        ToDo() : id(idCounter++), title(""), description(""), priority(0), preconditions(nullptr), dependents(nullptr), deadline(0) {}
        ToDo(const std::string&, const std::string&, const unsigned int, const time_t);

        // Getter functions
        unsigned int getID();
        std::string getTitle();
        std::string getDescription();
        unsigned int getPriority();
        void* getPreconditions();
        void* getDependents();
        time_t getDeadline();

        // Setter functions
        void setTitle(std::string);
        void setDescription(std::string);
        void setPriority(unsigned int);
        void setPreconditions(void*);
        void setDependents(void*);
        void setDeadline(time_t);

        // Other functions
        void print(); // Print the whole Object

};