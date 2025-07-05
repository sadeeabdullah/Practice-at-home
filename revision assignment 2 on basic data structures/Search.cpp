#include <bits/stdc++.h>
using namespace std;

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

// creating insert function
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    // creating node to insert
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

//creating search function in linked list
int search_value(Node *head, int val)
{
    int idx = 0;
    int search_idx = -1;
    while (head != NULL)
    {
        if(head->val == val)
        {
            search_idx = idx;
            break;
        }
        head = head->next;
        idx++;
    }
    return (search_idx == -1) ? -1 : search_idx;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (cin >> val && val != -1)
        {
            insert_at_tail(head, tail, val);
        }

        //taking input of the target value 
        int x;
        cin >> x;

        cout << search_value(head,x) << endl;
    }
    return 0;
}