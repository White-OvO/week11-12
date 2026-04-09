#include<iostream> 

using namespace std;

int main() { 
// creating an arry for char 
char alphanet[10]; 

// creating a random number generator for char
srand(time(0)); 

// loop to fill the array with random characters 
for (int i = 0; i < 10; i++){ 
    alphanet[i] = 97 + rand() % 26; // generates a random number between 97 and 122 (ASCII values for 'a' to 'z')
}
for (int i=0; i < 10; i++){ 
    cout << alphanet[i] << " "; // prints the random characters in the array 
    // output a q n q g p c o l v %       
}

//////////////////////////////////////////////////////////////////////////////////////

cout << "\nEnter the lower case alphabet you want to search for " << endl; 
char searchChar;
cin >> searchChar;
bool found = false;

for(int i =0; i <10; i++) { 
    if(alphanet[i] == searchChar) { 
        cout << "The character " << searchChar << " Is found at index " << i << endl; 
        bool found = true;
        break;
    } if ( !found) { 
        cout << "The character " << searchChar << " is not found in the array" << endl; 
        break;
        
    }

}
/*
Output : 
a a l t u t p y v q 
Enter the lower case alphabet you want to search for 
a
The character a Is found at index 0
*/ 



///////////////////////////////////////////////////////////////////////////////////////////
    return 0; 
}