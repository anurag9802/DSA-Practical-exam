#include <bits/stdc++.h>
using namespace std;

class Queue
{

public:
    int *arr;
    int *x;
    int front, rear, size;

    Queue(int c)
    {
        size = c;
        front = rear = 0;
        arr=new int[c];
    }
    bool isFull()
    {

        if (rear == size - 1)
            return true;
        else
            return false;
    }

    bool isEmpty()
    {

        if (rear == 0)
            return true;
        else
            return false;
    }
    void insert(int item)
    {

        if (isFull())
        {
            cout << "** QUEUE is FULL ** \n";
            return;
        }

        arr[rear] = item;

        rear++;
    }
    void deletee()
    {
        if (isEmpty())
        {
            cout << "** QUEUE is EMPTY ** \n";
            return;
        }
        for (int i = 0; i < rear - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        rear--;
    }
    void display()
    {

        if (isEmpty())
        {
            cout << "** QUEUE is EMPTY ** \n";
            return;
        }
        cout << "QUEUE : ";
        for (int i = front; i < rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{

    Queue q1(5);

    q1.insert(10);

    q1.insert(30);
    q1.insert(20);
    q1.insert(20);
    q1.insert(20);
    q1.insert(20);
    q1.insert(20);
    q1.display();

    return 0;
}