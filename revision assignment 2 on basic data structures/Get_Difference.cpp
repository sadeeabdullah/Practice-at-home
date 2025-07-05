#include <bits/stdc++.h>
using namespace std;

// creating node
class Node
{
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL; 
    }
};

//creating insert function
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    //creating node to insert
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

//creating function to get the maximum value
int get_maximum (Node* head)
{
    int max =  INT_MIN;
    while (head != NULL)
    {
        if(head->val > max) max = head->val;
        head = head->next;
    }
    return max;
}

//creating function to get the minimum value
int get_minimum (Node* head)
{
    int min = INT_MAX;
    while (head != NULL)
    {
        if(head->val < min) min = head->val;
        head = head->next;
    }
    return min;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }
    int diff = get_maximum(head) - get_minimum (head);
    cout << diff << endl;
    return 0;
}