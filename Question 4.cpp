#include <iostream>
using namespace std;

int main()
{
	int n, count=2,i=1,largestPrime=1;
	cout<<"Enter the value of N: ";
	cin>>n;
	bool isPrime = true;
	while (count<=n)
	{
		isPrime=true;
		i=2;
		while(i<count && isPrime==true)
		{
			if (!(count%i==0))
			{
				isPrime=true;
			}
			else
			{
				isPrime=false;
			}
			i++;
		}
		if (isPrime==true)
		{
			largestPrime=count;
		}
		count++;
	}
	cout<<"The largest prime number is : "<<largestPrime<<endl;
	return 0;
}

