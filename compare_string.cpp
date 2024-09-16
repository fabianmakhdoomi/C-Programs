#include <iostream>
using namespace std;
int main() {
    char str1[100], str2[100];

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    int i = 0;
    bool areEqual = true;

    
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            areEqual = false;
            break;
        }
        i++;
    }

    // if (str1[i] != '\0' || str2[i] != '\0') {
    //     areEqual = false;
    // }

    if (areEqual) {
        cout << "The strings are equal."<<endl;;
    } else 
        cout<<"they are not equal"<<endl;

    return 0;
}
