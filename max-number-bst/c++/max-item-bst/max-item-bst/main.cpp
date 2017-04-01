//
//  main.cpp
//  max-item-bst
//
//  Created by Jaehyun Shok on 4/1/17.
//  Copyright © 2017 Jaehyun Shok. All rights reserved.
//

#include <iostream>

using namespace std;

class node{
public:
    int Value;
    node* left;
    node* right;
    
    node(int val){
        Value = val;
        left = nullptr;
        right = nullptr;
    }
    
};

int FindMaxNumberinBst(node* root_ptr){
    
    if(root_ptr == nullptr){
        return INT_MIN;
    }
    
    auto val = root_ptr->Value;
    
    return std::max(val,
                    std::max(FindMaxNumberinBst(root_ptr->left),
                             FindMaxNumberinBst(root_ptr->right)));
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    node root(5);
    node n1(10);
    node n2(-1);
    node n3(10);
    node n4(13);
    node n5(5);
    
    root.left = &n1;
    root.right = &n2;
    root.left->left = &n3;
    root.left->right = &n4;
    root.right = &n5;
    
    auto n = FindMaxNumberinBst(&root);
    
    cout << "max number: " << n << endl;
    
  
    getchar();
    
    return 0;
}

