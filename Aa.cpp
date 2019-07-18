#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char str[1000];
char xx(char x)
{
    return x+32;
}
int main()
{
    cin>>str;
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='A'-0 && str[i]<='Z'-0)
            str[i]=xx(str[i]);
    }
    cout<<str;
    return 0;
}
