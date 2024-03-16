/*Q1.
Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign
the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.*/

#include<iostream>
using namespace std;

class Student
{  
    public:
    string name;
    int roll_no;

};

int main()
{
    Student s1;

   s1.name="john";
   s1.roll_no=2;

   cout<<s1.name<<"\n"<<s1.roll_no;



    return 0;
}