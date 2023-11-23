#include <iostream>
using namespace std;

int main() {
    int a[6];
    cout<<"Enter the 6 numbers:"<<endl;    
    for (int i=0;i<6;i++){
        cout<<"Number "<<i+1<<": ";
        cin>>a[i];
    }
    for (int i=0;i<6;i++) {
        for (int j=0;j<5;j++) {
            if (a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array:"<<endl;
    for (int i=0;i<6;i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}

