#include <iostream>
#include<queue>
using namespace std;

class Node
{
public:
  int data;
  Node *left; // left Pointer
  Node *right; // right Pointer


  // Constructor
  Node(int d){
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

// InOrder :- L.N.R

void inOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  inOrder(root->left);       // LEFT
  cout << root->data << " "; // NODE
  inOrder(root->right);      // RIGHT
}

// PreOrder :- N.L.R

void preOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data << " "; // NODE
  preOrder(root->left);      // LEFT
  preOrder(root->right);     // RIGHT
}

// PostOrder :- L.R.N

void postOrder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  postOrder(root->left);     // LEFT
  postOrder(root->right);    // RIGHT
  cout << root->data << " "; // NODE
}

void labelOrderTraversal(Node *root)
{ // todo=> aur pta hai jaab bhi hum label order traversal ka use krte hai n to jyada easy hota hai queue ka use krna ....aur mostly hum queue ka hi use krte hai aur ,labelOrderTraversal ko hi to bolte hai hum BFS(Breadth First Search)

  queue<Node *> q;
  q.push(root);
  q.push(NULL); // ye pta hai hamne as a seprator use kiya hai isko , aab isese kya hota hai ,basically jaise ki ,bhai pta bhi to hona chaiye n ki hmm aab iss Node mein element fill ho gye, aur ye yehi kaam kaar raha hai , maan lijiye ki humko pta hai root element mein ek hi element ata hai lekin algorithim ko pta karwane ke liye hi hum separator ka use krte hai

  while (!q.empty())
  {
    Node *temp = q.front(); // hamne yeha temp variable isiliye banaya kyuki isis ye pta chal raha hai hamne q ka jo front element hai usko temp mein rakhe hai.
    cout << temp->data << " " << endl;

    q.pop();

    if (temp == NULL) // iska mtlb pta hai ye keh rehe hai yeha per n ki hamra purana lebel  complete traverse ho chuka hai bass,kyuki bhai common sense ki baat hai n ki yedi ek traversal poora hoga tabhi to dusre per ayega n
    {

      if (!q.empty()) // mtlb samjh rehe ho yeha per isiliye aisa likha gya ki yedi kisi case mein queue empety nhi hua(mtlb ki uske child mein abhi bhi element hai ). to similarly yeha per bhi separator ka use kerenge.
      {
        q.push(NULL);
      }
    }
    else
    {
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

// Function to insert a Node
Node* insertInput(Node *root, int d)
{
  if(root == NULL) { // ye mera base case hai ki yedi mera root null hai to usme ek data create karo 
    root = new Node(d);
    return root;
  }

  if(d < root->data) // ye mera base case hai ki yedi mera data root->data se kam hai to usme left ko call kar dete hai
    root->left = insertInput(root->left, d);
  else // ye mera base case hai ki yedi mera data root->data se gehta hai to usme right ko call kar dete hai
    root->right = insertInput(root->right, d);
}

void takeInput(Node* &root) {
int data ;

cout << "Enter -1 for no Node:" << endl;
cin >> data;


while (data != -1) //! pta hai iska mtlb hua n jaab taak data -1 nhi ho jata hai taab taak tum data ko lete rehe 
{
 root =  insertInput(root , data);
  cin >> data;
}

}
int main()
{

  Node* root = NULL;
cout << "Enter the data to create BST :-" << endl;
takeInput(root);

cout << "Label Order Traversal of BST :-" << endl;
labelOrderTraversal(root);
 //labelOrderTraversal ko hum BFS(Breadth First Search) ka use krte hai n to jyada easy hota hai queue ka use krna....aur mostly hum queue ka hi use krte hai aur ,labelOrderTraversal ko hi to bolte hai hum BFS(Breadth First Search)

 //InOrder :- L.N.R
 //PreOrder :- N.L.R
 //PostOrder :- L.R.N

 //Label Order Traversal :- N.L.R.N.L.R.N...

 //Inorder traversal visually represents the left child, then the root, then the right child.
 //Preorder traversal visually represents the root, then the left child, then the right child.
 //Postorder traversal visually represents the left child, then the right child, then the root.
 //Label Order traversal visually represents the level order traversal, where each level is represented by a new line.

 //BFS (Breadth First Search) is a traversal algorithm that starts at the root node and explores as far as possible along each branch before backtracking.

 //In BFS, we visit nodes level by level, starting from the root. We use a queue to keep track of the nodes we need to visit.

 //Time Complexity :- Insertion: O(log n), Deletion: O(log n), Search: O(log n)
 //Space Complexity :- O(n)



  return 0;
}