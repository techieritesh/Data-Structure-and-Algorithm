#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]!=' ')
            cout << str[i];
            else
                cout << "@40";
        /* code */
    }
    
}