#include<iostream> 
#include<vector> 


using namespace std;


int main() { 

//creating a vector of integeress
vector<int> intVector; 

// adding numbers to the vector 
for(int i =0; i < 10; i++) { 
    intVector.push_back(i); // adding -numbers to the vector 
    cout << "Vector after adding num " << i << " : " << endl;
    for(int j=0; j < intVector.size(); j++) { // print the elements in the vector 
        cout << intVector[j] << " ";
    }
    cout << endl;
    /*
    
    Vector after adding 0 : 
0 
Vector after adding 1 : 
0 1 
Vector after adding 2 : 
0 1 2 
Vector after adding 3 : 
0 1 2 3 
Vector after adding 4 : 
0 1 2 3 4 
Vector after adding 5 : 
0 1 2 3 4 5 
Vector after adding 6 : 
0 1 2 3 4 5 6 
Vector after adding 7 : 
0 1 2 3 4 5 6 7 
Vector after adding 8 : 
0 1 2 3 4 5 6 7 8 
Vector after adding 9 : 
0 1 2 3 4 5 6 7 8 9 
*/

}
int xy = 0; 

for ( int i = 0; i < 5; i++ ) { 
    cout << "Enter a value to insert into the vector : " << endl; 
    cin >> xy;
    intVector.push_back(xy); // using push back to enter int to the vector 


}
    cout << "The vector with all the elements " << endl; 
/////////////////////////////////
    for(int k:intVector) {
       // k = k * 5; // Every element becomes 5× its original value 
        cout << k << " " << endl;        
    }
    cout << endl;
//////////////////////////////////   
    return 0; 
}