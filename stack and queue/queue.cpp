#include <iostream>
using namespace std;

void enqueue(int queue[], int &start, int &end, int x)
{

    if (end == 9)
    {
        cout << "overflow" << endl;
        return;
    }
    else if (end == -1)
    {
        start = 0;
        end = 0;
    }
    else
    {
        end++;
    }

    queue[end] = x;
}

void dequeue(int queue[], int &start, int &end)
{

    start++;

    // check if start > end if greater then reset start and end to -1
    if (start > end)
    {
        start = end = -1;
    }
}

void display(int queue[], int &start, int &end)
{

    if (start == -1 || start > end)
    {
        cout << "queue is empty" << endl;
        return;
    }

    for (int i = start; i <= end; i++)
    {
        cout << queue[i] << " ";
    }
}

int main()
{
    int n = 10;
    int queue[n];
    int start = -1, end = -1;

    enqueue(queue, start, end, 1);
    enqueue(queue, start, end, 2);
    enqueue(queue, start, end, 3);
    enqueue(queue, start, end, 1);
    enqueue(queue, start, end, 1);


    dequeue(queue, start, end);
    dequeue(queue, start, end);

    enqueue(queue, start, end, 2);
    enqueue(queue, start, end, 3);
  

    cout << endl;

    display(queue, start, end);
}