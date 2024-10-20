#include <iostream>
#include <vector>
#include <string>

int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs { argv, argv + argc }; 

    std::string inputfile;
    std::string outputfile;

    for (size_t i = 0; i < cmdLineArgs.size(); ++i)
    {
        const std::string& arg = cmdLineArgs[i];
        std::cout << "Processing argument: " << arg << std::endl;

        // Help option
        if (arg == "-h" || arg == "--help")
        {
            std::cout << "Usage: g++ [options] file...\n"
                      << "Options:\n"
                      << "-h, --help           Display this information\n"
                      << "--version            Display the version of the program\n"
                      << "-i <input_file>      Specify the input file\n"
                      << "-o <output_file>     Specify the output file\n";
            return 0; 
        }

        // Version option
        if (arg == "--version")
        {
            std::cout << "Version 1.0.1\n";
            return 0;  
        }

        // Input file option
        if (arg == "-i")
        {
            if (i + 1 < cmdLineArgs.size())
            {
                inputfile = cmdLineArgs[i + 1];
                std::cout << "Input file: " << inputfile << std::endl;
                ++i;
            }
            else
            {
                std::cerr << "Error: No input file provided after -i option.\n";
                return 1;
            }
        }

        // Output file option
        if (arg == "-o")
        {
            if (i + 1 < cmdLineArgs.size())
            {
                outputfile = cmdLineArgs[i + 1];
                std::cout << "Output file: " << outputfile << std::endl;
                ++i;  
            }
            else
            {
                std::cerr << "Error: No output file provided after -o option.\n";
                return 1;
            }
        }
    }

    std::cout << "Program execution finished.\n";
    return 0;
}
