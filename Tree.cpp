#include <iostream>
#include "Node.h"
#include "Tree.h"

using namespace std;

Tree::Tree()
{
    root = NULL;
}

Tree::Tree(int data)
{
    root = new Node(data);
}

Tree::Tree(int arr[], int i, int n)
{
    this->root = build_tree(arr,this->root,i,n);
}

Tree::~Tree()
{
    delete root;
}

Node* Tree::build_tree(int arr[], Node* root, int i, int n)
{
    // Base case for recursion
    if (i < n)
    {
        Node* temp = new Node(arr[i]);
        root = temp;

        // Einfugen der linken Kind
        root->left = build_tree(arr, root->left, 2 * i + 1, n);

        // Einfugen der rechtes Kind
        root->right = build_tree(arr, root->right, 2 * i + 2, n);
    }
    return root;
}

bool Tree::isEmpty()
{
    if (root == NULL)
        return true;
    return false;
}

Node* Tree::insert(Node* node, int data)
{
    /* 1. Wenn das Baum leer ist, gebe zuruck
    einen neuen einzelnen Knoten*/
    if (node == NULL)
        return(node = new Node(data));
    else
    {
        /* 2. Wenn nicht...*/
        if (data <= node->data)
            node->left = insert(node->left, data);
        else
            node->right = insert(node->right, data);

        return node;
    }
}

void Tree::printPostorder(Node* node)
{
    if (node == NULL)
        return;

    printPostorder(node->left);

    printPostorder(node->right);

    cout << node->data << " ";
}

void Tree::printInorder(Node* node)
{
    if (node == NULL)
        return;

    printInorder(node->left);

    cout << node->data << " ";

    printInorder(node->right);
}

void Tree::printPreorder(Node* node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";

    printPreorder(node->left);

    printPreorder(node->right);
}

int Tree::countNodes(Node* n)
{
    int ct = 1;

    if (n->left != NULL)
        ct += countNodes(n->left);

    if (n->right != NULL)
        ct += countNodes(n->right);

    return ct;
}

int Tree::countEdges(Node* n)
{
    return countNodes(n) - 1;
}

int Tree::height(Node* n)
{
    if (n == NULL)
        return 0;
    else
    {
        int lDepth = height(n->left);
        int rDepth = height(n->right);

        if (lDepth > rDepth)
            return(lDepth + 1);
        else return(rDepth + 1);
    }

}

Node* Tree::minValueNode(Node* node)
{
    Node* current = node;

    while (current && current->left != NULL)
        current = current->left;

    return current;
}

Node* Tree::deleteNode(Node* root, int data)
{

}

