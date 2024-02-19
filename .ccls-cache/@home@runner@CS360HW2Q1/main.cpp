#include <iostream>
#include <string>

class GradeBook {
public:
    explicit GradeBook(std::string, std::string); // constructor initialize courseName and instructorName
    void setCourseName(std::string); // sets the course name
    std::string getCourseName() const; // gets the course name
    void setInstructorName(std::string); // sets the instructor name
    std::string getInstructorName() const; // gets the instructor name
    void displayMessage() const; // displays a welcome message
private:
    std::string courseName; // course name for this GradeBook
    std::string instructorName; // instructor name for this GradeBook
};

GradeBook::GradeBook(std::string course, std::string instructor)
    : courseName(course), instructorName(instructor) {}

void GradeBook::setCourseName(std::string name) {
    courseName = name;
}

std::string GradeBook::getCourseName() const {
    return courseName;
}

void GradeBook::setInstructorName(std::string name) {
    instructorName = name;
}

std::string GradeBook::getInstructorName() const {
    return instructorName;
}

void GradeBook::displayMessage() const {
    std::cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
              << "This course is presented by: " << getInstructorName() << std::endl;
}

int main() {
    // Example usage
    GradeBook myGradeBook("C++ Programming", "Mir Ahmad Ali");
    myGradeBook.displayMessage();

    // Changing course and instructor names
    myGradeBook.setCourseName("Advanced C++ Programming");
    myGradeBook.setInstructorName("Alex Yang");
    myGradeBook.displayMessage();

    return 0;
}
