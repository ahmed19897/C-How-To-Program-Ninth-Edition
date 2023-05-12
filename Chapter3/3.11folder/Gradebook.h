#include <string>

class GradeBook
{
    public:
            explicit GradeBook(std::string,std::string);
            void setCourseName(std::string );
            std:: string getCourseName()const;
            void setCourseInstructorName(std::string);
            std::string getCourseInstructorName()const;
            void displayMessage() const;


    private:
            std::string CourseName;
            std::string CourseInstructorName;


};