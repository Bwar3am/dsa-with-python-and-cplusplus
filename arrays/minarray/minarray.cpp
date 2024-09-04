#include "iostream"
#include <windows.h>
#include <string>
#include <ctime>
using namespace std; 

int main(){
    int minarray[] = {12,43,54,56,76,87,89,90,9045,34,2,21,43};
    int minval = minarray[0];

    
    for (int i = 0 ; i < sizeof(minarray) / sizeof(int) ; i++ ){
        if (minarray[i] < minval){
            minval = minarray[i]; 
        }
        
    }
    
    
    

    
}

//buble sort