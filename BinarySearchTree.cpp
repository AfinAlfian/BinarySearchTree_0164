#include <iostream>
#include <string>
using namespace std;

class Node {
    string info;
    Node* leftchild;
    Node* rightchild;

    //Constructor for the node class
    Node(string i, Node* l, Node* r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree
{
public:
    Node* ROOT;

    BinaryTree() {
        ROOT = nullptr; //Initializing ROOt to null
    }
};

int main()
{
    
}
