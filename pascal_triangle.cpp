#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int i = 0;i<=n;i++)
    {
        int c=1;
        for(int k=n-i;k>0;k--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
            c=c*(i-j)/j;
        }
        cout<<endl;
    }




    return 0;
}