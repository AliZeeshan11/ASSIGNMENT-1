#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	int quotient,divisor;
	cout<<"Enter the divisor: ";
	cin>>divisor;
	while (num>=divisor)
	{
		num=num-divisor;
		quotient++;
	}
	cout<<"The answer is "<<quotient<<endl;
	return 0;
}

