/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head == NULL) return head;
        
        Node *tmp = head;
        while(tmp)
        {
            Node * nextnode = tmp->next;
            if(tmp->child)
            {
                Node* childn = flatten(tmp->child);
                tmp->child = NULL;
                tmp->next = childn;
                childn->prev = tmp;
                Node* it = childn;
                while(it->next)
                {
                    it = it->next;
                }
                it->next = nextnode;
                if(nextnode) nextnode->prev = it;
            }
            tmp = tmp->next;
        }
        return head;
    }
};
