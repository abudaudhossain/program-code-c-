#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string upper,lower;
    cout <<"enter Upper value:";
    cin >>upper;
    transform(upper.begin(),upper.end(),upper.begin(), ::tolower);
    //lower=upper;
    cout <<"\n Retrun lower value:"<<upper;

    return 0;

}
