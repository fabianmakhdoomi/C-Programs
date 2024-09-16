#include <iostream>
using namespace std;
class test
{
 private:
 int m , n;
 public:
 void input();
 void display();
 int largest();
};
int test::largest()
{
    if (m>=n)
    return m;
    else
    return n;
}
void test :: input()
{
    cout<<"enter two numbers m an n"<<endl;
    cin>>m>>n;
}
void test::display()
{
    int a;
    a = largest();
    cout<<"largest is "<<a<<endl;
}
int main()
{
    test obj;
    obj.input();
    obj.display();
    return 0;
}