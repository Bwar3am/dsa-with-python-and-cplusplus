#include <iostream>
#include <string>
#include <stack>
#include <bits/stdc++.h> 
using namespace std;

void insertionSort(int arr[], int n){           
    for (int i = 1; i < n; i++) {
        int insert_index = arr[i];
        int j = i - 1;

        
        while (j >= 0 && arr[j] > insert_index) {
            arr[j + 1] = arr[j];
            j = j - 1; 
        }
        arr[j + 1] = insert_index; 
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int n = 5;
    int arr[5] = {12,433,45,32,1};

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;


}



    

