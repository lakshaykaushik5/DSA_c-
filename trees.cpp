                                        //  implementing tree

# include<bits/stdc++.h>
using namespace std;
template<typename T>

class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> childern;
    TreeNode(T data){
        this->data = data;
    }
};

                                    //  printing tree recursively

void printTree(TreeNode<int>* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    for(int i=0;i<root->childern.size();i++){
        cout<<root->childern[i]->data<<" ";
    }
    cout<<endl;
    for(int i=0;i<root->childern.size();i++){
        printTree(root->childern[i]);
    }
}

TreeNode<int>* takeInput(){
    int root_val;
    cout<<"enter root value = ";
    cin>>root_val;
    int n;
    cout<<"enter the of the childrent of "<<root_val<<" = ";
    cin>>n;
    TreeNode<int>* root = new TreeNode<int>(root_val);
    for(int i=0;i<n;i++){
        TreeNode<int>* child = takeInput();
        root->childern.push_back(child);
    }
    return root; 
}

                                    //  level order traversal

vector<vector<int>> levelwise(TreeNode<int>* root){
    vector<vector<int>> ans;
    if(root==NULL){
        return ans;
    }
    queue<TreeNode<int>*> pending;
    pending.push(root);
    while(!q.empty()){
        int size = pending.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            TreeNode<int>
        }
    }
}

int main(){
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* child1 = new TreeNode<int>(2);
    // TreeNode<int>* child2 = new TreeNode<int>(3);
    // root->childern.push_back(child1);
    // root->childern.push_back(child2);
    printTree(takeInput());

    return 0;
}