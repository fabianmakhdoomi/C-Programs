#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<" enter a number "<<endl;
  cin>>n;
    int j=0;
    int i=n;
    int remainder;
    int arr[32]={0};

  while(i>0)
  {
    remainder = i%2;
    arr[j]=remainder;
    i= i/2;
    j++;

  }

    for(int i = j-1 ; i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}