#include <iostream>
#include<queue>
using namespace std;

class node {
  public:
  int data;
  node* left;
  node* right;


  node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};


// ! Function to Create a Tree 

node* createTree(node*root) {

  cout << " Enter the node:-" << endl;
  int Data;
  cin >> Data;
  root = new node(Data); // ! Basically yeha per hum constructor call kr rehe hai 


  if(Data == -1){ // kyuki yedi -1 aata hai to hum ye manenge ki Null hai 
    return NULL; 
  }

// ! pta hai hum yeha per left node and right node ko create kaar rehe hai only,aur ye hum recursion ke through hi kaar rehe hai,because recursion ka mtlb hi hota hai tum ek ko solve krlo baaki to mai kaar hi lunga
  cout << " Enter the data for the creating left node:-" << endl;
  root->left = createTree(root->left);
  
  cout << " Enter the data for the creating right node:-" << endl;
  root->right = createTree(root->right);

  return root;
}

void labelOrderTraversal(node* root){ // todo=> aur pta hai jaab bhi hum label order traversal ka use krte hai n to jyada easy hota hai queue ka use krna ....aur mostly hum queue ka hi use krte hai aur ,labelOrderTraversal ko hi to bolte hai hum BFS(Breadth First Search)

queue<node*> q;
q.push(root);
q.push(NULL); // ye pta hai hamne as a seprator use kiya hai isko , aab isese kya hota hai ,basically jaise ki ,bhai pta bhi to hona chaiye n ki hmm aab iss node mein element fill ho gye, aur ye yehi kaam kaar raha hai , maan lijiye ki humko pta hai root element mein ek hi element ata hai lekin algorithim ko pta karwane ke liye hi hum separator ka use krte hai 

while (!q.empty())
{
  node *temp = q.front(); // hamne yeha temp variable isiliye banaya kyuki isis ye pta chal raha hai hamne q ka jo front element hai usko temp mein rakhe hai.
  cout << temp->data << " " << endl;

  q.pop();

  if (temp == NULL)  // iska mtlb pta hai ye keh rehe hai yeha per n ki hamra purana lebel  complete traverse ho chuka hai bass,kyuki bhai common sense ki baat hai n ki yedi ek traversal poora hoga tabhi to dusre per ayega n 
  {
    

    if (!q.empty()) // mtlb samjh rehe ho yeha per isiliye aisa likha gya ki yedi kisi case mein queue empety nhi hua(mtlb ki uske child mein abhi bhi element hai ). to similarly yeha per bhi separator ka use kerenge.
    { 
      q.push(NULL); 
    }
  }
  else{
    cout << endl;

    if (temp->left) // yeha per kya kaar rehe hai yedi temp null nhi hai to ek baar usme left ko daal denge aur similarly ek baar right ko daal denge
    {
      q.push(temp->left);
    }

    if (temp->right)
    {
      q.push(temp->right);
    }
  }
}
}

// InOrder :- L.N.R

void inOrder(node * root){
  if(root == NULL){
    return;
  }
  inOrder(root->left);  // LEFT
  cout << root->data << " "; // NODE
  inOrder(root->right); // RIGHT
}

// PreOrder :- N.L.R

void preOrder(node * root){
  if(root == NULL){
    return;
  }
  cout << root->data << " "; // NODE
  preOrder(root->left);  // LEFT
  preOrder(root->right); // RIGHT
}

// PostOrder :- L.R.N

void postOrder(node * root){
  if(root == NULL){
    return;
  }
  postOrder(root->left);  // LEFT
  postOrder(root->right); // RIGHT
  cout << root->data << " "; // NODE
}
int main() {
  node* root = NULL;

  //* Creating a Tree 

  root = createTree(root);
  cout<<"Label Order Traversal is:-" ;
  labelOrderTraversal(root); 
  cout<<"\nInOrder Traversal is:-" ;
  inOrder(root);
  cout<<"\nPreOrder Traversal is:-" ;
  preOrder(root);
  cout<<"\nPostOrder Traversal is:-" ;
    return 0;
}



// ! Reverse Level Order Traversal .......? Question
// ! Inorder Succesor ........?Question from Documentation
// ! Inorder Predecessor ....? Question from Documentation