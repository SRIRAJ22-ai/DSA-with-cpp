#include "bst.h"

int main() {
    BinarySearchTree BST;

    int n, val;
    cout << "Enter number of elements to insert: ";
    cin >> n;

    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; ++i) {
        cin >> val;
        BST.Insert(val);
    }

    cout << "Inorder traversal of BST: ";
    BST.Inorder();
    cout << endl;
    TreeNode *customRoot = nullptr;
    BinarySearchTree BST1;

    cout << "\nEnter value to insert into separate BST using ADD: ";
    cin >> val;
    customRoot = BST1.ADD(val, customRoot);

    cout << "Inorder traversal of separate BST: ";
    BST1.PrintInorder(customRoot);
    cout << endl;
}