#include <iostream>  
#include <vector>
#include <string>
int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs { argv, argv+argc }; 


    for (const auto& arg : cmdLineArgs)
    {
        std::cout << arg << std::endl;
    }

    return 0;
}