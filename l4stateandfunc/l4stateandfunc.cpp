/*

Statements

1. statements are the beasic unit of computation in cpp program.
2. every program of cpp is a collection of statements that are oganised is a certain way to achieve some goal.
3. every statement must end with ';'.
4. statements are excueted in order from the top to bottom when the program is run.
5. execution keeps going until there is a statement causing the program to terminate, or to run another sequence of statements.

*/

//Functions

/*
Function are the resuable block of the code that can be used multiple time by simple calling for the fuction.
*/

//example of the function 

#include <iostream>


/*

int addnumber(int frist_number, int second_number) {
    int sum = frist_number + second_number;
    return sum;
}



int main() {
    int first_no {21};
    int second_no {4};
    std::cout << "first no: " << first_no << std::endl;
    std::cout << "second no: " << second_no << std::endl;

    int sum = first_no + second_no;
    std::cout << "sum: " << sum << std::endl;

    sum = addnumber(22,8);
    std::cout << "addnumber: " << sum << std::endl;
}

*/
int multiplynumber(int first_number, int second_number) {
    int product = first_number*second_number; //This is a variable storing some integer value
    return product;
}


int main() {
    int first_no = 2; 
    int second_no = 3;

    std::cout << "first number: " << first_no << std::endl;
    std::cout << "second number:" << second_no << std::endl;

    int product = multiplynumber(first_no,second_no);

    std::cout << "result: " << product << std::endl;

}
