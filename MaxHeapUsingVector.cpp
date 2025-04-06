#include <iostream>
#include <vector>

class MaxHeap
{
private:
    std::vector<int> heap;

public:
    void push(int value)
    {
        heap.push_back(value);
        heapifyUp();
    }

    void pop()
    {
        if (heap.empty())
        {
            std::cerr << "Heap is empty. Cannot pop." << std::endl;
            return;
        }

        std::swap(heap[0], heap.back());
        heap.pop_back();
        heapifyDown();
    }

    int top() const
    {
        if (heap.empty())
        {
            std::cerr << "Heap is empty." << std::endl;
            return -1; // You might want to handle this differently based on your requirements.
        }

        return heap[0];
    }

private:
    void heapifyUp()
    {
        int index = heap.size() - 1;

        while (index > 0)
        {
            int parentIndex = (index - 1) / 2;
            if (heap[index] > heap[parentIndex])
            {
                std::swap(heap[index], heap[parentIndex]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }

    void heapifyDown()
    {
        int index = 0;
        int size = heap.size();

        while (true)
        {
            int leftChild = 2 * index + 1;
            int rightChild = 2 * index + 2;
            int largest = index;

            if (leftChild < size && heap[leftChild] > heap[largest])
            {
                largest = leftChild;
            }

            if (rightChild < size && heap[rightChild] > heap[largest])
            {
                largest = rightChild;
            }

            if (largest != index)
            {
                std::swap(heap[index], heap[largest]);
                index = largest;
            }
            else
            {
                break;
            }
        }
    }
};

int main()
{
    MaxHeap maxHeap;

    maxHeap.push(3);
    maxHeap.push(1);
    maxHeap.push(4);
    maxHeap.push(1);
    maxHeap.push(5);

    std::cout << "Top element of the max heap: " << maxHeap.top() << std::endl;

    maxHeap.pop();

    std::cout << "Top element after popping: " << maxHeap.top() << std::endl;

    return 0;
}
