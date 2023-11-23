#include <iostream>
#include<algorithm> //used for reverse function
using namespace std;

int main()
{
	string x;
	string y;
	cin>>x;
	cin>>y;
	if (x==y)
	{
		reverse(x.begin(), x.end());
		 //reverses the function
	}
	cout<<x<<endl;
	cout<<y<<endl;
	return 0;
}

