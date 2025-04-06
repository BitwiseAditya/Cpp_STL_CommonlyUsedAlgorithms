#include <iostream>
#include <queue>

int main()
{
    // Create a max heap
    std::priority_queue<int> maxHeap;

    // Insert elements into the heap
    maxHeap.push(3);
    maxHeap.push(1);
    maxHeap.push(4);
    maxHeap.push(1);
    maxHeap.push(5);

    // Access the top element (maximum in this case)
    std::cout << "Top element of the max heap: " << maxHeap.top() << std::endl;

    // Pop the top element
    maxHeap.pop();

    // Access the new top element
    std::cout << "Top element after popping: " << maxHeap.top() << std::endl;

    return 0;
}
