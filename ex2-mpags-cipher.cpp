#include <iostream>  
int main() 
{   
    //Create, modify and output an integer variable
    int int_var {5};
    int_var+= 10;
    std::cout << "This is a modified integer variable = " << int_var << std::endl;

    //Create a double and output it
    double double_var{2.7};
    std::cout << "This is a double variable = " << double_var << std::endl;

    //Initialise int from double
    int int_var2 {double_var};
    std::cout << "This is an int from a double variable = " << int_var2 << std::endl;
} 