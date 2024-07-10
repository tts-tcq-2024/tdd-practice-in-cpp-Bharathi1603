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
    auto numbers = splitAndFilterNumbers(input,delimiter);
    return performAddition(numbers);
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

  std::vector<int> StringCalculator::splitAndFilterNumbers(const std::string& str, char delimiter)
  {
      std::vector<int> numbers;
      std::string token;
      std::stringstream ss(str);
  
      while (std::getline(ss, token, delimiter)) 
      {
          std::string numberStr;
          for (char ch : token) 
          {
              if(ch == '-')
              {
                  numberStr += ch;
              }
              
              if (std::isdigit(ch)) 
              {
                  numberStr += ch;
              }
          }
          
          if (!numberStr.empty()) 
          {
              numbers.push_back(std::stoi(numberStr));
          }
      }
  
      return numbers;
  }
  
  int StringCalculator::performAddition(std::vector<int> numbers)
  {
      int sum = 0;
      for(auto& data : numbers)
      {
          if(data <= 1000)
          {
              sum += data;  
          }
      }
      
      return sum;
  }
