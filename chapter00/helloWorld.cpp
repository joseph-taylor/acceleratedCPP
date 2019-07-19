// run with:
// $ g++ -std=c++11 -g -Wall -c ./src/customFunction.cpp -o ./src/customFunction.o
// $ g++ -std=c++11 -g -Wall -c ./src/customFunctionTwo.cpp -o ./src/customFunctionTwo.o
// $ g++ -std=c++11 -g -Wall -c helloWorld.cpp -o helloWorld.o -I ./interface/
// $ g++ -std=c++11 -g -Wall -o helloWorld helloWorld.o ./src/*.o 
// $ ./helloWorld

#include <iostream>
#include <vector>
#include "customFunction.h"
#include "customFunctionTwo.h"

int main()
{
    std::cout << "Hello, world!" << std::endl;
    
    std::vector<int> dummyVector = {26, 30, 32, 59, 61};
    customFunction(dummyVector);
    customFunctionTwo(dummyVector);
    return 0;
}