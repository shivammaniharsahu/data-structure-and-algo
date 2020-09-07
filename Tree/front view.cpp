
// Should print right view of tree
void leftView(Node *root)
{
    if(!root)
    return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int c=q.size();
        Node* temp=q.front();
        cout<<temp->data<<" ";
        while(c--)
        {
            Node* node=q.front();
            q.pop();
            if(node->left)
            q.push(node->left);
            if(node->right)
            q.push(node->right);
        }
    }
    
}


