#include<iostream>
using namespace std;
int main()
{
    int ar[6][6],i,j,a,b;
    for( i=1;i<6;++i)
    {
        for( j=1;j<6;++j)
        {

            cin>>ar[i][j];
        }
    }
    for( i=1;i<6;++i)
    {
        for(j=1;j<6;++j)
        {
            if(ar[i][j]==1)
            {
                a=i;
                b=j;
            }
            //cout<<ar[i][j]<<" ";
        }
       // cout <<endl;
    }
    if(a<3&&b>=3)
    {
        a=3-a;
        b=b-3;
    }
    else if(b<3&&a>=3)
    {
        a=a-3;
        b=3-b;
    }
    else if(a<3 && b<3)
    {
        a=3-a;
        b=3-b;
    }
    else{
        a=a-3;
        b=b-3;
    }


   cout <<a<<" "<<b<<endl;
    cout <<a+b<<endl;

    return 0;
}
