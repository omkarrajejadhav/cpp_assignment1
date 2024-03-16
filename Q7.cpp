/*q7.Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of
its length and breadth as parameters of its constructor and having a function named 'returnArea'
which returns the area of the rectangle. Length and breadth of the rectangle are entered through
keyboard.*/


#include<iostream>
using namespace std;

class Area
{  
    private:
    
    int a,b,area;
    int length,width;

    public:

     Area(int x,int y)
    {
        length=x;
          width=y;
          area=length*width;
    }

     int getarea()
     {   
        
        return (area);
    }

};

int main()
{
    
    int a,b,ans;

    cout<<"enter sides of rectengle";
    cin>>a>>b;

    Area a1(a,b);
    ans=a1.getarea();
    cout<<"area="<<ans;

    return 0;
}