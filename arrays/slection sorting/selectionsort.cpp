#include "iostream"
#include <string>
using namespace std;

void selectionsort(int arr[] , int n ){
    for (int i=0; int i < n-1; i++){
        int min_index = i;
        for (int j = 0 ; int j < n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
            if(min_index != i ){
                swap(arr[min_index] , arr[i]);
            }
        }
    }
}


int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionsort( arr, n );
    cout << "the sorted array is: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;


    return 0;
}