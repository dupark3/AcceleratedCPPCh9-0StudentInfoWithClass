#include <algorithm> // max, sort
#include <iomanip> // streamsize, setprecision
#include <iostream>
#include <string>
#include <vector>

#include "Student_info.h"

int main()
{
    std::vector<Student_info> students;
    Student_info record; // default constructor called
    std::string::size_type maxLen = 0;

    // read and store the data as class objects
    while(record.read(std::cin)) {// calling on member function read
        maxLen = std::max(maxLen, record.name().size());
        students.push_back(record);
    }

    // alphabetize students by name
    std::sort(students.begin(), students.end(), compare);

    // write the names and grades of students
    for (std::vector<Student_info>::size_type i = 0; i != students.size(); ++i){
        std::cout << students[i].name() << std::string(maxLen + 1 - students[i].name().size(), ' ');
        try {
            std::streamsize prec = std::cout.precision();
            std::cout << std::setprecision(3) << students[i].grade()
                      << std::setprecision(prec) << std::endl;
        } catch (std::domain_error e) {
            std::cout << e.what() << std::endl;
        }
    }

    return 0;
}
