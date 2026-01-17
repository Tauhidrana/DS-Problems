#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;

    tail = newnode;
}
void compare(Node *head1, Node *head2)
{
    Node *t1 = head1;
    Node *t2 = head2;

    while (t1 != NULL && t2 != NULL)
    {
        if (t1->val != t2->val)
        {
            cout << "NO";
            return;
        }
        t1 = t1->next;
        t2 = t2->next;
    }

    if (t1 == NULL && t2 == NULL)
        cout << "YES";
    else
        cout << "No";
}

int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
        insert_at_tail(head2, tail2, val);
    }
    compare(head1,head2);

    return 0;
}