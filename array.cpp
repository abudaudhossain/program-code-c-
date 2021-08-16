#include<iostream>
using namespace std;

int main()
{
    int n,b,c;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    b=3;
    c=4;
    cout <<a[b]<<"   "<<a[c];
    if(a[b]=a[c])
    {
        cout<<"Abu Daud";
    }

    for(int i=3;a[i]==a[i-1];i++)
    {
        cout<<" I Am suc  "<<i;

    }

    return 0;
}
