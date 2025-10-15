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
        if(isEmpty()) {
            front = 0;
        }
        if (!isFull()) arr[++rear] = x;
    }

    int dequeue() {
        int value;
        if (isEmpty()) return -1;
       value=arr[front++];
        if (front > rear) {
            front = rear = -1; 
        }
        return value;
        
    }

    int peek() {
        return (isEmpty()) ? -1 : arr[front];
    }
};