// Solution for http://rosettacode.org/wiki/Split_a_character_string_based_on_change_of_character
#include<string>
#include<iostream>
std::string spliter(std::string input) {
   bool firstCommaPast = false;
   std::string res ="";
   char prev = '\0';
   for(std::string::iterator it = input.begin(); it != input.end();++it) {
      if(*it!=prev) {
         if(!firstCommaPast) {
            firstCommaPast = true;
         } else {
            res+=",";
         }
      }
      res+=*it;
      prev=*it;
   }
   return res;
}

int main() {
   std::string input = R"(gHHH5YY++///\)";
   std::string res = spliter(input);
   std::cout<<res;
}
