/* This header files will contain my main class for the ToDo app */
//#pragma once

#include <iostream>
#include <stdint.h>
#include <string>


class ToDo{
    private:
        static uint32_t idCounter;
        uint32_t id;
        std::string title;
        std::string description;
        uint32_t priority;
        void* preconditions;
        void* dependents;
        time_t deadline;
    public:
        // Constructor
        ToDo(std::string = nullptr, std::string = nullptr, uint32_t = 0, time_t = 0);

        // Getter functions
        uint32_t getID();
        std::string getTitle();
        std::string getDescription();
        uint32_t getPriority();
        void* getPreconditions();
        void* getDependents();
        time_t getDeadline();

        // Setter functions
        void setTitle(std::string);
        void setDescription(std::string);
        void setPriority(uint32_t);
        void setPreconditions(void*);
        void setDependents(void*);
        void setDeadline(time_t);

        // Other functions
        void print(); // Print the whole Object

};

//uint32_t ToDo::idCounter = 0;