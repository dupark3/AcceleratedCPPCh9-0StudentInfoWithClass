#include <iostream>
#include <string>
#include <vector>

#include "Student_info.h"

std::istream& Student_info::read(std::istream& in){
    in >> name >> midterm >> final;
    read_hw(in, homework);
    return in;
}

std::istream& read_hw(std::istream& is, std::vector<double>& homework){
    if (is){
        homework.clear();
        double x;
        while(in >> x)
            homework.push_back(x);
    is.clear();
    }
    return is;
}

double Student_info::grade(){
    return ::grade(midterm, final, homework);
}
