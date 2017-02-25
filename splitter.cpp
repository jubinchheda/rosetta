// Solution for http://rosettacode.org/wiki/Split_a_character_string_based_on_change_of_character
#include<string>
#include<iostream>
auto spliter(const std::string &input) {
   auto firstCommaPast = false;
   std::string res ="";
   auto prev = '\0';
   for(auto it = input.cbegin(); it != input.cend();++it) {
      if(*it!=prev) {
         if(!firstCommaPast) {
            firstCommaPast = true;
         } else {
            res+=", ";
         }
      }
      res+=*it;
      prev=*it;
   }
   return res;
}

int main() {
   auto input = R"(gHHH5  ))YY++,,,///\)";
   std::cout<<spliter(input);
}  
