#include "iostream"
#include <windows.h>
#include <string>
#include <ctime>
using namespace std; 




//fibunachi numbers and algorithms


int main(){
    int prev1 = 0 ;
    int prev2 = 1;

    for(int i = 0 ; i < 10 ; i ++ ){
        int res = prev1 + prev2;
        cout << res << endl;
        prev1 = prev2;
        prev2 = res;
        

    } 

    return 0;
}