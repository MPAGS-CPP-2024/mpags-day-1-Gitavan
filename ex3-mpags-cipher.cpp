#include <iostream>  
int main() 
{   
     //Create a constant double and outputit
    const double double_var{2.7};
    std::cout << "This is a double variable = " << double_var << std::endl;

    //Create an integer and modify it
    int int_var {5};
    int_var+= 10;

    //Make the integer a constant
    const int const_var{int_var};

    //Initialise int from double
    std::string str_var {"This is the output of the string variable"};
    std::cout << str_var << std::endl;
} 