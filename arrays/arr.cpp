#include <iostream>
using namespace std;

// keep track of index of largest and second largest element in array
// int secondLargest(int *arr, int n) {
//     int res = -1, largest = 0;
//     for (int i = 1; i < n; ++i) {
//         if (arr[i] > arr[largest]) {
//             res = largest;
//             largest = i;
//         }
//         else if (arr[i] != arr[largest]){
//             if ((res == -1) || (arr[i] > arr[res]))
//                 res = i;
//         }
//     }
//     return res;
// }

// check if array is sorted
// one  way of keeping track of two els

// bool isSorted (int *arr, int n) {
//     for (int i = 1; i < n; ++i) 
//         if (arr[i] < arr[i-1])
//             return false;
//     return true;
// }

// Reverse an array
void reverse (int *arr, int d, int n) {
    int low = d, high = n;
    while (low < high) {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    // for (int i = 0; i<n; ++i)
    //     cout << arr[i]<< " ";
}

// Remove dups from sorted array and return size of first distinct
// another way of keeping track of two elements
// void removeDuplicate (int *arr, int n) {
//     int res = 1;
//     for (int i =1; i <n; ++i) {
//         if (arr[i] != arr[res-1]) {
//             arr[res] = arr[i];
//             res++;
//         }
//     }
//     for (int i = 0; i<n; ++i)
//          cout << arr[i]<< " ";
//     cout<<endl;
//     return res;
// }

// move all zeroes to end, maintaining the order
// void moveToEnd(int *arr, int n) {
//     int count = 0;
//     for (int i =0; i < n; ++i) {
//         if (arr[i] != 0) {
//             swap(arr[i], arr[count]);
//             count ++;
//         }
//     }
// }

// left rotate arry by D places
// void leftRotate(int *arr, int n, int d) {
//     reverse(arr, 0, d-1);
//     reverse(arr,d,n-1);
//     reverse(arr, 0, n-1);
// }

// // right rotate array by d places
// void rightRotate(int *arr, int n, int d) {
//     reverse(arr, 0, n-1);
//     reverse(arr, 0, d-1);
//     reverse(arr, d, n-1);
// }

// Leaders in an array
// void leaders(int *arr, int n) {
//     int curr_index = arr[n-1];
//     cout << curr_index<<" ";
//     for(int i = n-2; i >= 0; --i) {
//         if (curr_index < arr[i]) {
//             curr_index = arr[i];
//             cout << curr_index<<" ";
//         }
//     }
// }

// Maximum difference algorithm (order matters)
// another way of keeping tracks in array
// int maxDifference(int *arr, int n) {
//     int res = arr[1] - arr[0];
//     int minVal = arr[0];

//     for(int i =0; i < n; ++i) {
//         res = max(res, arr[i] - minVal);
//         minVal = min(minVal, arr[i]);
//     }
//     return res;
// }

// frequency in sorted array
// void printFreq(int *arr, int n) {
//     int freq = 1, i =1;
//     while (i < n) {
//         while(i < n && arr[i] == arr[i-1]){
//             freq++;
//             i++;
//         }
//         cout << arr[i-1] << ": "<< freq<<"\n";
//         i++;
//         freq =1;
//     }
//     if(n == 1 || arr[n-1] != arr[n-2])
//          cout << arr[n-1] << ": "<< 1<<"\n";
// }

// max profit for stock,buy and sell problem
// int maxProfit(int *price, int n) {
//     int profit = 0;
//     for(int i = 1; i < n; ++i) {
//         if (price[i] > price[i-1])
//             profit += (price[i] - price[i-1]);
//     }
//     return profit;
// }

// max consec digit in an array, here binary array
// int maxConsecutive(int *arr, int n) {
//     int curr;
//     int res = 0;
//     for(int i = 0; i < n; ++i) {
//         if(arr[i] == 0)
//             curr = 0;
//         else {
//             curr ++;
//             res = max(res, curr);
//         }
//     }
//     return res;
// }

// Trapping Rainwater problem
// int getWater(int *water, int n) {
//     int res = 0;
//     int lmax[n],rmax[n];

//     lmax[0] = water[0];
//     for(int i =1; i < n; ++i)
//         lmax[i] = max(water[i], lmax[i-1]);
    
//     rmax[n-1] = water[n-1];
//     for(int i = n-2; i >= 0; --i) 
//         rmax[i] = max(water[i], rmax[i+1]);

//     for(int i = 1; i < n-1; ++i)
//         res += (min(lmax[i], rmax[i]) - water[i]);

//     return res;
// }



int main() {

    // int arr[] = {12,14,17,10};
    // int arr[] = {10,10,20,30,40,40,40,50};
    // int arr[] = {10, 20,30, 10,20,30,10,40};
    // int arr[] = {10,0,9,0,3,4,0};
    // int price[] = {1,5,3,8,12};
    // int water[] = {3,0,1,2,5};
    int arr[] = {1,0,0,1,1,1,1,0,0,0,0,1};

    int n; cin >> n;
    cout << n;

    // cout << secondLargest(arr, 4);
    // isSorted(arr, 4) ? cout << "Sorted.." : cout << "Unsorted..";
    // reverse(arr, 4);
    // cout << removeDuplicate(arr, 8);
    // moveToEnd(arr,8);

    // leftRotate(arr, 7, 3);
    // rightRotate(arr,7,3);

    // cout << maxDifference(arr, 4);
    // leaders(arr, 4);

    // printFreq(arr,8);
    // cout << maxProfit(price,5);

    // cout << getWater(water, 5);
    // cout << maxConsecutive(arr, 12);

    // for(int x: arr)
    //     cout << x << " ";
    return 0;
}