# include<bits/stdc++.h>
using namespace std;
template<typename T>

class btNode{
    public:
    T data;
    btNode<T>* left;
    btNode<T>* right;
    btNode(T data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

btNode<int>* takeInput(){
    int rootdata;
    cin>>rootdata;
    if(rootdata == -1){
        return NULL;
    }
    btNode<int>* root = new btNode<int>(rootdata);
    btNode<int>* leftn = takeInput();
    btNode<int>* rightn = takeInput();
    root->left = leftn;
    root->right = rightn;
    return root; 
}

void preorder(btNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(btNode<int>* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(btNode<int>* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

vector<int> preorder_iterative(btNode<int>* root){
    stack<btNode<int>*> st1;
    vector<int> v;
    st1.push(root);
    cout<<"was her 2"<<endl;
    while(!st1.empty()){
        cout<<"was here 3"<<endl;
        root = st1.top();
        st1.pop();
        // v.push_back(root->data);
        cout<<root->data<<" ";
        if(root->right!=NULL){
            cout<<"was here 4"<<endl;
            // cout<<root->left->data<<endl;
            st1.push(root->right);
        }
        if(root->left!=NULL){
            cout<<"was here 5"<<endl;
            // cout<<root->right->data<<endl;
            st1.push(root->left);
        }
    }
    cout<<v.size()<<endl;
    return v;
}

// vector<vector<int>> levelorder(btNode<int>* root){
//     vector<vector<int>> ans;
//     if(root==NULL){
//         return ans;
//     }
//     queue<btNode<int>*> q;
//     q.push(root);
//     while(!q.empty()){
//         int size = q.size();
//         vector<int> level;
//         for(int i=0;i<size;i++){
//             btNode<int>* node = q.front();
//             if(node->left!=NULL){
//                 q.push(node->left);
//             }
//             if(node->right!=NULL){
//                 q.push(node->right);
//             }
//             level.push_back(node->data);
//         }
//         ans.push_back(level);

//     }
//     return ans;
// }

void levelwise(btNode<int>* root){
    vector<vector<int>> ans;
    if(root==NULL){
        return;
    }
    queue<btNode<int>*> pending;
    pending.push(root);
    while(!pending.empty()){
        vector<int> level;
        cout<<root->data<<" ";
        pending.pop();
        if(root->left!=NULL){
            pending.push(root->left);
        }
        if(root->right!=NULL){
            pending.push(root->right);
        }
    }
}


int main(){
    // preorder(takeInput());
    // cout<<endl;
    levelwise(takeInput());
    // for(int i=0;i<v2.size();i++){
    //     for(int j=0;j<v2[i].size();j++){
    //         cout<<v2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}