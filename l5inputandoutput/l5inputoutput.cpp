/*
  stream                purpose

  std::cout  >>  printing data to the console
  std::cin   >>  taking data from the console or terminal
  std::cerr  >>  prints error to the console
  std::clod  >>  prints log message to the console

*/

#include <iostream>
#include <string>

int main() {
    //std::cout
    std::cout << "hello world" << std::endl;
    
    //std::cerr
    std::cerr << "something went wrong" << std::endl;

    //std::clog
    std::clog << "log hello world" << std::endl;

    //std::cin
    std::string name;
    std::cout << "enter your name";
    std::cin >> name;
}