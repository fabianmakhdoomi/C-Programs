#include <iostream>
using namespace std;
int main()
{
    int n =10;
    int a[n];
    int largest =0;
    cout<<"enter 10 numbers"<<endl;
    for(int i =0 ; i<10; i++)
    {
        cin>>a[i];
    }

    for(int j = 0; j<n;j++)
    {
        largest= (largest<a[j]?a[j]:largest);       
    }

    cout<<"largest number is "<<largest<<endl;



    return 0;

}