#ifndef GUARD_Student_info_h
#define GUARD_Student_info_h

#include <iostream>
#include <string>
#include <vector>

class Student_info {
public:
    // interface
    Student_info();
    Student_info(std::istream&);
    double grade() const;
    std::istream& read(std::istream&);
    std::string name() const {return n};

private:
    // implementation
    std::string n;
    double midterm;
    double final;
    std::vector<double> homework;


};

std::istream& read_hw(std::istream&, std::vector<double>&);

#endif // GUARD_Student_info_h

