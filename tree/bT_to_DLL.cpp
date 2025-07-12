#include<iostream>
using namespace std;

// Node structure for Binary Tree and Doubly Linked List
struct Node {
    int key;
    Node *left, *right;

    Node(int k) {
        key = k;
        left = right = NULL;
    }
};

// Helper function to do in-order traversal and convert to DLL
void BT_to_DLL_Helper(Node* root, Node*& head, Node*& prev) {
    if (root == NULL) return;

    // Recursively convert the left subtree
    BT_to_DLL_Helper(root->left, head, prev);

    // Process the current node
    if (prev == NULL) {
        // This is the leftmost node, becomes head of DLL
        head = root;
    } else {
        // Link previous node and current node
        root->left = prev;
        prev->right = root;
    }

    // Update prev to current
    prev = root;

    // Recursively convert the right subtree
    BT_to_DLL_Helper(root->right, head, prev);
}

// Wrapper function to initiate conversion
Node* BT_to_DLL(Node* root) {
    Node* head = NULL;
    Node* prev = NULL;
    BT_to_DLL_Helper(root, head, prev);
    return head;
}

// Function to print the Doubly Linked List
void printDLL(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->key << " ";
        curr = curr->right;
    }
    cout << endl;
}

// Main function to test the conversion
int main() {
    // Creating the Binary Tree
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(25);

    // Convert to DLL and get head
    Node* head = BT_to_DLL(root);

    // Print the DLL
    cout << "Doubly Linked List: ";
    printDLL(head);

    return 0;
}
