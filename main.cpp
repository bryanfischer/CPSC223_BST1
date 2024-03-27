// top comments

#include<iostream>
#include "bst.h"
#include "node.h"
#include "tests.h"


int main(){

    
    testCreateTree();
    //write more tests

    return 0;
}

void testCreateTree(){

    //this will throw an error until you implement the EVC
    BST tree(17);

    if(tree.root->value == 17){
        std::cout << "testCreateTree...PASS" << std::endl;
    }else{
        std::cout << "testCreateTree...FAIL" << std::endl;
    }
}