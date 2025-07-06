#include <bits/stdc++.h>
using namespace std;

//checking the size 
int sz = 0;
// creating node
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// insert at head function
void insert_at_head(Node *&head, Node *&tail, int val)
{
    // creating node that will be inserted in the list
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        sz++;
        return;
    }
    newNode->next = head;
    head = newNode;
    sz++;
}

// creating insert function
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    // creating node to insert
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        sz++;
        return;
    }

    tail->next = newNode;
    tail = newNode;
    sz++;
}

// delete the vth position
void delete_pos(Node *&head, Node *&tail, int idx)
{
    //if the idx is bigger or equal of the size( we are working with 0 based index) then nothing will happen
    if(idx >= sz)
    {
        return;
    }
    if (idx == 0) // delete head;
    {
        Node *delete_node = head;
        head = head->next;
        delete delete_node;
        sz--;

        //again if i delete the head the tail will also be null
        if(head == NULL) tail = NULL;
        return;
    }
    Node *tmp_head = head;
    // first we need to reach the 2nd last position we want to delete
    for (int i = 1; i < idx; i++)
    {
        tmp_head = tmp_head->next;
    }
    Node *delete_node = tmp_head->next;

    tmp_head->next = tmp_head->next->next; // ignored the delete node
    // now there is a corner case that if we delete the last or the tail node of the list how we can connect the head next to null so we have to control this
    if (delete_node->next == NULL)
    {
        tail = tmp_head;
    }
    delete delete_node; // deleting delete_node;
    sz--;
}

// creating print list function to print the list of the linkedlist
void print_ls(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    int q;
    cin >> q;
    Node *head = NULL;
    Node *tail = NULL;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
            delete_pos(head, tail, v);
        }
        print_ls(head);
    }
    return 0;
}