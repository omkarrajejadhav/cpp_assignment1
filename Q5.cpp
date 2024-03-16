
// 5.
// Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by
// creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and
// breadth are passed as parameters to its constructor.

#include<iostream>
using namespace std;

class Rectangle
{  
    private:
    int x,y,z,rectangle1,rectangle2;

    public:

     triangle(int a,int b,int c)
    {
           x=a;
           y=b;
           z=c;

           rectangle1=x*y;
           rectangle2=y*z;
        
    }
    
     void print_area()
     {   
        cout<<"rectangle1="<<rectangle1<<"\nrectangle2="<<rectangle2;
    }

};

int main()
{
    rectangle t1(4,5,8);
    t1.print_area();

    return 0;
}