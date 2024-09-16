#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12, 34, 13, 44, 2};
    int arr2[6] = {23, 54, 34, 34, 24, 12};
    int arr3[11];
    for(int i =0; i<5;i++)
    {
        arr3[i]=arr[i];
    }
     for(int i = 5; i<11;i++)
    {
        arr3[i]=arr2[i-5];
    }

    for(int i =1 ; i<11; i++)
    {
        for(int j = 0 ; j<11-i;j++)
        {
            if(arr3[j]>arr3[j+1])
            {
                int temp = arr3[j];
                arr3[j]= arr3[j+1];
                arr3[j+1]= temp;
            }
        }
    }

    for(int i = 0; i<11; i++)
    cout<<arr3[i]<<" ";

    return 0;
}