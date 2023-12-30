#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node * right;

    node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    } 
}; 

node* buildtree(){
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;

    if(data==-1){
        return NULL;
    }
    //step A ,B, C
    node* root = new node(data);

    cout<<"Enter data for left part of "<<data<<" node "<<endl;
    root->left = buildtree();
    cout<<"Enter data for rightt part of "<<data<<" node "<<endl;
    root->right= buildtree();

    return root;
}

void levelordertravesal(node* root){
    queue<node*> q;
    //initially
    q.push((root));
    q.push(NULL);

    while(!q.empty()){
        //A
        node* temp= q.front();
        //B
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }

        }
        else{
             //c
        cout<<temp->data<<" ";
        //d
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }

        }
       
    }
}

void inordertravesal(node* root){
    //base case
    if(root==NULL){
        return;
    }

    //LNR
    inordertravesal(root->left);
    cout<<root->data<<" ";
    inordertravesal(root->right);
}

void preordertravesal(node* root){
    //base case
    if(root==NULL){
        return;
    }

    //NLR
    cout<<root->data<<" ";
    preordertravesal(root->left);
    
    preordertravesal(root->right);
}

void postordertravesal(node* root){
    //base case
    if(root==NULL){
        return;
    }

    //LRN
    cout<<root->data<<" ";
    preordertravesal(root->left);
    
    preordertravesal(root->right);
    cout<<root->data<<" ";
}

int height(node *root){
    if(root==NULL){
        return 0;
    }

    int leftheight = height(root->left);
    int rightheight = height(root->right);
    int ans = max(leftheight,rightheight)+1;
    return ans;
}
int main(){
    node* root = NULL;

    root = buildtree();

    levelordertravesal(root);

    cout<<"Height: "<<height(root)<<endl;
    
    return 0;
} 