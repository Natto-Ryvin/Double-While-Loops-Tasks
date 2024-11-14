//Task 1: Print stars increasing with a decending order
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=7)
    {
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}
