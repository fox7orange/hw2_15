#include <iostream>
#include "string_obj.h"
#include "func.h"
#include "Stack_str.hpp"

int main() {
    Stack_str st;
    st.push("Hello, world!");


    st.push("WTF?");
    st.pop();

    int select = -1;
    do {
        selection(select, st);
    }
        while (select != 0);
    show_stack(st);
    std::cout<<""<<std::endl;

    st.delete_div_2();

    show_stack(st);
    return 0;
}