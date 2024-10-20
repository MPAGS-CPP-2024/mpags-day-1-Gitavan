#include <iostream>  
#include <cctype> // Adds libraries
int main() 
{   
    char in_char{'x'};
    std::string out_str{""};

    while (std::cin >> in_char)
    {   // Convert to upper case
        if (std::isalpha(in_char))
        {
            out_str += std::toupper(in_char);
            continue;
        }

        // Convert numbers to words
        switch (in_char)
        {
            case '1':
                out_str += "ONE";
                break;

            case '2':
                out_str += "TWO";
                break;

            case '3':
                out_str += "THREE";
                break;

            case '4':
                out_str += "FOUR";
                break;

            case '5':
                out_str += "FIVE";
                break;

            case '6':
                out_str += "SIX";
                break;

            case '7':
                out_str += "SEVEN";
                break;

            case '8':
                out_str += "EIGHT";
                break;

            case '9':
                out_str += "NINE";
                break;

            case '0':
                out_str += "ZERO";
                break;

            default:
                //Do nothing
                break;
            
        }
    }

    std::cout << out_str << std::endl; // prints end result
} 