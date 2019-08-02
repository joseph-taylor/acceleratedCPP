#include <iostream>
#include <vector>
#include "Core.h"

Core::Core() :
    midterm(0.0),
    final(0.0),
    n("NONAME") // note, this list has to be ordered like in Core.h
{
    std::cout << "Ermmm, no info provided for Core object" << std::endl;
}

Core::Core(const std::string& nameDummy, const double& midtermDummy, const double& finalDummy, const std::vector<double>& homeworkDummy) :
    midterm(midtermDummy),
    final(finalDummy),
    homework(homeworkDummy),
    n(nameDummy)
{}

double Core::grade() const
{
    if (homework.size() == 0)
        throw std::domain_error("student has done no homework");

    double meanHomework = 0.0;
    for (auto mark : homework)
        meanHomework += mark;
    meanHomework = meanHomework / homework.size();

    return 0.2 * midterm + 0.4 * final + 0.4 * meanHomework;
}

std::string Core::name() const
{
    return n;
}