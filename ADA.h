// Assembler / Disassembler class
#include <initializer_list>
#include <unordered_map>
#include <vector>

template <typename T1, typename T2>
class ADA
{
  public:
    // Constructor
    ADA(std::vector<std::pair<T1, T2>> data);

    // Destructor
    ~ADA();

  private:
    std::unordered_map<std::string, std::string> assembler;
    std::unordered_map<std::string, std::string> disassembler;
};