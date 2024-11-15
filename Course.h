#ifndef Course_h
#define Course_h

#include <string> 
class Course {
    public:
     Course();
     Course(std::string nm, int gr);

     std::string getCourseName();
     int getCourseGrade();

    private:
     std::string course_name;
     int grade;
};
#endif
