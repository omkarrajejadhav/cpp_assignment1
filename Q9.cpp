/*11.
Write a program that would print the information (name, year of joining, salary, address) of three
employees by creating a class named 'Employee'. The output should be as follows:
Name Year of joining Address
Robert 1994 64C- WallsStreat
Sam 2000 68D- WallsStreat
John 1999 26B- WallsStreat*/

#include<iostream>
using namespace std;

class employees
{
    private: char name[20],address[20];
             int year,salary;
    public:
    void set()
    {
      cout<<"enter name,year,salary and adress";
      cin>>name>>year>>salary>>adress;

    }
    void get()
    {
        cout<<" "<<name<<" "<<year<<" "<<salalry<<" "<<adress;
    }

};
int main()
{
    
    return 0;
}
