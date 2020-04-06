#pragma once
#include <iostream>

using namespace std;

class Node {
public:

    //public weil ich keine getters and setters verwenden wollte
    int data;
    Node* left;
    Node* right;

public:
    //Constructor
    Node();

    //Constructor
    Node(int data);

    //Destructor
    ~Node();

    Node(const Node& other);
};
