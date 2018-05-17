#include "ADA.h"
#include <fstream>

int main()
{
    ADA<std::string, std::string> ada({
                                       {"NOOP", "0000" },
                                       {"LDA" , "0001" },
                                       {"ADD" , "0010" },
                                       {"SUB" , "0011" },
                                       {"STA" , "0100" },
                                       {"LDI" , "0101" },
                                       {"JMP" , "0110" },
                                       {"JC"  , "0111" },
                                       {"JZ"  , "1000" },
                                       {"OUT" , "1110" },
                                       {"HLT" , "1111" }
                                       });
    std::cout << ada.assemble("SAP1.asm");
    
    return 0;
}