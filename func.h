//
// Created by Fox&Orange on 28.03.17.
//

#ifndef DZ2CLION_FUNC_H
#define DZ2CLION_FUNC_H

//#include <iostream>
#include "Stack_str.hpp"

void set(char *&field, const char *other);

void show_stack(Stack_str &rhs);

void selection(int &select, Stack_str & str);

string_obj* realloc_str_plus(int &size, string_obj* rhs);

string_obj* realloc_str_minus(int &size, string_obj* rhs);
#endif //DZ2CLION_FUNC_H
