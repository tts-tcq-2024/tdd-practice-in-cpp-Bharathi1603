#include <iostream>

class StringCalculator
{
public:
      int add(const std::string input);
private:
      void findAndReplaceCharacter(std::string& str, char findCharacter, char replaceCharacter);
};
