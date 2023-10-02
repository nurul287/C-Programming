#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};
class Stack
{
    Node *head;
    Node *top;
    int count = 0;

public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    // Push
    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
    }

    // pop
    int pop()
    {
        Node *delNode;
        delNode = top;
        int newvalue = -1;
        if (head == NULL) // There is no element;
        {
            cout << "Stack Underflow" << endl;
            return newvalue;
        }
        if (top == head) // There is only 1 element;
        {
            head = top = NULL;
        }
        else // There is more than 1 element;
        {
            top = delNode->prev;
            top->next = NULL;
        }
        newvalue = delNode->value;
        delete delNode;
        count--;
        return newvalue;
    }

    // EMPTY
    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }

    // SIZE
    int size()
    {
        return count;
    }

    // TOP
    int Top()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow | There is no element" << endl;
        }
        else
            return top->value;
    }
};
