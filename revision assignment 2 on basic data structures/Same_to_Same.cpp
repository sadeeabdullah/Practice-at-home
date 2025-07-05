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

// checking the size
int size_ls(Node *head)
{
    int sz = 0;
    while (head != NULL)
    {
        sz++;
        head = head->next;
    }
    return sz;
}
// checking if both of the linked list is same or not
string isSame(Node *head_1, Node *head_2)
{
    if (size_ls(head_1) != size_ls(head_2))
        return "NO";
    
    
}

int main()
{
    Node *head_1 = NULL;
    Node *tail_1 = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head_1, tail_1, val);
    }

    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head_2, tail_2, val);
    }

    return 0;
}