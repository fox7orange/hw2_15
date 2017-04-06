//
// Created by Fox&Orange on 28.03.17.
//

#ifndef DZ2CLION_STRING_OBJ_H
#define DZ2CLION_STRING_OBJ_H

#include <iostream>

void set(char *&field, const char *other);

class string_obj {
public:
    string_obj(const char *string_n = nullptr);
    string_obj(const string_obj& rhs);
    string_obj &operator=(const string_obj& rhs);
    ~string_obj();

    char* get_string();
    void push(const char *new_str, const int kol);
    void get_out();

private:
    char* string_n;
};

#endif //DZ2CLION_STRING_OBJ_H
