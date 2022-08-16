#include<iostream>
#include<string>
using namespace std;
int main()
{
int num1,valu=0,i,j;
char str1[4];
cin>>num1;
for(i=0;i<num1;i++)
{
cin>>str1;
for(j=0;j<3;j++)
{
if(str1[j]!='\0'&&str1[j]=='+')
{
valu++;
break;
}
else if(str1[j]!='\0'&&str1[j]=='-')
{
valu--;
break;
}
}
}
cout<<valu<<endl;
    return 0;
}
