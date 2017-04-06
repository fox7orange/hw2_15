//
// Created by Fox&Orange on 01.04.17.
//

#ifndef DZ2CLION_STACK_STR_HPP
#define DZ2CLION_STACK_STR_HPP


#include "string_obj.h"

class Stack_str {
public:
    Stack_str(string_obj rhs = nullptr);

    void push(const char * other);
    void pop();
    char * get_str(int i);
    int get_size();
    void delete_div_2();

private:
    string_obj* str_o;
    int size;

};


#endif //DZ2CLION_STACK_STR_HPP
