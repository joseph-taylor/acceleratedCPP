// run with:
// $ g++ -std=c++11 -g -Wall -c ./src/Core.cpp -o ./src/Core.o -I ./interface
// $ g++ -std=c++11 -g -Wall -c ./src/Grad.cpp -o ./src/Grad.o -I ./interface
// $ g++ -std=c++11 -g -Wall -c inheritance.cpp -o inheritance.o -I ./interface/
// $ g++ -std=c++11 -g -Wall -o inheritance inheritance.o ./src/*.o 
// $ ./inheritance

#include <iostream>
#include <vector>
#include "Core.h"
#include "Grad.h"

// note, this function works on Core AND Grad objects.
// AND now uses Core:grade() for Core objects
//     and uses Grad:grade() for Grad objects
// This has been achieved by making 
// grade() a virtual function in Core.h
//
// nb: if we weren't using references to the object,
// this wouldn't work, as the calls to the grade() function
// would be statically bound...
void compare(const Core& x, const Core& y)
{
    if (x.grade() > y.grade())
        std::cout << x.name() << " beats " << y.name() << std::endl;
    else
        std::cout << y.name() << " beats " << x.name() << std::endl;
    return;
}

int main()
{
    std::cout << "Hello, inheritance!" << std::endl;
    
    Core student01 = Core("Joe Taylor", 88, 95, {91, 86, 97, 97});
    std::cout << student01.name() << " grade: " << student01.grade() << std::endl;

    Grad student02 = Grad("Mark Howarth", 61, 57, {81, 78, 79, 83, 76}, 58);
    std::cout << student02.name() << " grade: " << student02.grade() << std::endl;

    Grad student03 = Grad("Michael Raymond", 94, 95, {95, 93, 96}, 55);
    std::cout << student03.name() << " grade: " << student03.grade() << std::endl;

    compare(student01, student02);
    compare(student01, student03);
    compare(student02, student03);
    
    return 0;
}