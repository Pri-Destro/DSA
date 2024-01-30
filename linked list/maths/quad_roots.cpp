#include <iostream>
#include <cmath>
using namespace std;


long long factorial(int N){
    if (N == 0) {return 1;}
    return N * factorial(N-1);
}


int digitsInFactorial(int N)
    {
        // code here
        int count = log(factorial(N)) + 1;
        return count;
    }
int main()
{

    cout << digitsInFactorial(42) << endl;
    // cout << factorial(42) << endl;
    return 0;
}
