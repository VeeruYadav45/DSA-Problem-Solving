#include <iostream>
using namespace std;
int count(int n){
  if (n==0) // todo=> Base case
  {
    return 1;
  }
//  count(n-1); Recursive Relationship

  cout << n << endl;

  // count(n-1); // Recursive Relationship
}
int main() {

    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    count(n);
    cout << "Counting done!" << endl;
  
    return 0;
}