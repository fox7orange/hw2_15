//
// Created by Fox&Orange on 28.03.17.
//

#include "func.h"
#include "Stack_str.hpp"

void set(char *&field, const char * other){
    size_t len_sp = strlen(other) + 1;
    field = new char[len_sp];
    memcpy(field, other, len_sp);
}


void show_stack(Stack_str &rhs) {
    for (int i = 0; i < rhs.get_size(); i++) {
        if (rhs.get_str(i))
            std::cout << rhs.get_str(i) << std::endl;
    }
}

void selection(int &select, Stack_str& st) {
    std::cout << "Чтобы добавить строку в стэк, нажмите 1" << std::endl;
    std::cout << "Чтобы удалить строку из стэка, нажмите 2" << std::endl;
    std::cout << "Чтобы закончить редактирование стэка, нажмите 0" << std::endl;
    std::cin >> select;
    int i;
    switch (select) {
        case 1:
            std::cout << "Введите добавляемую строку" << std::endl;
            char new_str[256];
            i = 0;
            std::cin.ignore(255, '\n');
            std::cin.getline(new_str,255, '\n');
            st.push(new_str);
            break;
        case 2:
            st.pop();
            break;
        case 0:
            break;
        default:
            std::cout << "Введенное значение не соответствует пунктам меню" << std::endl;
            break;
    }
}

string_obj * realloc_str_plus(int &size, string_obj* rhs) {
    size ++;
    string_obj* newbuf = new string_obj[size];
    std::copy_n(rhs, std::min(size-1, size), newbuf);
    delete[] rhs;
    return newbuf;
    }

string_obj *realloc_str_minus(int &size, string_obj *rhs) {
    size --;
    string_obj* newbuf = new string_obj[size];
    std::copy_n(rhs, std::min(size+1, size), newbuf);
    delete[] rhs;
    return newbuf;
}
