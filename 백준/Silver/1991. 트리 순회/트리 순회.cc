#include <iostream>
#include <unordered_map>
using namespace std;

class Node
{
public:
    char data;
    Node* left;
    Node* right;

    Node(char val):data(val), left(nullptr), right(nullptr) {}
};

unordered_map<char,Node*> tree;
void buildtree(int n)
{
    char parent, left, right;
    for(int i=0;i<n;i++)
    {
        cin>>parent>>left>>right;

        if (tree.find(parent) == tree.end()) 
        {
            tree[parent] = new Node(parent);
        }
        
        if (left != '.') {
            tree[left] = new Node(left);
            tree[parent]->left = tree[left];
        }
        
        if (right != '.') {
            tree[right] = new Node(right);
            tree[parent]->right = tree[right];
        }
    }
}
void preorder(Node* root)
{
    if(!root)   return;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root)
{
    if(!root)   return;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

void postorder(Node* root)
{
    if(!root)   return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    buildtree(n);
    Node* root=tree['A'];
    preorder(root);
    cout<<"\n";
    inorder(root);
    cout<<"\n";
    postorder(root);
}