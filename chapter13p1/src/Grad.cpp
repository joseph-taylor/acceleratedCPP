#include <iostream>
#include <vector>
#include "Core.h"
#include "Grad.h"

Grad::Grad() :
    // default base-class constructor, Core(), is called implicitly
    thesis(0.0)
{
    std::cout << "Ermmm, no info provided for Grad object" << std::endl;
}

Grad::Grad(const std::string& nameDummy, const double& midtermDummy, const double& finalDummy, const std::vector<double>& homeworkDummy, const double& thesisDummy) :
    // need to use the base-class constructor, Core(),
    // to explicitly set the data elements belonging to it.
    Core(nameDummy, midtermDummy, finalDummy, homeworkDummy),
    thesis(thesisDummy)
{}

double Grad::grade() const
{
    if (homework.size() == 0)
        throw std::domain_error("student has done no homework");

    double meanHomework = 0.0;
    for (auto mark : homework)
        meanHomework += mark;
    meanHomework = meanHomework / homework.size();
    double coreGrade = 0.2 * midterm + 0.4 * final + 0.4 * meanHomework;
    
    return std::min(coreGrade, thesis);
}