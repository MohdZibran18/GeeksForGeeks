/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
  public:
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        // Your code here
        Node *ptr= root;
        vector<int>ans;
        Node * Bot;
        while(ptr!=nullptr){
             Bot=ptr;
            while(Bot!=nullptr){
                ans.push_back(Bot->data);
                Bot=Bot->bottom;
            }
            ptr=ptr->next;
        }
        sort(ans.begin(),ans.end());
        Node *ptr1= new Node(-1);
        Node *ptr2=ptr1;
        
        for (int i = 0; i < ans.size(); i++) {
            ptr2->bottom = new Node(ans[i]); 
            ptr2 = ptr2->bottom;
    }

    return ptr1->bottom;
    }
};