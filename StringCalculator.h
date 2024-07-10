#include <iostream>

class StringCalculator
{
public:
      int add(const std::string input);
private:
      void findAndReplaceCharacter(std::string& str, char findCharacter, char replaceCharacter);

      std::vector<int> splitAndFilterNumbers(const std::string& str, char delimiter);

      int performAddition(std::vector<int> numbers);

};
