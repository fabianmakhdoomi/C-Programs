#include <iostream>
using namespace std;
int main()
{   int i,n;
    float sum, temp;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(i =1; i<=n;i++)
    {
        temp = (i*i)/i;
        sum = sum + temp;

    }
    cout<<sum;


}