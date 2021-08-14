#include <iostream>
#include <queue>
using namespace std;

class node {
    public:
        int data;
        node *left;
        node *right;

        node (int d) {
            data = d;
            left = right = NULL;
        }
        // void preorder(node *root) {
        //     if (root != NULL) {
        //         cout<< root->data << " ";
        //         preorder(root->left);
        //         preorder(root->right);
        //     }
        // }
        // void inorder(node *root) {
        //     if (root == NULL)
        //         return;
        //     inorder(root->left);
        //     cout << root->data << " ";
        //     inorder(root->right);
        // }
        // void postorder (node *root) {
        //     if (root == NULL)
        //         return;
        //     postorder(root->left);
        //     postorder(root->right);
        //     cout << root->data << " ";
        // }
        // int height (node *root) {
        //     if (root == NULL)
        //         return 0;
        //     return max(height(root->left), height(root->right)) + 1;
        // }
        // // print nodes at k distance from root
        // // print nodes at k+1 th level
        // void printKDist(node *root, int k) {
        //     if (root == NULL) return;
        //     if (k == 0) cout << root->data << " ";
        //     else {
        //         printKDist(root->left, k-1);
        //         printKDist(root->right, k-1);
        //     }
        // }
        // level -order traversal using a queue
        // dequeue an element and enqueue the children
        void printLevel (node *root) {
            if (root == NULL) return;
            queue <node *> q;
            q.push(root);
            while (!q.empty()) {
                node *curr = q.front();
                q.pop();
                cout << (curr->data) << " ";
                if (curr->left != NULL)
                    q.push(curr->left);
                if (curr->right != NULL)
                    q.push(curr->right);
            }
        }
};
int main() {
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);

    //root->preorder(root); // 10 20 30 40 50
    // root->inorder(root); // 20 10 40 30 50
    // root->postorder(root);  // 20 40 50 30 10
    // cout << root->height(root);
    // root->printKDist(root, 2); // at second level
    root->printLevel(root); // 10 20 30 40 50
}
