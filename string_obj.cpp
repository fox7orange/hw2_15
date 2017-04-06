//
// Created by Fox&Orange on 28.03.17.
//

#include "string_obj.h"

string_obj::string_obj(const char *string_n):
string_n(nullptr)
{
    if (string_n) {
        set(this->string_n, string_n);
    }
}

string_obj::~string_obj() {
    if (this->string_n) {
        delete [] string_n;
        this->string_n = nullptr;
    }
}

string_obj::string_obj(const string_obj &rhs) {
    if (rhs.string_n)
        set(this->string_n, rhs.string_n);
}

string_obj& string_obj::operator=(const string_obj &rhs) {
    if (rhs.string_n) {
        if (this->get_string()) {
            this->~string_obj();
        }
        set(this->string_n, rhs.string_n);
    }
}

char *string_obj::get_string() {
    return this->string_n;
}

void string_obj::push(const char* new_string, const int kol) {
    set((this+kol)->string_n, new_string);
}

void string_obj::get_out() {
    int i=0;
    while (1) {
        if (!((this+i)->get_string())) {
            (this + i - 1)->~string_obj();
            break;
        }
        i++;
    }
}

