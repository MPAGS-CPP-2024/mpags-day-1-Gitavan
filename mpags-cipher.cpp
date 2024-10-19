#include <iostream> //preprocessor directive
#include <string>
int main()
{ //scope
    // This is a comment
    /* This is a
    Multline comment */
  /*  int a;
    double b = 1.2;
    double c{3.4};
    a = 43;
    b = 2.2;
    c = a*b;
    int d{3};
    std::cout << c << std::endl;

    return 0;
*/
    std::cout << "Hello World!\n"; //must add ";" on every statement
  
    std::string msg {"Hello"};
    std::cout << msg << "\n";

    const double b{5.5}; //Can't change this variable

    std::cout << msg[4] << std::endl;
    double c{2.3};
    int d{4};
    int e = c/d;

    std::cout << e << std::endl;

    char in_char{'x'};
    while(std::cin >> in_char)
    {   
        


    }







} //scope

/*Types: 
Booean (true/fals) - bool
Integer number - int
Floating point number - floar
Double precision number - double
Single character/0-255 number - char

e.g. int d{1};

*/