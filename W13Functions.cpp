#include<string>
#include<cmath> 
#include<iostream>
using namespace std;
/* NOTE : 
starting the loop at 1 instead of 0 to avoid division by zero  */
void muiltication(int number1) { 
    for (int i = 1; i < number1; i++) { 
        int possibleNumber = pow(i,5); 
        int possibleNumber2 = pow(i,3);
        int sum = possibleNumber / possibleNumber2;
        cout << "The sum is : " << sum << endl;
    }
}
 int main() { 
    int input = 0; 
    cout << "Enter the value of number: :   ";
    cin >> input;
    int prob1 =1, prob2 = 1, sum = 0; 
// this is a irralavent code. 

    // for (int i = 0; i <= input; i++){ 


    //     prob1 = i * i * i * i * i; 
    //     prob2 = i * i * i; 
    //     sum = sum + (prob1 / prob2); 

    // }
    // runing the loop as many amount of input times and calculating the power of 5 and 3 and then adding the result to the sum. 

    for (int i=1; i<input; i++) { 
        prob1= pow(i, 5); 
        prob2 = pow(i, 3);
        sum = sum + (prob1 / prob2);

    }
    cout << "The sum is : " << sum << endl;
    int inputNum = 0; 
    cout << "\nEnter a number but for the function :  "; 
    cin >> inputNum; 
    muiltication(inputNum);
    cout << "The sum is " << sum << endl;

    return 0; 
}