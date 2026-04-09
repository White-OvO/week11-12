#include<iostream> 
#include<cstdlib> 
#include<ctime>

using namespace std; 

int main () { 
// maxium element in an array 
int numbers[10]; 

// top slots of size 10 for an array 

// generating random numbers for 0 to 10

srand(time(0)); 
for(int i =0; i < 10; i++) { 
    numbers[i] = rand() % 11;
    cout << "number generated : " << numbers[i] << endl ;
    /* output 
number generated : 0
number generated : 2
number generated : 2
number generated : 1
number generated : 6
number generated : 7
number generated : 2
number generated : 10
number generated : 4
number generated : 8 
    */
}

// printing the generated numbers and finding the max number 
int max = 0; 
for (int i = 0 ; i < 10; i++) { 
    cout << numbers[i] << " " ;


    if (numbers[i] > max) {  
        max = numbers[i]; 
    }
}
    cout << "\nMax number is : " << max << endl ;
// out : 
// 7 3 1 0 5 8 5 6 3 4 
// Max number is : 8
    return 0; 
}