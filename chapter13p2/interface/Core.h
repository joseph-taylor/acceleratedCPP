#ifndef GUARD_Core_h
#define GUARD_Core_h

#include <vector>

class Core {

public:
    Core();
    Core(const std::string&, const double&, const double&, const std::vector<double>&);
    std::string name() const;
    virtual double grade() const;

// midterm, final, and homework
// were previously private elements.
// By making them protected elements,
// derived classes (e.g. Grad) can
// access these elements using *new* functions.
// They are still directly inaccessible
// to users of the classes.
protected:
    double midterm, final;
    std::vector<double> homework;

// Because the Grad class does not
// need to access the student name
// in a way unique from the Core class,
// the element can remain private.
private:
    std::string n;
};

#endif