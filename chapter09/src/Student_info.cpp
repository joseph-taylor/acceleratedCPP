#include <iostream>
#include <vector>
#include "Student_info.h"

// constructor
Student_info::Student_info() :
    n("NONAME"),
    midterm(0.0),
    final(0.0)
{
    std::cout << "Ermmm, no info provided for Student_info object" << std::endl;
}

Student_info::Student_info(const std::string& nameDummy, const double& midtermDummy, const double& finalDummy, const std::vector<double>& homeworkDummy) :
    n(nameDummy),
    midterm(midtermDummy),
    final(finalDummy),
    homework(homeworkDummy)
{}

// destructor (this is the same as what the default would be)
Student_info::~Student_info()
{}

// public
double Student_info::grade() const
{
    if (homework.size() == 0)
        throw std::domain_error("student has done no homework");

    double meanHomework = 0.0;
    for (auto mark : homework)
        meanHomework += mark;
    meanHomework = meanHomework / homework.size();

    return 0.2 * midterm + 0.4 * final + 0.4 * meanHomework;
}

std::string Student_info::name() const
{
    return n;
}

bool Student_info::valid() const
{
    return !homework.empty();
}