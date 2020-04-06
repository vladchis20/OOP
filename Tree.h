#pragma once
#include <iostream>
#include "Node.h"
#include <vector>
class Node;
using namespace std;

class Tree
{
public:

    friend class Node;

private:

    // Root of Binary Tree
    Node* root;

public:

    Node* getRoot() { return root; }

    //Constructor
    Tree();

    Tree(int arr[], int i, int n);

    //Constructor
    Tree(int data);

    //Destructor
    ~Tree();

    bool isEmpty();

    Node* insert(Node* node, int data);

    //bastelt der Binarbaum
    Node* build_tree(int arr[], Node* root, int i, int n);

    void printPostorder(Node* node);

    void printInorder(Node* node);

    void printPreorder(Node* node);

    //zum zahlen von Knoten
    int countNodes(Node* n);

    //zum zahlen von Kanten
    int countEdges(Node* n);

    //zum Bestimmen der Hohe eines Binarbaums
    int height(Node* n);

    Node* minValueNode(Node* node);

    Node* deleteNode(Node* root, int data);

};
