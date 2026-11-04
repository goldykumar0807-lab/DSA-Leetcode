
class MyCircularQueue {
    vector<int> arr;
    int front, rear, size;

public:
    MyCircularQueue(int k) {
        size = k;
        arr.resize(k);

        front = -1;
        rear = -1;
    }

    bool enQueue(int value) {

        // Check if queue is full
        if (isFull()) {
            return false;
        }

        // First element
        if (isEmpty()) {
            front = 0;
            rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }

        arr[rear] = value;

        return true;
    }

    bool deQueue() {

        // Check if queue is empty
        if (isEmpty()) {
            return false;
        }

        // Only one element present
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % size;
        }

        return true;
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        }

        return arr[front];
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        }

        return arr[rear];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }
};
