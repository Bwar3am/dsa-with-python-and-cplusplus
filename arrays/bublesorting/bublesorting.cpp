#include "iostream"
#include <windows.h>
#include <string>
#include <ctime>
using namespace std;


#include<iostream>
using namespace std;
void bubbleSort(int *array, int size){
   for(int i = 0; i<size; i++) {
   
      for(int j = 0; j<size-i-1; j++) {
         if(array[j] > array[j+1]) { //when the current item is bigger than next
        
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
           
         }
      }
      
   }
}
int main(){
   
   int n = 5;
   int arr[5] = {67, 44, 82, 17, 20}; //initialize an array
   cout << "Array before Sorting: ";
   for(int i = 0; i<n; i++)
      cout << arr[i] << " ";
   cout << endl;
   bubbleSort(arr, n);
   cout << "Array after Sorting: ";
   for(int i = 0; i<n; i++)
      cout << arr[i] << " ";
   cout << endl;
}



