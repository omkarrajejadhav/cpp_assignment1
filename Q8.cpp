/*
    Q8.
Print the average of three numbers entered by the user by creating a class named 'Average' having a
function to calculate and print the average without creating any object of the Average class.

*/
#include<iostream>
using namespace std;
class Average
{ 
    private: int a,b,c,avg;
    public:
   Average(int x,int y,int z)
   { 
      a=x;
      b=y;
      c=z;
      
      avg=(a+b+c)/3;

      cout<<"average: "<<avg;
   }

};
int main()
{  

    int a,b,c,ans;
    
    cout<<"enter 3 values: ";
    cin>>a>>b>>c;
    Average a1(a,b,c);

    return 0;
    
}


