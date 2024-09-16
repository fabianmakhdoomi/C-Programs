#include <iostream>
using namespace std;
inline float add (float x , float y)
{
    return (x+y);
}
inline float sub (float p , float q)
{
    return (p-q);
}
int main()
{
float a,b;
cout<<"enter two number a and b "<<endl;
cin>>a>>b;
cout<<"addition of "<<a<<"+"<<b<<" is : "<<add(a,b)<<endl;
cout<<"subtraction of "<<a<<"-"<<b<<" is :"<<sub(a,b);

return 0;
}