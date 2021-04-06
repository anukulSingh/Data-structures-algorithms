#include <bits/stdc++.h>
using namespace std;

// factorial
// int fact(int n, int k) {
//     if (n == 0 || n == 1 ) return k;
//     return fact(n-1, k*n);
// }
// // fibonacci
// int fib (int n) {
//     if ( n <= 1 ) return n;
//     return fib(n-1) + fib(n-2);
// }

// // sum of first n natural no 
// int sumRec(int n) {
//     if (n == 0) return 0;
//     return n + sumRec(n-1);
// }
// int sumRectail(int n, int k) {
//     if (n == 0) return k-1;
//     return sumRectail(n-1, n+k);
// }

bool isPalindrome(String &str, int start, int end) {
    if (start >= end) return true;
    return (str[start] == str[end]) && isPalindrome(str, start+1, end-1);
}

int main() {
    // cout << fact(6,1);
    // cout << fib(20);
    // cout << sumRec(5);
    char str[] = "abba";
    isPalindrome(str, 0,3);
    // res ? cout << ":)" : cout << ":(";
    // cout << sumRectail(10, 1);
}