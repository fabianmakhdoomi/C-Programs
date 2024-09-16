#include <iostream>
using namespace std;
float areaCircle(float r)
{
    float pi = 3.14;
    return (pi*r*r);
}
int main()
{
    float radius;
    cout<<"enter radius of circle "<<endl;
    cin>>radius;
    cout<<"area of circle is : "<<areaCircle(radius);


    return 0;

}