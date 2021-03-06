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
    double grade() const { return finalGrade; }; // inline
    std::istream& read(std::istream&);
    std::string name() const { return n; };

private:
    // implementation
    std::string n;
    double midterm;
    double final;
    std::vector<double> homework;
    double finalGrade;


};

std::istream& read_hw(std::istream&, std::vector<double>&);
double average(const std::vector<double>&);
bool compare(const Student_info& x, const Student_info& y);
#endif // GUARD_Student_info_h

