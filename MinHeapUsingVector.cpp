#include <iostream>
#include <vector>

class MinHeap
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
            if (heap[index] < heap[parentIndex])
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
            int smallest = index;

            if (leftChild < size && heap[leftChild] < heap[smallest])
            {
                smallest = leftChild;
            }

            if (rightChild < size && heap[rightChild] < heap[smallest])
            {
                smallest = rightChild;
            }

            if (smallest != index)
            {
                std::swap(heap[index], heap[smallest]);
                index = smallest;
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
    MinHeap minHeap;

    minHeap.push(3);
    minHeap.push(1);
    minHeap.push(4);
    minHeap.push(1);
    minHeap.push(5);

    std::cout << "Top element of the min heap: " << minHeap.top() << std::endl;

    minHeap.pop();

    std::cout << "Top element after popping: " << minHeap.top() << std::endl;

    return 0;
}
