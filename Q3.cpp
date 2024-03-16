/*
3.
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with a function to print the area and perimeter.
*/

#include<iostream>
using namespace std;

class triangle
{  
    public:
    int a=3,b=4,c=5,area,perimeter;
    
    void print_area()
    {
        area=a*b*c;
        perimeter=a+b+c;
        cout<<"area="<<area<<"\nperimeter="<<perimeter;

    }

};

int main()
{
    triangle t1;
    t1.print_area();



    return 0;
}