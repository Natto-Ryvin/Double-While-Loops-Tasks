//Task 3: Print out numbers increasing with decreasing order but each row must have the same number
#include<iostream>
using namespace std;
int main()
{
    int temp;
    int i=1;
    while(i<=7)
    {
        temp=i;
        int j=1;
        while(j<=i)
        {
            cout<<temp;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
