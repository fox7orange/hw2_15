//
// Created by Fox&Orange on 01.04.17.
//

#include "Stack_str.hpp"
#include "func.h"

Stack_str::Stack_str(string_obj rhs):
size(1)
{
    str_o = new string_obj[this->size];
}

void Stack_str::push(const char *other) {
    str_o->push(other, this->size-1);
    this->str_o = realloc_str_plus(size, str_o);
}

void Stack_str::pop() {
    str_o->get_out();
    this->str_o = realloc_str_minus(size, str_o);

}

char *Stack_str::get_str(int i) {
    return str_o[i].get_string();
}

int Stack_str::get_size() {
    return size;
}

void Stack_str::delete_div_2() {
    std::cout << "Будет произведено удаление четных элементов стэка" << std::endl;
    int kol_func = this->size-2;

    for (int i = kol_func; i >= 0; i--) {
        if (((kol_func - i + 1) % 2) == 0) {
            (str_o + i)->~string_obj();
        }
    }
}

