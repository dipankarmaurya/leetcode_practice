#include <bits/stdc++.h>
using namespace std;
 
void abc(char s[])
{
    if(s[0] == '\0')
        return;
 
    abc(s + 1);
    abc(s + 1);
    cout << s[0];
}
 
int main()
{
    abc("abcd");
    return 0;
}
