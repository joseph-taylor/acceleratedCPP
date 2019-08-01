// run with:
// $ g++ -std=c++11 -g -Wall -c ./src/Student_info.cpp -o ./src/Student_info.o -I ./interface
// $ g++ -std=c++11 -g -Wall -c helloSchool.cpp -o helloSchool.o -I ./interface/
// $ g++ -std=c++11 -g -Wall -o helloSchool helloSchool.o ./src/*.o 
// $ ./helloSchool

#include <iostream>
#include <vector>
#include "Student_info.h"

void compare(const Student_info& x, const Student_info& y)
{
    if (x.grade() > y.grade())
        std::cout << x.name() << " beats " << y.name() << std::endl;
    else
        std::cout << y.name() << " beats " << x.name() << std::endl;
    return;
}

int main()
{
    std::cout << "Hello, school!" << std::endl;
    
    Student_info student01 = Student_info("Joe Taylor", 88, 95, {91, 86, 97, 97});
    std::cout << student01.name() << " is valid: " << student01.valid() << std::endl;
    std::cout << student01.name() << " grade: " << student01.grade() << std::endl;

    Student_info student02 = Student_info("Mark Howarth", 61, 57, {81, 78, 79, 83, 76});
    std::cout << student02.name() << " is valid: " << student02.valid() << std::endl;
    std::cout << student02.name() << " grade: " << student02.grade() << std::endl;

    compare(student01, student02);
    compare(student02, student01);

    Student_info student03; // an empty Student_info object
    std::cout << student03.name() << " is valid: " << student03.valid() << std::endl;
    // std::cout << student03.grade(); // this would throw and error
    student03 = student01;
    std::cout << student03.name() << " is valid: " << student03.valid() << std::endl;
    
    return 0;
}