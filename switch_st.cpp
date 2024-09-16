// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout << "enter 1 for sunday , 2 for monday and 3 for tuesday" << endl;
//     cin >> a;
//     switch (a)
//     {
//     case 1:
//     {
//         cout << " Sunday ";
//         break;
//     }
//     case 2:
//     {
//         cout << " Monday ";
//         break;
//     }
//     case 3:
//     {
//         cout << " Tuesday ";
//         break;
//     }
//    default :
//    {
//        cout<<"invalid number";
//        break;
//    }
//     }

//     return 0;
// }




#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask the user for the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Create an array to store the elements
    int arr[n];

    // Read the array elements from the user
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize variables to track the indices of the largest and smallest elements
    int largestIndex = 0, smallestIndex = 0;

    // Find the indices of the largest and smallest elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[largestIndex]) {
            largestIndex = i;
        }
        if (arr[i] < arr[smallestIndex]) {
            smallestIndex = i;
        }
    }

    // Swap the largest and smallest elements
    int temp = arr[largestIndex];
    arr[largestIndex] = arr[smallestIndex];
    arr[smallestIndex] = temp;

    // Display the array after interchanging the largest and smallest elements
    cout << "Array after interchanging the largest and smallest elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
