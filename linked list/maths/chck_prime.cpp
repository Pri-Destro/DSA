#include <bits/stdc++.h>
using namespace std;

// function check whether a number
// is prime or not
bool isPrime(int n)
{
	// Check if n=1 or n=0
	if (n <= 1)
		return false;
	// Check if n=2 or n=3
	if (n == 2 || n == 3)
		return true;
	// Check whether n is divisible by 2 or 3
	if (n % 2 == 0 || n % 3 == 0)
		return false;

/* lets say there are two divisor pair of a number N i.e. x and y
even if y is greater than sqrt(N) 
it will have  a pair x which will be smaller than sqrt(N)
there fore we will find till sqrt of N */

	// Check from 5 to square root of n
	// Iterate i by (i+6)
	for (int i = 5; i <= sqrt(n); i = i + 6)                            
		if (n % i == 0 || n % (i + 2) == 0)  // e.g -> 5 , 7 (5+2) , 13
			return false;

	return true;
}

// Driver Code
int main()
{
	isPrime(11) ? cout << "true\n" : cout << "false\n";
	return 0;
}
