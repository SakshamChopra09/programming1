
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insert(int data, int pos)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (pos == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }
    Node *temp1 = head;

    for (int i = 0; i < pos - 2; i++)
    {
        temp1 = temp1->next;
    }

    temp->next = temp1->next;
    temp1->next = temp;
}

void print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    insert(3, 1);
    print();
    insert(4, 1);
    print();
    insert(5, 3);
    print();
    insert(31, 2);
    print();
    insert(42, 2);
    print();
    return 0;
}
