/*2.
Assign and print the roll number, phone number and address of two students having names "Sam"
and "John" respectively by creating two objects of the class 'Student'.
*/

#include<iostream>
using namespace std;

class Student
{  
    public:
    string name;
    int roll_no;
    int phone_number=0;
    string address;

};

int main()
{
    Student s1,s2;

   cout<<"Enter student 1 name,rollno,adress and phonenumber";
   cin>>s1.name>>s1.roll_no>>s1.address>>s1.phone_number;
   cout<<"\nname="<<s1.name<<"\nrollno="<<s1.roll_no<<"\nadress"<<s1.address<<"\nphone="<<s1.phone_number;

   
   cout<<"Enter student 2 name,rollno,adress and phonenumber";
   cin>>s2.name>>s2.roll_no>>s2.address>>s2.phone_number;
   cout<<"\nname="<<s2.name<<"\nrollno="<<s2.roll_no<<"\nadress"<<s2.address<<"\nphone="<<s2.phone_number;
   

    return 0;
}