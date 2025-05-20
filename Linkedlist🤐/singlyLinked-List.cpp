#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

// ! Constructor

        Node(int data)
        {
          this->data = data;
          this->next = NULL;
}

};
int main() {

  Node* node1 = new Node(123);

  cout << node1->data << endl; // yeha per hum arow operator use kar rahe hai kyuki yeha per pointer hai aur pointer jaab hume access krna hota hai n heap memory ke andar to hum aise hi krte hai 
  // cout << (*node1).next << endl; // yeha per hum dereference operator use kar rahe hai kyuki yeha per pointer hai aur pointer jaab hume access krna hota hai n heap memory ke andar to hum aise hi krte hai,aur dono way sahi jisme aap comfertable ho aap usme kaar sekte hai 

  cout << node1->next << endl; // aise bhi likkh sekte hai koi issue nhi hai 

  // node1->data = 0036;

  // cout << node1->data << endl;

  
    return 0;
}