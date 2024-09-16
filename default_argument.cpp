#include <iostream>
using namespace std;
float volume (float);
float volume (float , int);
int volume (int, int , int);
int main()
{
cout<<volume(50.10)<<endl;
cout<<volume(10.20,15)<<endl;
cout<<volume(10,20)<<endl;

return 0;
}
float volume(float x)
{
    return (x*x*x);
}
float volume(float x , int y)
{
    return (3.14*x*x*y);
}
int volume (int x , int y, int z=30)
{
    return (x*y*z);
}