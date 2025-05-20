#include <iostream>
using namespace std;
int factorial(int n) {
    if(n==0) { //!  Our Base Case/Stoping Condition 
        return 1;
    }
    return n*factorial(n-1); //todo => Recursive Relationship
}


int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n; 
    cout << "Factorial of " << n << " = " << factorial(n) << endl;
    return 0;
}