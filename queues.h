#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;
#define MAX 100
struct Queue {
    int queue[MAX];
    int front = -1;
    int rear = -1;
    int size = 0;
    void enqueue(int val) {
        if (rear == MAX - 1) {
            cout << "The queue is full" << endl;
            return;
        }
        else if (front == -1) {
            front = 0;
        }

        size++;
        queue[++rear] = val;
        return;
    }
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "The queue is empty" << endl;
            return;
        }
        cout << "The removed element is : " << queue[front] << endl;
        if (front > rear) {
            front = rear = -1;
        }
        size--;
        return;
    }
    void get_front() {
        if (front == -1 || front > rear)
        {
            cout << "The queue is empty" << endl;
            return;
        }
        cout << "The front element is: " << queue[front] << endl;
    }
    void get_rear() {
        if (rear == -1 || front > rear)
        {
            cout << "The queue is empty" << endl;
            return;
        }
        cout << "The rear element is: " << queue[rear] << endl;
        return;
    }
    void get_size() {
        cout << "The size of queue: " << size << endl;
        return;
    }
};

#endif