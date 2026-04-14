#include<vector> 
#include<iostream>



using namespace std; 

int main() { 

    ///////////////////////////////////////////////////////
    // creating a vector of integers 
    vector<int> myVector;
    
    // concept push and pop 
    // stack 
    // last element inseted will be take out first 
    // first element insterted will be take out last 
    // deleting a element in the stack the last element will be deleted first 
    // (pop) will delete the last element in the stack 
    int x ;         
    myVector.push_back(10);
    cout << "Enter a number to add to the vector : " << endl; 
    cin >> x;   
    myVector.push_back(x); // entering a value to the vector  by using the push_back


     cout << "Printing the vector : " << endl;

    for (int i =0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";

    }


    cout << "The last element in the vector is : " << myVector.back() << endl;  

    // this is to access the array 
    // size of the array is the number of elements in the array 
   

    ///////////////////////////////////////////////////////
    vector<int> myvector2;
    //adding numbers to the empty vector 
    int input2; 

    for(int i= 0; i < 10; i++) { 

        cout <<"\n\n\nEnter a number to add to the vector : ";
        cin >> input2; // this is the correct way to add a number to the vector
        myvector2.push_back(input2); // this is the correct way to add a number to the vector
    }
// printing the looped vector 
    for(int i = 0; i < myvector2.size(); i++) { 
        cout << myvector2[i] << " ";
            
    }
cout << "\n The last element in the vector is : " << myvector2.back() <<endl; 
    //////////////////////////////////////////////
    /* 
    Enter a number to add to the vector : 
60
Printing the vector : 
10 60 The last element in the vector is : 60



Enter a number to add to the vector : 
30



Enter a number to add to the vector : 
40



Enter a number to add to the vector : 
50



Enter a number to add to the vector : 
60
30 40 50 60 
 The last element in the vector is : 60
    
    */


    /////////////////////////////////////////
    ///             Removing the vector element 
    /////////////////////////////////////////
  
    /* Removing the last element in the vexctor 
    
    OUTPUT :     
    After removing the last element in the vector : 
    50 60 60 %      
    
    */
   //////////////////// 
    int numberRemoved = myvector2.back(); // this is the index of the last element in the vector after removing the last element
    
    ////////////////////
    // printi the vector 
    ////////////////////
    
    for (int i = 0; i < myvector2.size(); i++) { 
        cout << myvector2[i] << " ";
      
        
    }

    cout << "\nNumber that was removed was: " << numberRemoved << endl;
    

    cout << "The vector after pop_back is called inside the loop once: " << endl; 
    int s = myvector2.size();
    for(int i =0; i <myvector2.size(); i++) { 
        cout << "Current item printing: " << myvector2[i] << endl; 
        cout << "Removing item number: " <<  s - i << endl; 
        myvector2.pop_back();
    }
    return 0; 
}