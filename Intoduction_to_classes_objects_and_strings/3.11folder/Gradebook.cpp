#include <iostream>
#include "Gradebook.h"
using namespace std;


GradeBook::GradeBook(string Name,string InstructorName)
    : CourseName(Name),CourseInstructorName(InstructorName)
{

}

void GradeBook::setCourseName(string Name)
{

    CourseName=Name;

}

string GradeBook::getCourseName() const
{

    return CourseName;

}

void GradeBook::setCourseInstructorName(string Name)
{

    CourseInstructorName=Name;

}

string GradeBook::getCourseInstructorName() const
{

    return CourseInstructorName;

}


void GradeBook::displayMessage() const
{
    cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!\n"<<"the course is presented by: "<<getCourseInstructorName()<<endl;
}