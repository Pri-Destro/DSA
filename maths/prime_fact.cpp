#include <iostream>
using namespace std;

 void printPrimeFactors(int n)
{
	if(n <= 1)
		return;

	while(n % 2 == 0)        // handling divisibility by 2 and 3 seperately to reduce the number of iterations
	{
		cout<<2<<" ";

		n = n / 2;
	}

	while(n % 3 == 0)   
	{
		cout<<3<<" ";

		n = n / 3;
	}

	for(int i=5; i*i<=n; i=i+6)        // prime factors should in exists less the root n
	{
		while(n % i == 0)    
		{
			cout<<i<<" ";

			n = n / i;                      // updating number by dividinig from prime factors
		}

		while(n % (i + 2) == 0)
		{
			cout<<(i + 2)<<" ";

			n = n / (i + 2);
		}
	}

	if(n > 3)                   // seperate case for largest(last) prime number
		cout<<n<<" ";             // greater than 3 as 2 and 3 cases are already handled

	cout<<endl;
}

int main() {
    
    	int n = 315;  // example
    	
    	printPrimeFactors(n);
    	
    	return 0;
}
