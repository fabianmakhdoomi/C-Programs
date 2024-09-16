#include <iostream>
using namespace std;
int main()
{
    int x=2,y=2,z=2;
    // cout<<"enter x,y,z of arr[x][y][z] : ";
    // cin>>x>>y>>z;
    int arr[x][y][z];
    for(int i = 0; i<x ;i++)
    {
        for(int j = 0; j<y; j++)
        {
            for (int k=0; k<z; k++)
            {
                 cout<<"enter element for a["<<i<<"]["<<j<<"]["<<k<<"] ";
                 cin>>arr[i][j][k];
            }
            //cout<<endl;
        }
    }
    for(int i = 0; i<x ;i++)
    {
        for(int j = 0; j<y; j++)
        {
            for (int k=0; k<z; k++)
            {
                 cout<<arr[i][j][k]<<" ";
                 //cin>>arr[i][j][k];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}