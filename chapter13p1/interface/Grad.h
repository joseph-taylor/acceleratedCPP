#ifndef GUARD_Grad_h
#define GUARD_Grad_h

#include <vector>

// the Grad class inherits from the Core class
// ie, every member of Core is also a member of Grad (except constructors and destructors)

class Grad: public Core {

public:
    Grad(); // has to have a new constructor
    Grad(const std::string&, const double&, const double&, const std::vector<double>&, const double&); // additional argument relative to Core version

    // this redefines the function relative to the Core version (uses thesis, see below).
    // Because it needs access to the midterm, final, and homework elements,
    // they need to be protected members, rather than private members (see Core.h)
    double grade() const;

private:
    double thesis; // an additional data element relative to Core
};

#endif