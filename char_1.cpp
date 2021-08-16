#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {cin>>s[i];}

    for(int i=0;i<n;i++){
    cout<<s[i].size()<<endl;
    cout <<s[i].length()<<endl;
    cout <<s[i].size()-1<<endl;
    for(int i=0;i<s[i].size();i++)
    cout <<s[i]<<endl;
    if(10<s[i].size())
        cout<<s[i][0]<<s[i].size()-2 << s[i][s[i].size()-1]<<endl;
    else
        cout<<s[i]<<endl;}


    return 0;
}
