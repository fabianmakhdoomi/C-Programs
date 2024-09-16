#include <iostream>
using namespace std;
int main()
{
    int unit, bill = 0;
    cout << "enter units " << endl;
    cin >> unit;
    if (unit <= 100)
    {
        bill = unit * 20;
    }
    else if (unit <= 200)
    {
        bill = 100 * 20 + (unit - 100) * 25;
    }
    else if (unit <= 300)
    {
        bill = 100 * 20 + 100 * 25 + (unit - 200) * 30;
    }
    else
    {
        bill = 100 * 20 + 100 + 25 + 100 * 30 + (unit - 300) * 35;
    }

    cout << "the bill amount is " << bill << endl;

    return 0 ;
}
