#include<bits/stdc++.h>
using namespace std;

int pallindrome(string str)
{
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        s.push(str[i]);
    }
    string rev="";
    while(!s.empty())
    {
        rev+=s.top();
        s.pop();
    }
    if(str==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void reverse(string str)
{
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        s.push(str[i]);
    }
    string rev="";
    while(!s.empty())
    {
        rev+=s.top();
        s.pop();
    }
    cout<<rev<<endl;
}

int main()
{
    string str;

    cout << "Enter the string: ";
    cin>>str;
    if(pallindrome(str))
    {
        cout<<"Pallindrome"<<endl;
    }
    else
    {
        cout<<"Not Pallindrome"<<endl;
    }
    reverse(str);
    return 0;
}