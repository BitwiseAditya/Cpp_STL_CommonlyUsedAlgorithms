#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    // Example 2D vector
    std::vector<std::vector<int>> myVector = {
        {1, 2, 5},
        {3, 4, 2},
        {5, 6, 8},
        {7, 8, 1}};

    // Sort based on the values in the third column (index 2)
    std::sort(myVector.begin(), myVector.end(),
              [](const std::vector<int> &a, const std::vector<int> &b)
              {
                  return a[2] < b[2];
              });

    // Display the sorted vector
    for (const auto &row : myVector)
    {
        for (int value : row)
        {
            std::cout << value << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}
// Used in solving Activity Selection Problem using Greedy Algo when the end time array is not sorted, and many other greedy problems.
