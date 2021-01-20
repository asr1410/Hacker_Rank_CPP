#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *apend(Node *head, int value)
{
    Node *ptr = new Node();
    ptr->data = value;
    if (head == NULL)
    {
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        Node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = ptr;
        ptr->next = NULL;
    }

    return head;
}
void findBinary(int n)
{
    int rem, i = 0, natural = 0;
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        natural = natural + (rem * (pow(2, i)));
        i++;
    }
    cout << natural;
}

void printList(Node *head)
{
    int num = 0;
    cout << "[";
    while (head != NULL)
    {
        cout << head->data << " ";
        num = num * 10 + head->data;
        head = head->next;
    }
    cout << "]" << endl;
    findBinary(num);
}

Node *head;
int main()
{
    int num;
    cin >> num;
    while (num > 0)
    {
        int value;
        cin >> value;
        head = apend(head, value);
        num--;
    }
    printList(head);
    return 0;
}