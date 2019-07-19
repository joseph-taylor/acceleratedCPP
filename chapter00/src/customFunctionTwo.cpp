#include <iostream>
#include <vector>

void customFunctionTwo(std::vector<int> dummyVector)
{
    int max = 0;
    for (unsigned int i = 0; i < dummyVector.size(); i++){
        if (dummyVector[i] > max)
            max = dummyVector[i];
    }
    std::cout << max << std::endl;
    return;
}