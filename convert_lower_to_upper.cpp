#include <iostream>
using namespace std;

int main() {
    char input;
    
    cout << "Enter a character: ";
    cin >> input;
    
    if (input >= 'a' && input <= 'z') {
        input = input - 'a' + 'A';
    }   
    else if (input >= 'A' && input <= 'Z') {
        input = input - 'A' + 'a';
    }
    
    cout << "Converted character: " << input << endl;
    
    return 0;
}
    