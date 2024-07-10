#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cctype> 

class StringCalculator
{
public:
      int add(std::string input);
private:
      void findAndReplaceCharacter(std::string& str, char findCharacter, char replaceCharacter);

      std::vector<int> splitAndFilterNumbers(const std::string& str, char delimiter);

      int performAddition(std::vector<int> numbers);

};
