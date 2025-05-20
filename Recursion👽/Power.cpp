#include <iostream>
using namespace std;

int power(int n ){
    if(n==0) { //!  Our Base Case/Stoping Condition 
        return 1;
    }
    return 2*power(n-1); //todo => Recursive Relationship
}
int main() {
  
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    cout << "2^" << n << " = " << power(n) << endl;
    
    return 0;
}