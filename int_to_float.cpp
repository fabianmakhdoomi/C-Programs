#include <iostream>
using namespace std;

int main() {
    int a;
    
    cout << "Enter an integer: ";
    cin >> a;
    float b = static_cast<float>(a);
    
    cout << "The corresponding floating point number is: " << b << endl;
    cout<<sizeof(b);
    return 0;
}
