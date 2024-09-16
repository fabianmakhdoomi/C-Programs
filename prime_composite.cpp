#include <iostream>
using namespace std;
int main()
{
    int a,b=1;
    cout<<"enter number"<<endl;
    cin>>a;
    for(int i=1;i<a;i++)
    {
        if(a%2==0)
        {
            b=0;
            break;
        }

    }
    if(b==0)
        cout<<"number is composite"<<endl;
    else
        cout<<"number is prime"<<endl;






    return 0;

}