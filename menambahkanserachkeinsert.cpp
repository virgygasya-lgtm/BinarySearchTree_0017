#include <iostream>
#include <string>
using namespace std;
 
class Node
{
    public:
    string data;
    Node* leftchild;
    Node* rightchild;

    // Construktor for the node class
    Node(string i, Node *l, Node *r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree
{
    public:
    Node *ROOT;

    // insert a node in the binary search tree
    void insert(string element)
    { Node *newNode = new
    Node(element,NULL,NULL);

       newNode->info = element;
       newNode->leftchild =NULL;
       newNode->rightchild = NULL;

       Node *parent = NULL;
       Node *currentNode = NULL;

       search(element,parent, currentNode);

       if (parent == NULL)
       {
        ROOT = newNode;
        return;
       }
       
    }
} 