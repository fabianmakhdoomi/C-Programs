#include <iostream>
using namespace std;
float volume_cuboid(float l , float w, float h)
{
    return l*w*h;
}
int main()
{
    float len, wid , height;
    cout<<"enter length , width and height of cuboid "<<endl;
    cin>>len>>wid>>height;
    cout<<"volume of cuboid is "<<volume_cuboid(len, wid, height)<<endl;


    return 0;

}