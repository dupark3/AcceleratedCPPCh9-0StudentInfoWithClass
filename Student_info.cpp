#include <iostream>
#include <string>
#include <vector>

#include "Student_info.h"

std::istream& Student_info::read(std::istream& in){
    in >> name >> midterm >> final;
    read_hw(in, homework);
    return in;
}

std::istream& read_hw(std::istream& is, std::vector<double> homework){
    double n;
    while (is >> n){
        homework.push_back(n);
    }
    is.clear();
}

double Student_info::grade(){
    return ::grade(midterm, final, homework);
}
