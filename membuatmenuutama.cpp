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

if(element < parent->info)
{
    parent->leftchild = newNode;
}

else if(element > parent->info)
{
    parent->rightchild = newNode;
}
void inorder(Node *ptr)
{
}

if(ptr != NULL)
{
    inorder(ptr->leftchild);
    cout << ptr->info << " ";
    inorder(ptr->rightchild);
}

void preorder(Node *ptr)
{
    if(ptr != NULL)
    {
        cout << ptr->info << " ";
        preorder(ptr->leftchild);
        preorder(ptr->rightchild);
    }
}

void postorder(Node *ptr)
{
    if(ptr != NULL)
    {
        postorder(ptr->leftchild);
        postorder(ptr->rightchild);
        cout << ptr->info << " ";
    }
}

int main()
{
    BinaryTree obj;

    while(true)
    {
        cout << "1. Insert" << endl;
        cout << "2. Inorder" << endl;
        cout << "3. Preorder" << endl;
        cout << "4. Postorder" << endl;
        cout << "5. Exit" << endl;

        char ch;
        cin >> ch;

        switch(ch)
        {
            case '1':
            {
                string word;
                cin >> word;
                obj.insert(word);
                break;
            }

            case '2':
                obj.inorder(obj.ROOT);
                break;

            case '3':
                obj.preorder(obj.ROOT);
                break;

            case '4':
                obj.postorder(obj.ROOT);
                break;

            case '5':
                return 0;
        }
    }
}