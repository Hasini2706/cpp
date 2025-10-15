class Queue {
private:
    int front,rear, arr[100];

public:
    Queue() : front(-1) , rear(-1) {}

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == 99;
    }

    void enqueue(int x) {
        if (!isFull()) arr[rear++] = x;
    }

    int dequeue() {
        if (!isEmpty()) return arr[front--];
        return -1;
    }

    int peek() {
        return (isEmpty()) ? -1 : arr[front];
    }
};
