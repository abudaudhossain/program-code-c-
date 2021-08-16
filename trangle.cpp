#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    float base1,base2,base3,area,s;
    cout <<"Enter Base of Triangle : ";
    cin >> base1 >> base2 >> base3;
    if( base1 + base2 > base3 && base1 + base3 > base2 && base2 + base3 > base1)
    {
        s=(base1 + base2 + base3)/2;
        area = sqrt(s*(s-base1)*(s-base2)*(s-base3));
        cout <<fixed;
        cout << setprecision(0);
        cout << "Area: " << area;
    }
    else
        cout <<"It is not Triangle";

    return 0;
}
