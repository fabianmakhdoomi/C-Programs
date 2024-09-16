#include <iostream>
using namespace std;
class Test 
{
    private : 
    int a;
    int b;
    public:
    void getData(int i)
    {
        // cout<<"enter a : "<<endl;
        // cin>>a;
        // cout<<"enter b : "<<endl;
        // cin>>b;
        for( int q =0 ; q<=i; i++)
        {
            a= q+1;
            b = q+2;
        }
    }
    void display()
    {
        cout<<" value of a is : "<<a<<endl;
        cout<<" value of b is : "<<b<<endl; 
    }    
    
};
int main()
{
Test obj[3];
for (int i = 0 ; i < 3 ; i++)
{
    obj[i].getData(i);
}
for (int j = 0 ; j < 3 ; j++)
{
    obj[j].display();
    cout<<endl;
}

return 0;
}



