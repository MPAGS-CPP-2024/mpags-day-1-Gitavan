#include <iostream>  
#include <vector>
#include <string>
int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs { argv, argv+argc }; 

    for (const auto& arg : cmdLineArgs)
    {
        std::cout << arg << std::endl;
        
        if (arg=="-h"|| arg== "--help"){
            std::cout << "Usage: g++ [options] file...\n"
                      << "Options:\n"
                      << "-pass-exit-codes Exit with highest error code from a phase\n"
                      << "--help Display this information\n"
                      << "--target-help Display target specific command line options\n";


        }
    }
    return 0;
}