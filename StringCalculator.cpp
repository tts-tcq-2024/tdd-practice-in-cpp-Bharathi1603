#include "StringCalculator.h"

int StringCalculator::add(const std::string input)
{
  if ((input.empty()) || (input == "0"))
  {
      return 0;
  }
  else
  {
    char delimiter = ',';
    findAndReplaceCharacter(input,'\n', delimiter);
  }
  return -1;
}

void StringCalculator::findAndReplaceCharacter(std::string& str, char findCharacter, char replaceCharacter)
{
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] == findCharacter) 
        {
            str[i] = replaceCharacter;
        }
    } 
}
