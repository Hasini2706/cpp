#include "BinarySearchTree.h"

int main() {
    BinarySearchTree bst;
    bst.Insert(50);
    bst.Insert(30);
    bst.Insert(70);
    bst.Insert(20);
    bst.Insert(40);
    bst.Insert(60);
    bst.Insert(80);

    cout << "Inorder Traversal: ";
    bst.PrintInorder();

    return 0;
}
