#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    node *next;
    node *prev;
}node;
//node *insert_beg(node *head);
node *insert_beg(node *head)
{
    node *temp;
    temp = NULL;
    node *newnode;
    newnode = NULL;
    newnode = (node *)malloc(sizeof(node));
    cout << "Enter the data" << endl;
    cin >> newnode -> data;
    newnode -> next = NULL;
    newnode -> prev = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode -> next = head;
        head -> prev = newnode;
        head = newnode;
    }
    return head;
}
node *insert_end(node *head)
{
    node *temp;
    temp = NULL;
    node *newnode;
    newnode = NULL;
    newnode = (node *)malloc(sizeof(node));
    cout << "Enter the data" << endl;
     cin >> newnode -> data;
    newnode -> next = NULL;
    newnode -> prev = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newnode;
        newnode -> prev = temp;
        temp = newnode;
    }
    return head;
}
void display (node *head)
{
    node *temp;
    temp = head;
    cout << "****** Displaying the List *******" << endl;
    while (temp != NULL)
    {
        cout << "\t" << temp -> data;
        temp = temp -> next;
    }
    cout << endl;
}
int main()
{
    node *head;
    head = NULL;
    int choice = 1;
    while (choice)
    {
        cout << "Enter 1 for insertion at beginning " << endl;
        cout << "Enter 2 for insertion at end " << endl;
        //cout << "Enter 3 for insertion at any position " << endl;
        cout << "Enter 3 for display " << endl;
        cout << "Enter 0 to end the program " << endl;
        cout << "\n\n Enter your choice :: " << endl;
        cin >> choice;
        if (choice == 1)
        {
            head = insert_beg (head);
        }
        else if (choice == 2)
        {
            head = insert_end (head);
        }
        else if (choice == 3)
        {
            display(head);
        }
        else if (choice == 0)
        {
            cout << "The program is ended "<< endl;
        }
        else
        {
            cout << "Wrong Choice " << endl;
        }
    }
    return 0;
}