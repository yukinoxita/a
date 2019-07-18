#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char str[1000];
int main()
{
    cin.getline(str,10000);
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='0')str[i]='.';
        if(str[i]=='1')str[i]='-';
    }
    str[strlen(str)]=' ';
    cout<<str;
    return 0;
}