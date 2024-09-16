#include <iostream>
using namespace std;
int main()
{
    int key;
    int arr[7]={4,5,2,16,76,14,56};
    cout<<"enter element to search : ";
    cin>>key;
    int i;
    for(i = 0 ; i<7 ; i++)
    {
        if(arr[i]==key)
        {
            cout<< " element "<<key<<" found at index : "<<i<<endl;
            break;
        }
    }
    if(i==7)
    {
        cout<< " element was not found "<<endl;
    }



    return 0;
}