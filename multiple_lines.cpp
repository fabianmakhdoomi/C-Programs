#include <iostream>
#include <string>
using namespace std;

int main() {
    int MAX_LINES = 100; 
    string textLines[MAX_LINES];
    int totalLines, m, n;

    cout << "Enter the number of lines of text: ";
    cin >> totalLines;
    cin.ignore(); 

    if (totalLines > MAX_LINES) {
        std::cout << "Number of lines exceeds the maximum limit.\n";
        return 1;
    }

    cout << "Enter the text lines:\n";
    for (int i = 0; i < totalLines; ++i) {
        getline(cin, textLines[i]);
    }

    std::cout << "Enter the starting line number (m): ";
    std::cin >> m;

    std::cout << "Enter the number of lines to display (n): ";
    std::cin >> n;

    
    // if (m < 1 || m > totalLines || n < 1) {
    //     std::cout << "Invalid input.\n";
    //     return 1;
    // }

    // Adjust m to be zero-based index
    m - m-1;

    // Display n lines from the m-th line
    std::cout << "\nDisplaying " << n << " lines starting from line " << (m + 1) << ":\n";
    for (int i = m; i < m + n && i < totalLines; ++i) {
        std::cout << textLines[i] << std::endl;
    }

    return 0;
}
