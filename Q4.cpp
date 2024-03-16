/*Q.4
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with the constructor having the three sides as its parameters.
*/

#include<iostream>
using namespace std;

class triangle
{  
    public:
    int a,b,c,area,perimeter;

    triangle()
    {
         int a=3,b=4,c=5;
           area=a*b*c;
           perimeter=a+b+c;
        
    }
    
     void print_area()
     {   
        cout<<"area="<<area<<"\nperimeter="<<perimeter;
    }

};

int main()
{
    triangle t1;
    t1.print_area();

    return 0;
}