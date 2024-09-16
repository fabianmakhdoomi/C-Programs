#include <iostream>
#include <string>
using namespace std;

int main() {
    // string part1 = "Hello, ";
    // string part2 = "this is a sample ";
    // string part3 = "program in C++.";

    // Combine the strings to form the main text
    string mainText = "Hello my Name is Fabian ";

    // String to be inserted
    string insertText = "Makhdoomi ";

    // Insert the string at a specific position (after "sample ")
    int position = mainText.find("Fabian") + 7;
    mainText.insert(position, insertText);

    // Display the modified main text
    cout << "Modified text: " << mainText << endl;

    return 0;
}
