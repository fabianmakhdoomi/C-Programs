#include <iostream>
using namespace std;
int main()
{

int days, flag=0;
 cout<<"enter days in a month"<<endl;
 cin>>days;
int day =1,x;
cout<<"enter the day of the month 1-sun, 2-mon, 3-tue, 4-wed........7-sat"<<endl;
cin>>x;
cout<<"sun\tmon\ttue\twed\tthur\tfri\tsat\t"<<endl;

for(int k=1;k<x;k++)
{
    cout<<"\t";
}
int j=x;
for(int i =0; i<6&&flag!=1;i++)
{
   
        for(int j = x-1 ; j<7;j++)
            {
                
                cout<<day<<"\t";
                day++;
                x=1;
                if(day>days)
                  {  
                    flag = 1;
                    break;
                  }
                   
            }
        
    
    
    cout<<endl;
}




    return 0;

}