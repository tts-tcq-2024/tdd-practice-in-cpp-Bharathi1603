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
      void appendCharacter(std::string & numberStr, const char ch);
      std::string spiltDelimiter(const std::string token, const char delimiter);
      std::vector<int> getNegativeValues(std::vector<int> numbers);
      void checkNegativeValues(const std::vector<int> negativeNumbers);
      bool isChangeDelimiterPresent(std::string & str);
      char captureNewDelimiter(std::string & str);
      void splitChangeDelimiterInfo(std::string & str);

};
