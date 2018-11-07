/*
7.2.10 (r) Zdefiniuj unię super_int, w której będzie można przechowywać
zarówno zmienne typu int, jak i unsigned int.
*/



#include <stdio.h>

union super_int {
    int i_var;
    unsigned int ui_var;
};



int main()
{
    
    return 0;
}
