#include <iostream>
#include <unordered_map>
using namespace std;

struct TreeNode
{
    char data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(char val):data(val), left(nullptr), right(nullptr) {}
};

void preorder(TreeNode* root)
{
    if(root==nullptr)   return;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

void inorder(TreeNode* root)
{
    if(root==nullptr)   return;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

void postorder(TreeNode* root)
{
    if(root==nullptr)   return;
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

    unordered_map<char, TreeNode*> nodes;
    for(int i=0;i<n;i++)
    {
        char p,l,r;
        cin>>p>>l>>r;

        if(nodes.find(p)==nodes.end())
        {
            nodes[p]=new TreeNode(p);
        }
        TreeNode* parent = nodes[p];

        if(l!='.')
        {
            if(nodes.find(l)==nodes.end())
            {
                nodes[l]=new TreeNode(l);
            }
            parent->left=nodes[l];
        }

        if(r!='.')
        {
            if(nodes.find(r)==nodes.end())
            {
                nodes[r]=new TreeNode(r);
            }
            parent->right=nodes[r];
        }
    }

    TreeNode* root = nodes['A'];

    preorder(root);
    cout<<"\n";
    inorder(root);
    cout<<"\n";
    postorder(root);
}