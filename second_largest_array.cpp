#include <iostream>
using namespace std;
int main()
{

    int n;
    cout<<" enter no of elements in array "<<endl;
    cin>> n;
    int arr[n];
    cout<<"enter "<<n<<" elements "<<endl;
    for(int i = 0 ; i <n ; i++)
    {
        cin>>arr[i];
    }
    int ln=0, sln=0;
    for(int i = 0; i<n;i++)
    {
        if((arr[i]>=arr[ln]) &&(arr[i]>arr[sln]))
           { 
            sln = ln;
            ln=i;
           }
        else if (arr[i]>arr[sln])
        {
            sln = i;
        }
    }
    //cout<<" largest number is "<<arr[ln]<<endl;
    cout<<"second largest number is "<<arr[sln]<<endl;


    return 0;

}