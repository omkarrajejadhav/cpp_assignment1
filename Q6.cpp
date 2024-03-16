/*6.
Write a program to print the area of a rectangle by creating a class named 'Area' having two
functions. First function named as 'setDim' takes the length and breadth of the rectangle as
parameters and the second function named as 'getArea' returns the area of the rectangle. Length and
breadth of the rectangle are entered through keyboard.*/

#include<iostream>
using namespace std;

class Area
{  
    private:
    int a,b,area;

    public:
     void setDim()
    {

       cout<<"Enter sides of the rectangle";
       cin>>a>>b; 
       area=a*b;

    }
    
     int getarea()
     {   
        
        return (area);
    }

};

int main()
{
    int ans=0;

    Area a1;
    a1.setDim();
    ans=a1.getarea();
    cout<<"area="<<ans;

    return 0;
}