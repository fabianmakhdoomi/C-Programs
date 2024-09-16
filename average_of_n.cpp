#include <iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int sum=0;

    for(int i=1;i<=n;i++)
    {
        sum= sum+i;
    }
    int average = sum/n;

    cout<<"the average of first "<< n <<" numbers is "<<average;



    return 0;

}