#include <iostream>  
int main() 
{   
     //Create a constant double and int variables
    double double_var{2.7};
    double double_var2{10.4};
    int int_var {5};
    int int_var2 {12};


    //Product of doubles and ints
    std::cout << "Product of doubles and ints = " << double_var*double_var2*int_var*int_var2 << std::endl;
    
    //Output double divided by int and int divided by int
    std::cout << "Double divided by int = " << double_var/int_var << std::endl << "Int divided by int = " << int_var2/int_var << std::endl;
    
    //Another string variable
    std::string str_var {"Another one!"};

    //Create char variable, assign it to the value of the str variable and then output it
    char char_var{str_var[3]};
    std::cout << "Char variable = " << char_var << std::endl;
} 