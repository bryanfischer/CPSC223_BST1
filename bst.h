/**
 * file:            bst.h
 * author:          your name
 * date modified:   
 * description:
 */

#ifndef BST_H
#define BST_H

#include "node.h"
#include <iostream>

class BST{

    public:

        Node * root;

        BST();

        BST(int val);

        void insert(int value);

        bool find(int value);

        void remove(int value);

        int findMax();

        int findMin();

        void printInOrder();

        void printPreOrder();

        void printPostOrder();

        int getSize();

    private:

        int size;

        Node* remove(Node * node, int value);

        Node* insert(Node * node, int value);

        void printInOrder(Node * node);

        void printPreOrder(Node * node);

        void printPostOrder(Node * node);

        int findMax(Node * node);

        int findMin(Node * node);
};



#endif