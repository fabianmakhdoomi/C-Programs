#include <iostream>
using namespace std;
int main()
{
    char a;
    for(int i=0;i<5;i++)
    {
        int k = 0;
        for(int j = 0; j<=i;j++)
        {       
            a=k+65;
            k++;
            cout<<a;
        }
        cout<<endl;
    }
        
return 0;    
}