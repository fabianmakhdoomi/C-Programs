#include <iostream>
using namespace std;
class Test
{
    private:
     int real;
     float imaginary;

    public:
    void getdata()
    {
        real = 10;
        imaginary = 12.1;
    }
     friend Test add(Test x, Test y);
};

Test add(Test x, Test y)
{
    Test z; 
    z.real = x.real + y.real;
    z.imaginary = x.imaginary +y.imaginary;

    cout<<"sum of real = "<<z.real<<endl;
    cout<<"sum of imaginary = "<<z.imaginary<<endl;
}

int main()
{

    Test abc;
    abc.getdata();
    add(abc, abc);





    return 0;
}