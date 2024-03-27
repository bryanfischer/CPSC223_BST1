/**
 * file:            node.h
 * author:          your name
 * date modified:   
 * description:
 */

#ifndef NODE_H
#define NODE_H

class Node{

    public:

        Node(int val){
            value = val;
            leftChild = nullptr;
            rightChild = nullptr;
        }

        int value;
        Node * leftChild;
        Node * rightChild;
};

#endif