#include  <iostream>
#include "Gradebook.h"

using namespace std;

//Introduction to Classes, Objects and strings
int main()
{

    GradeBook gradeBook1("101Computer","shokry");
    GradeBook gradeBook2("102Computer","shakrallah");
    string FirstCourseInstructorName,SecondCourseInstructorName;
   /*
    cout<<"First GradeBook course name is :"<< gradeBook1.getCourseName()<<"\n"<<"Second GradeBook course name is :"<< gradeBook2.getCourseName()<<'\n'<<endl;

    cout<<"please enter the "<<gradeBook1.getCourseName()<<" Instructor name"<<endl;
    cin>>FirstCourseInstructorName;
    gradeBook1.setCourseInstructorName(FirstCourseInstructorName);

    cout<<"please enter the "<<gradeBook2.getCourseName()<<" Instructor name"<<endl;
    cin>>SecondCourseInstructorName;
    gradeBook2.setCourseInstructorName(SecondCourseInstructorName);

    cout<<"the first course instructor name is: "<<gradeBook1.getCourseInstructorName()<<'\n'<<"the second course instructor name is: "<<gradeBook2.getCourseInstructorName()<<endl;
    */

    gradeBook1.displayMessage();
    gradeBook2.displayMessage();
    




    return 0;

}