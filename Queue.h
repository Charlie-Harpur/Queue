#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
    public:
        Queue();
        ~Queue();
        Queue(const Queue &rQ);
        Queue & operator=(const Queue &rQ);

        int peek() const;
        void insert(const int &rK);

        void remove();


    private:
        struct Node
        {
            int data = 0;
            Node *pNext = nullptr;
        };

        Node *pHead;
        Node *pTail;

        void copyQueue(const Queue &rQ);
        void freeQueue();
};

#endif
