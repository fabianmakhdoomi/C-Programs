#include <iostream>
#include <string>  // Needed for std::string
using namespace std;

int main() {
    string str1, str2, result;
    
    // Input two strings
    cout << "Enter the first string: ";
   // getline(cin, str1);
    cin>>str1;
    cout << "Enter the second string: ";
    getline(cin, str2);
    
    // Concatenate the strings
    result = str1 + str2;
    
    // Output the result
    cout << "Concatenated string: " << result << endl;

    return 0;
}
