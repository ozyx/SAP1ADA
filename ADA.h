// Assembler / Disassembler class
#include <unordered_map>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include <bitset>
#include "Exceptions.h"

template <typename T1, typename T2>
class ADA
{
  public:
    // Constructor
    ADA(std::vector<std::pair<T1, T2>> pairs)
    {
        for (std::pair<T1, T2> p : pairs)
        {
            this->assembler.insert(std::make_pair(p.first, p.second));
            this->disassembler.insert(std::make_pair(p.second, p.first));
        }
    }

    std::string assemble(std::string inputFile)
    {
        std::ostringstream os;
        std::ifstream iFile;
        iFile.open(inputFile);
        std::string command;
        int num;
        while (iFile >> command)
        {
            // Check if the command is even valid (it exists in our map)
            if(assembler.find(command) == assembler.end()){
                throw new ItemNotFound("Invalid instruction: " + command);
            }
            
            os << assembler.at(command);

            if(isBinary(command)){
                iFile >> num;
                os << " ";
                os << std::bitset<4>(num).to_string();
            }
            os << std::endl;
        }
        return os.str();
    }

    // Destructor
    ~ADA() {}

  private:
    std::unordered_map<std::string, std::string> assembler;
    std::unordered_map<std::string, std::string> disassembler;

    bool isBinary(std::string instruction)
    {
        return instruction != "NOOP" || instruction != "OUT" || instruction != "HLT";
    }
};