
#include <iostream>
using namespace std;
int main()
{
    int W;
    cin>>W;

    if(W % 2==0 && W>=1 && W<=100)
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
    return 0;
}
