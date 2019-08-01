#ifndef GUARD_Student_info_h
#define GUARD_Student_info_h

#include <vector>

class Student_info {

public:
    // interface goes here
    // all users can access these elements

    // constructor (can overload it)
    Student_info();
    Student_info(const std::string&, const double&, const double&, const std::vector<double>&);

    // destructor
    ~Student_info();

    double grade() const; // const member functions cannot change internal state of object
    std::string name() const; // because name is a private element, need a function to get it (note that it is a const member function) 
    bool valid() const;

private:
    // implementation goes here
    // only member functions can access these elements
    
    std::string n;
    double midterm, final;
    std::vector<double> homework;

};

#endif