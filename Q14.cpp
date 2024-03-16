//Q.14 Write a program to calculate the average height of all the students of a class. The number of students and their heights are entered by the user.


#include <iostream>
using namespace std;
#include <vector>

class Student 
{
public:
    double height;
    Student(double h) : height(h) {}
};

class ClassAverage 
{
private:
    vector<Student> students;
    double sum;
public:
    ClassAverage() : sum(0.0) {}

    void addStudent(double height) 
    {
        students.push_back(Student(height));
        sum += height;
    }

    double getAverage() 
    {
        return sum / students.size();
    }
};

int main() 
{
    ClassAverage avg;
    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i)
    {
        double height;
        cout << "Enter height of student " << i + 1 << ": ";
        cin >> height;
        avg.addStudent(height);
    }

    cout << "The average height is: " << avg.getAverage() << endl;

    return 0;
}