
#include <iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   int i,c=0;
   for(i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1])
            c++;
    }
    if(c%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;

    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;

    }
    return 0;
}
