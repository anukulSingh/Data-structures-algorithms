#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// count number of digits
int count_digit(int n) {
	return  n > 0 ? (int) (log10 (n) + 1) : (int) (log10 (-n) + 1);
}

// check for palindrome
// bool isPalindrome(int n) {
// 	int rev = 0;
// 	int temp = n;
// 	while (temp != 0) {
// 		int last_digit = temp % 10;
// 		rev = rev*10 + last_digit;
// 		temp /= 10;
// 	}
// 	return (rev == n);
// }

// factorial implemntation, iterative way is better
// int fact (int n) {
// 	int res = 1;
// 	for (int i = 2; i <= n; ++i) 
// 		res *= i;
// 	return res;
// }

// trailing zeroes in factorial
// int countTrailingZeroes (int n) {
// 	int res = 0;
// 	for (int i = 5; i <= n; i *= 5)
// 		res += n/i;
// 	return res;
// }

// gcd of two numbers  d = (a,b)
// 'or' largest square of size d*d by which we can fill rect a*b
// Euclidean algorithm
// int gcd (int a, int b) {
// 	while (a != b) {
// 		if (a > b)
// 			a = a - b;
// 		else
// 			b = b - a;
// 	}
// 	return a;
// }

// optimized Euclidean algorithm
// O(log(min(a, b)))
// int gcd (int a, int b) {
// 	if (b == 0)
// 		return a;
// 	else 
// 		gcd(b, a % b);
// }

// check for prime
// bool isPrime (int n) {
// 	if (n == 1) return false;
// 	if (n == 2 || n == 3) return true;
// 	if (n % 2 == 0 || n % 3 == 0)
// 		return false;
// 	for (int i = 5; i*i <= n; i += 6) 
// 		if (n % i == 0 || n % (i + 2) == 0)
// 			return false;
// 	return true;
// }

// lcm finding, TC same as gcd
// length of the smallest square that can be constructed using one or more rectangular pieces of dim a and b
// int lcm (int a, int b) {
// 	return (a * b)/ gcd(a,b);
// }

// prime factors of a number
// O(sqrt(n))
// void printPrimeFactors (int n) {
// 	if (n <= 1) return;
// 	while (n % 2 == 0) {
// 		cout << 2 << " ";
// 		n /= 2;
// 	}
// 	while (n % 3 == 0) {
// 		cout << 3 << " ";
// 		n /= 3;
// 	}

// 	for (int i = 5; i*i <= n; i += 6) {
// 		while (n % i == 0) {
// 			cout << i<< " ";
// 			n /= i;
// 		}
// 		while (n % (i + 2) == 0) {
// 			cout << (i + 2) << " ";
// 			n /= (i + 2);
// 		}
// 	}
// 	if  (n > 3)
// 		cout << n;
// }

// divisors of a number in sorted order
// theta(sqrt(n))
// void printDivisors(int n) {
// 	int i;
// 	for (i = 1; i*i < n; ++i)
// 		if (n % i == 0) {
// 			cout << i <<" ";
// 		}
// 		--i;
// 	for ( ;i >= 1; --i)
// 		if (n % i == 0)
// 			cout << n/i << " ";
// }

// Sieve of Erastothenes to print prime numbers
// void sieve(int n) {
// 	vector <bool> isPrime(n+1, true);
// 	for (int i = 2; i*i <= n; ++i) {
// 		if (isPrime[i]) {
// 			for (int j = 2*i; j <= n; j = j + i)
// 				isPrime[j] = false;
// 		}
// 	}
// 	for (int i = 2; i <=n; ++i)
// 		if(isPrime[i])
// 			cout << i << " ";
// }

//optimized sieve O(n loglogn) ~ O(n)
void sieve(int n) {
	vector <bool> isPrime(n+1, true);
	for (int i = 2; i <= n; ++i){
		if (isPrime[i]){
			cout << i << " ";
			for (int j = i*i; j <= n; j = j + i)
				isPrime[j] = false;
		}
	}
}

// COmputing power  O(log n)
// int power(int x, int n) {
// 	if (n == 0)
// 		return 1;
// 	int temp = power(x, n/2);
// 	temp *= temp;
// 	return (n % 2 == 0) ? temp : temp*x;
// } 

// Iterative power
// Binary exponentiation
int powerIterative(int x, int n) {
	int res = 1;
	while (n>0) {
		if (n & 1)  // n%2!=0 can be written as such, gives non-zero if odd
			res *= x;
		x = x*x;
		n = n>>1; // n/=2 can be written as such
	}
	return res;
}

int main()
{
	// cout << count_digit(1238595739);
	// cout << isPalindrome(4567654);
	// cout << fact(5);
	// cout << countTrailingZeroes(125);
	// cout << gcd(4,6);
    // cout << lcm(4, 6);
	// (isPrime(1031)) ? cout << "Prime" : cout << "Composite";
	// printPrimeFactors(450);
	// printDivisors(96);
	// sieve(100);
	// cout << power(3,4);
	// cout << powerIterative(4,5);
	return 0;
}
