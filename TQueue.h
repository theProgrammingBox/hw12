#pragma once
#include <memory>
#include <iostream>

template <class T>
class TQueue
{
private:
    std::unique_ptr<T> head;
    int maxSize;
    int size;

public:
    TQueue(int maxSize);
    TQueue(TQueue &source);
    TQueue(TQueue &&source) noexcept;
    ~TQueue();

    // assignment operators
    TQueue &operator=(TQueue &source);
    TQueue &operator=(TQueue &&source) noexcept;

    // void enqueue(T data);
    // T dequeue();

    // bool isEmpty() const;
    // bool isFull() const;
    // int countSize() const;

    // T front() const;
};

template <class T>
TQueue<T>::TQueue(int maxSize) : maxSize(maxSize), size(0), head(std::make_unique<T>(maxSize))
{
}

template <class T>
TQueue<T>::TQueue(TQueue &source) : maxSize(source.maxSize), size(source.size), head(std::make_unique<T>(source.maxSize))
{
    for (int i = 0; i < source.size; i++)
    {
        head[i] = source.head[i];
    }
}

template <class T>
TQueue<T>::TQueue(TQueue &&source) noexcept : maxSize(source.maxSize), size(source.size), head(std::move(source.head))
{
    source.maxSize = 0;
    source.size = 0;
    source.head = nullptr;
}

template <class T>
TQueue<T>::~TQueue()
{
}

template <class T>
TQueue<T> &TQueue<T>::operator=(TQueue &source) : maxSize(source.maxSize), size(source.size), head(std::make_unique<T>(source.maxSize))
{
    for (int i = 0; i < source.size; i++)
    {
        head[i] = source.head[i];
    }
    return *this;
}

template <class T>
TQueue<T> &TQueue<T>::operator=(TQueue &&source) noexcept : maxSize(source.maxSize), size(source.size), head(std::move(source.head))
{
    source.maxSize = 0;
    source.size = 0;
    source.head = nullptr;
    return *this;
}

// template <class T>
// void TQueue<T>::enqueue(T data)
// {
//     if (isFull())
//     {
//         std::cout << "Queue is full" << std::endl;
//         return;
//     }
//     *tail = data;
//     size++;
//     tail++;
// }

// template <class T>
// T TQueue<T>::dequeue()
// {
//     if (isEmpty())
//     {
//         std::cout << "Queue is empty" << std::endl;
//         return 0;
//     }
//     T data = *head;
//     for (int i = 0; i < size - 1; i++)
//     {
//         head[i] = head[i + 1];
//     }
//     tail--;
//     size--;
//     return data;
// }

// template <class T>
// bool TQueue<T>::isEmpty() const
// {
//     return size == 0;
// }

// template <class T>
// bool TQueue<T>::isFull() const
// {
//     return size == maxSize;
// }

// template <class T>
// int TQueue<T>::countSize() const
// {
//     return size;
// }

// template <class T>
// T TQueue<T>::front() const
// {
//     return *head;
// }

// template <class T>
// TQueue<T> &TQueue<T>::operator=(const T &source)
// {
//     if (isFull())
//     {
//         std::cout << "Queue is full" << std::endl;
//         return *this;
//     }
//     *tail = source;
//     size++;
//     tail++;
//     return *this;
// }