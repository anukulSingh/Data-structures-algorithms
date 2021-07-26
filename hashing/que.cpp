#include <iostream>
#include <unordered_set>
#include <unordered_map>

using namespace std;


// find count of distinct elements in an array
// int countDistinct (int *arr, int n) {
//     unordered_set <int> us (arr, arr + n);
//     return us.size();
// }

// finding frequencies of elements in an array
// void countFreq (int *arr, int n) {
//     unordered_map <int, int> mp;
//     for (int i = 0; i < n ; ++i) 
//         mp[arr[i]]++;
//     for (pair <int, int> x: mp)
//         cout << x.first << " "<< x.second << "\n";
// }

// finding no of elements that are common in two arrays
//TC - O(m+n) AS - O(m)
// int intersect (int *a, int *b, int m, int n) {
//     unordered_set <int> s(a, a+m);
//     int res = 0;
//     for (int i = 0; i < n; ++i) {
//         if (s.find(b[i]) != s.end()) {
//             res++;
//             s.erase(b[i]);
//         }
//     }    
//     return res;
// }

// count all distinct elements in two unsorted arrays
// TC & AS - O(m+n)
// int unionEl (int *a, int *b, int m, int n) {
//     unordered_set <int> s(a, a+m);
//     for (int i = 0; i < n; ++i) {
//         s.insert(b[i]);
//     }
//     return s.size();
// }

// for unsorted array, check if a pair exists with a given sum
// for sorted array, we use two pointer approach
bool isPair (int *arr, int n, int sum) {
    unordered_set <int> h;
    for (int i = 0; i < n; ++i) {
        if (h.find(sum - arr[i]) != h.end())
            return true;
        else 
            h.insert(arr[i]);
    }
    return false;
} 
int main() {
    // int arr[] = {15, 16, 27, 27, 28, 15};
    // cout << countDistinct(arr, 6);

    // int arr[] = {10,15,10,20,2,20,10,3,2};
    // countFreq (arr, 9);

    // int a[] = {10, 20,10, 30};
    // int b[] = {20, 10, 10, 40, 30};
    // cout << intersect(a, b, 4, 5);

    // int a[] = {10, 20,10, 30};
    // int b[] = {20, 10, 10, 40, 30};
    // cout << unionEl(a, b, 4, 5);

    int arr[] = {10,3,4,78};
    isPair(arr, 4, 81) ? cout << "Present" : cout << "Absent";
    return 0;
}