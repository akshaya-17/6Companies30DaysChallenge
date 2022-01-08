class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int>arr;
    void preorder(Node *root)
    {
        if(root==NULL)
        {
            arr.push_back(-1);
            return;
        }
        arr.push_back(root->data);
        preorder(root->left);
        preorder(root->right);
        
        
    }
    Node* deserialize(vector<int>&A,int  *i)
    {
        if(*i==A.size()||A[*i]==-1)
        {
            *i+=1;
            return NULL;
        }
        Node* root =new Node(A[*i]);
        *i+=1;
        root->left=deserialize(A,i);
        root->right=deserialize(A,i);
        return root;
        
        
    }
    vector<int> serialize(Node *root) 
    {
        //Your code here
        if(root==NULL)return arr;
        preorder(root);
        return arr;
        
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
     
       int i=0;
       return deserialize(A,&i);
    }

};
