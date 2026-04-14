#include<iostream> 
#include<ctime> 
#include<cstdlib>


using namespace std; 

int main() { 
    srand(time(0));
     int arr[5]; 
     for ( int i = 0; i < 5; i++ ) { 
        arr[i] = rand() %6; 
        cout << "Number Generated : " << arr[i] << endl; 

    
     }

     for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
     }

    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // cheeck the elft with the rigght 
    // if left element is bigger than the right element than we will interchange them 
    // if kleft is bigger then right than we will interchange them 
    return 0;
}