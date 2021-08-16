#include<iostream>
using namespace std;

bool even(int a)
{
    bool b;
    if(a%2==0)
    {
       b=true;
    }
    else
        b=false;

    return b;

}
int main()
{
    int c;
    cin>>c;
    even(c);
    if(b)
    {
        cout<<"it is even";
    }
    else{
        cout <<"it is not even";
    }
    return 0;
}
