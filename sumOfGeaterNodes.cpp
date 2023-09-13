#include <iostream>
using namespace std;
 
// Data structure to store a BST node
struct Node
{
    int data;
    Node* left = nullptr, *right = nullptr;
 
    Node() {}
    Node(int data): data(data) {}
};
 
// Function to perform inorder traversal on the tree
void inorder(Node* root)
{
    if (root == nullptr) {
        return;
    }
 
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
 
// Recursive function to insert a key into a BST
Node* insert(Node* root, int key)
{
    // if the root is null, create a new node and return it
    if (root == nullptr) {
        return new Node(key);
    }
 
    // if the given key is less than the root node, recur for the left subtree
    if (key < root->data) {
        root->left = insert(root->left, key);
    }
    // if the given key is more than the root node, recur for the right subtree
    else {
        root->right = insert(root->right, key);
    }
 
    return root;
}
 
// Helper function to return the sum of all nodes present in a binary tree
int findSum(Node* root)
{
    if (root == nullptr) {
        return 0;
    }
 
    return root->data + findSum(root->left) + findSum(root->right);
}
 
// Function to modify the BST such that every key is updated to
// contain the sum of all greater keys
void transform(Node* root, int &sum)
{
    // base case
    if (root == nullptr) {
        return;
    }
 
    // update the left subtree
    transform(root->left, sum);
 
    // modify the sum to contain the sum of all greater keys
    sum = sum - root->data;
 
    // update the root to contain the sum of all greater keys
    root->data += sum;
 
    // update the right subtree
    transform(root->right, sum);
}
 
void transform(Node* root)
{
    int sum = findSum(root);
    transform(root, sum);
}
 
int main()
{
    int keys[] = { 5, 3, 2, 4, 6, 8, 10 };
 
    /* Construct the following tree
               5
             /   \
            /     \
           3       8
          / \     / \
         /   \   /   \
        2    4 6     10
    */
 
    Node* root = nullptr;
    for (int key: keys) {
        root = insert(root, key);
    }
 
    transform(root);
    inorder(root);
 
    return 0;
}