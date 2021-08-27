Node *deleteNode_at_ith_position(Node *Head,int pos)
		{
			if(Head==NULL)
			{
				return Head;
			}
			
			if(pos==0)
			{
				return Head->next;
			}
			
			Node* temp=Head;
			int currentposition=0;
			while(temp!=NULL && currentposition<pos-1)
			{
				currentposition++;
				temp=temp->next;
			}
			if(temp==NULL || temp->next==NULL)
			{
				return Head;
			}
			temp->next=temp->next->next->next;
			return Head;
		}