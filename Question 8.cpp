#include <iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5};
    cout<<"Enter numbers: ";
    for(int i=0;i<=9;i++) 
    {
        cin>>a[i];
    }
    for(int i=0;i<=9;i++)
    {
      cout<<a[i]<<",";
    }
}



