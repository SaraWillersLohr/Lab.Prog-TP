#include <iostream>
#include <string> 
#include <cstddef> 
int main ()
{
 std::string str ("look for non-alphabetic characters...");
 std::size_t found =
str.find_first_not_of("abcdefghijklmnopqrstuvwxyz ");
 if (found!=std::string::npos)
 {
 std::cout << "The first non-alphabetic character is " <<
str[found];
 std::cout << " at position " << found << '\n';
 }
 return 0;
}

