/*
  In this part we are gonna learn about errors and warning, there are three types the code problem that we are gonna face some point in the future.
  1. compiler error , in this type of error code will not able compile due to some synatax error or some other things.
  2. runtime error, in this type of the error code will able to compile but there is some types of bugs that is generating unexpected error.
  3. warnings, are the least harmful error code will able to compile and run. 
*/

#include <iostream>


//This is a example of compiler error

/*
int main() {
  std::cout << "hello world" << std::endl; // Missing ; , and this will give compiler error 
}
*/


//This is runtime error    

/*
int main() {
  std::cout << "hello world" << std::endl;
  int value = 1/0; // since this is mathematical wrong, gives error but after compiling
}
*/


//warnings are shown by code editor or an IDE
