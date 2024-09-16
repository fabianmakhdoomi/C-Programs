#include <iostream>
using namespace std;
int main()
{
    int a;
    char g;

    cout << "enter age " << endl;
    cin >> a;
    cout << "enter M for male and F for female " << endl;
    cin >> g;
    if (a >= 18)
    {
        if (g == 'M')
        {
            cout << "you are eligible Male Voter " << endl;
        }
        else
        {
            cout << " you are eligible Female Voter " << endl;
        }
    }
    else
        cout << "you are not eligible to vote " << endl;

    return 0;
}