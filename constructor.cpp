#include <iostream>
using namespace std;
class test
{
    private:
    int a ;
    int b;
    public:
    test()
    {
        cout<<"------------- Default Constructor ---------------"<<endl;
        cout<<"enter a number for A : ";
        cin>>a;
        cout<<"enter a number for B : ";
        cin>>b;
    }
    test(int x , int y)
    {
        cout<<"------------- Parameterized Constructor ---------------"<<endl;
        a=x;
        b=y;
    }

    void display()
    {
        cout<<"The value of A is "<<a<<endl;
        cout<<"the value of B is "<<b<<endl;
    }

    test(test &ob)
   {
    cout<<"------------- Copy Constructor ---------------"<<endl;
     a = ob.a;
     b = ob.b;
   } 
};
int main()
{
    test obj;
    obj.display();
    test obj2(10,12);
    cout<<endl;
    obj2.display();
    cout<<endl;
    test obj3(obj2);
    obj3.display();






    return 0;
}