#include <iostream>

using namespace std;

// int l =0, r = n-1;

// pair with given sum check
bool isPair(int *arr,int n, int l,int r, const int x) {
    while (l < r) {
        if (arr[l] + arr[r] == x) return true;
        else if (arr[l] + arr[r] > x)
            r--;
        else 
            l++;
    }
    return false;
}

// triplet with given sum check
bool isTriplet(int *arr,int n, int l,int r, const int x) {
    for (int i = 0; i< n; ++i) {
        if (isPair(arr,n, i+1, n-1, x-arr[i]))
            return true;
    }
    return false;
}

// median of two sorted arrays

int main() {
    int arr[] = {2,3,5,7,8};
    // isPair(arr, 6, 13) ? cout << "Yes" : cout << "Nope";
    isTriplet(arr,5,0,4, 10) ? cout << "Yes" : cout << "Nope";
}