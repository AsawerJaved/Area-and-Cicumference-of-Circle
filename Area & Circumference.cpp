#include <iostream>

using namespace std;

int main()
{
	float const pi=3.14;
    float radius, area, circumference;
    cout<<"Enter radius: ";
    cin>>radius;
    
    area=pi*radius*radius;
    cout<<"\nArea of a circle is :"<<area<<endl;
    
    circumference=2*pi*radius;
    cout<<"Circumference of a circle is :"<<circumference<<endl;


    return 0;
}
