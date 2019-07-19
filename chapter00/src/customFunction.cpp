#include <iostream>
#include <vector>

void customFunction(std::vector<int> dummyVector)
{
    unsigned int c = 0;
    int total = 0;
    for (unsigned int i = 0; i < dummyVector.size(); i++){
        c++;
        total += dummyVector[i];
    }
    std::cout << double(total) / c << std::endl;
    return;
}