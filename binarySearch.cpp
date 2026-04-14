#include<iostream> 
#include<ctime> 
#include<cstdlib> 

using namespace std; 


// function to find the highest number in an array 
/*
WHAT IS WRONG:
1) No validation for empty array size.
   - If size == 0, using highArray[0] is undefined behavior (invalid access).
2) Loop starts at i = 0 even though highNumb already uses highArray[0].
   - This is not a crash, but it is an unnecessary extra comparison.

HOW TO SOLVE:
- Guard against invalid input (size <= 0).
- Initialize with first element, then scan from i = 1.

WHY THIS DECISION:
- Starting from the first real value keeps logic correct even if all values are negative.
- Input guard prevents runtime errors and teaches safer function design.

CORRECT EXAMPLE:
int highNumber(int highArray[], int size) {
    if (size <= 0) return 0;          // or throw / handle error based on class rules
    int highNumb = highArray[0];
    for (int i = 1; i < size; i++) {
        if (highArray[i] > highNumb) {
            highNumb = highArray[i];
        }
    }
    return highNumb;
}
*/
int highNumber(int highArray[], int size) { 
    int highNumb = highArray[0]; 
    for (int i = 0; i < size; i++ ) { 
        if(highArray[i] > highNumb) { 
            highNumb = highArray[i]; 
        }


    }
            return highNumb; 
}


int lowNumber(int lowArray[], int size) { 
    int lowNumber = lowArray[0];
    for (int i = 0; i < size; i++ ) { 
        if(lowArray[i] < lowNumber) { 
            lowArray[i] = lowNumber;
        }
    }
    return lowNumber;

}

// finding the middle element of the array 

int middleElement(int middleArray[], int size) { 
   
       int low = lowNumber(middleArray, size);
       int high =  highNumber(middleArray, size);
        int middleNumber = (low + high) / 2; 
        return middleNumber;

}


// sorting from the smallest to the largest number in the array 
int sorrtedAarray(int sorrtArray[], int size) { 
    
for (int i = 0; i < size - 1; i++) {
        int j = 0;
        while (j < size - 1 - i) {
            if (sorrtArray[j] > sorrtArray[j + 1]) {
                int temp = sorrtArray[j];
                sorrtArray[j] = sorrtArray[j + 1];
                sorrtArray[j + 1] = temp;
            }
            j++;
        }
    }
    return sorrtArray[size - 1];

}

void search(int arr[],int size, int target) { 
    
    int low = 0;
    int high = size - 1;
    while (low <= high) { 
        int middle = (low + high) / 2; 
        if (arr[middle] == target) { 
            cout << "The number " << target << " is found at index " << middle << endl; 
            return;
        } else if (arr[middle] < target) { 
            low = middle + 1; 
        } else { 
            high = middle - 1; 
        }
    }
    cout << "The number " << target << " is not found in the array" << endl; 
}

/*
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

*/

int main () { 
    // looking thorugh an array in a binary search way. 

    /* 
        There is not restrictions for searching in a random oder is how linar search 

        but a search in a orderder format
        1. we can start from the middle of the array and compare the middle element with the target element
        2. if the middle element is equal to the target element then we have found the  
        3. if the middle element is greater than the target element then we can ignore the right half of the array and continue searching in the left half of the array
        4. if the middle element is less than the target element then we can ignore the
        left half of the array and continue searching in the right half of the array


        the elements should increase from left to right in the array for binary search to work 
        increasing order 
        to locate the exact postion of the middle element we can use the formula 

        first we sort from smallest to largest 
        then we can use the formula to find the middle number 

        middle = (left + right) / 2; 

        where left is the index of the leftmost element and right is the index of the rightmost element in the current search range.
    */

// creating random numbers in an array 
// seed for the random numer generator
srand(time(0));
int arr[5]; 
int maxNumb = 0;
// generating random number for the array 
for (int i = 0; i < 5; i++ ) { 

arr[i] = rand() % 6;
cout << "number generated : " << arr[i] << endl ;
}
cout << "the highest number in the array is : " << highNumber(arr, 5) << endl;
// sorting the array in increasing order 
//first we need to get the highest and lowest 

// now we need the smallest number in the array 
cout << "The lowest number in the array is : " << lowNumber(arr, 5) << endl; 
cout << "the middle nu,mmber in the array is : " << middleElement(arr,5) << endl; 
cout << "the array sorted in increasing order is : " << sorrtedAarray(arr, 5) << endl; 
cout << "Sorted array: ";
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}

cout <<"\nNow we can search for a number in the array using binary search : " << endl;
int target; 
    cout << "Enter the number you want to search for : " << endl;
    cin >> target;
search(arr, 5, target);
}