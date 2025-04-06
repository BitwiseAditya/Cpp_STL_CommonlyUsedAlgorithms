#include <iostream>
#include <queue> // include the priority_queue header

int main()
{
    // Create a min heap (default)
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    // Insert elements into the heap
    minHeap.push(3);
    minHeap.push(1);
    minHeap.push(4);
    minHeap.push(1);
    minHeap.push(5);

    // Access the top element (minimum in this case)
    std::cout << "Top element of the min heap: " << minHeap.top() << std::endl;

    // Pop the top element
    minHeap.pop();

    // Access the new top element
    std::cout << "Top element after popping: " << minHeap.top() << std::endl;

    return 0;
}
