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
        data = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree
{
    public:
    Node *ROOT;

    // insert a node in the binary search tree
    void insert(string element0)
}