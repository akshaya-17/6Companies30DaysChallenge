class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here  
        int i=M;
        Node* tmp=head;
        while(tmp)
        {
            
            for(int i=1;i<M && tmp;i++)tmp=tmp->next;
            if(tmp==NULL)return;
            Node* tmp1;
            Node* tmp2=tmp->next;
            int j=N;
            while(tmp2!=NULL && j--)
            {
                tmp1=tmp2;
                free(tmp1);
                tmp2=tmp2->next;
            }
           tmp->next=tmp2;
           tmp=tmp2;
            
            
        }
    }
};
