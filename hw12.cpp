#include "TQueue.h"

int main()
{
    std::cout << "Hello, World!!!" << std::endl;
    TQueue<int> intQueue(10);
    TQueue<double>doubleQueue(10);
    TQueue<string>stringQueue(10);

    for (int i = 0; i < 6; i++)
    {
        intQueue.enqueue(i);
        intQueue.printQueue();
    }
    
    for (int i = 0; i < 4; i++)
    {
        intQueue.dequeue();
        intQueue.printQueue();
    }

    for (int i = 0; i < 5; i++)
    {
        intQueue.enqueue(i);
        intQueue.printQueue();
    }

    for (int i = 0; i < 3; i++)
    {
        intQueue.dequeue();
        intQueue.printQueue();
    }

    for (int i = 0; i < 6; i++)
    {
        doubleQueue.enqueue(i / 2.0);
        doubleQueue.printQueue();
    }
    
    for (int i = 0; i < 4; i++)
    {
        doubleQueue.dequeue();
        doubleQueue.printQueue();
    }

    for (int i = 0; i < 5; i++)
    {
        doubleQueue.enqueue(i / 2.0);
        doubleQueue.printQueue();
    }

    for (int i = 0; i < 3; i++)
    {
        doubleQueue.dequeue();
        doubleQueue.printQueue();
    }

    for (int i = 0; i < 6; i++)
    {
        stringQueue.enqueue("item");
        stringQueue.printQueue();
    }

    for (int i = 0; i < 4; i++)
    {
        stringQueue.dequeue();
        stringQueue.printQueue();
    }

    for (int i = 0; i < 5; i++)
    {
        stringQueue.enqueue("item");
        stringQueue.printQueue();
    }
    
    for (int i = 0; i < 3; i++)
    {
        stringQueue.dequeue();
        stringQueue.printQueue();
    }
    
    while (!intQueue.isEmpty())
    {
        intQueue.dequeue();
    }
    if (intQueue.isEmpty())
    {
        std::cout << "Queue is empty" << std::endl;
        intQueue.dequeue();
    }
    else
    {
        std::cout << "Queue is not empty" << std::endl;
    }

    while (!intQueue.isFull())
    {
        intQueue.enqueue(1);
    }
    if (intQueue.isFull())
    {
        std::cout << "Queue is full" << std::endl;
        intQueue.enqueue(1);
    }
    else
    {
        std::cout << "Queue is not full" << std::endl;
    }
    
    cout << "Front of queue: " << intQueue.front() << endl;

    return 0;
}