#include <iostream>
using namespace std;

// void bubbleSort(int *arr, int n) {
//     for (int i = 0; i < n-1; ++i) {
//         bool swapped = false;

//         for (int j = 0; j<n-i-1; ++j) {
//             if (arr[j] > arr[j+1]) {
//                 swap(arr[j],arr[j+1]);
//                 swapped = true;
//             }
//         }
//         if (swapped == false)
//             break;
//     }
// }

// void selectionSort(int *arr, int n) {

//     for (int i =0; i< n-1; ++i) {
//         int min_index = i;
//         for (int j = i+1; j < n; ++j) 
//             if (arr[j] < arr[min_index])
//                 min_index = j;
//         swap(arr[min_index], arr[i]);
//     }
// }

// void insertionSort(int *arr, int n) {
//     for (int i =1; i< n; ++i) {
//         int key = arr[i];
//         int j = i-1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }
// }

// merge two sorted arrays
// void merge(int *a, int *b, int m, int n) {
//     int i=0,j=0;
//     while(i < m && j < n) {
//         if (a[i] <= b[j]) 
//             cout << a[i++] << " ";
//         else
//             cout << b[j++] << " ";
//     }
//     while (i < m)
//         cout << a[i++] << " ";
//     while (j < n)
//         cout << b[j++] << " ";
// }

// merge function of merge sort
void merge(int *a, int low, int mid, int high) {

    // setting up auxiliary array
    int n1 = mid - low +1, n2 = high - mid;
    int left[n1], right[n2];
    for (int i =0; i < n1; ++i)
        left[i] = a[low + i];
    for (int i =0; i < n2; ++i)
        right[i] = a[mid + i + 1];

    // standard merge logic
    int i =0, j =0, k =0;
    while (i < n1 && j < n2) {
        if (left[i] <= right[i])
            a[k++] = left[i++];
        else
            a[k++] = right[j++];
    }

    while (i < n1)
        a[k++] = left[i++];
    while (j < n2)
        a[k++] = right[j++];

}

void mergeSort(int *arr, int l, int r){
    if (r > l) {
        int m = l + (r - l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr,l,m,r);
    }
}

int main() {
    int arr[]= {10,30,2,4,32,1,0};
    // int b[] = {1,12};
    // bubbleSort(arr,6);
    // selectionSort(arr, 6);
    // insertionSort(arr,7);
    // merge(arr, 0, 2, 4);
    mergeSort(arr, 0, 6);
    for (int x: arr)
        cout << x<<" ";
}