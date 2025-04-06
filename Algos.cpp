#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>  // For std::accumulate  

int main() {
    // Create a vector container
    std::vector<int> numbers = {5, 2, 8, 3, 1, 7, 4, 6, 9, 10};

    // 1. Sorting
    std::sort(numbers.begin(), numbers.end());
    std::cout << "Sorted Numbers: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    // 2. Finding an element
    int target = 7;
    auto it = std::find(numbers.begin(), numbers.end(), target);
    if (it != numbers.end()) {
        std::cout << "Found " << target << " at position " << std::distance(numbers.begin(), it) << "\n";
    } else {
        std::cout << target << " not found\n";
    }

    // 3. Accumulation
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum of numbers: " << sum << "\n";

    // 4. Counting occurrences
    int count = std::count(numbers.begin(), numbers.end(), 5);
    std::cout << "Number of occurrences of 5: " << count << "\n";

    // 5. Max element
    auto maxElement = std::max_element(numbers.begin(), numbers.end());
    std::cout << "Maximum element: " << *maxElement << "\n";

    // 6. Min element
    auto minElement = std::min_element(numbers.begin(), numbers.end());
    std::cout << "Minimum element: " << *minElement << "\n";

    // 7. Remove duplicates
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    std::cout << "Numbers after removing duplicates: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    // 8. Transform elements
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int x) { return x * 2; });
    std::cout << "Numbers after doubling: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    // 9. Check if all elements satisfy a condition
    if (std::all_of(numbers.begin(), numbers.end(), [](int x) { return x % 2 == 0; })) {
        std::cout << "All numbers are even\n";
    } else {
        std::cout << "Not all numbers are even\n";
    }

    // 10. Reverse the order of elements
    std::reverse(numbers.begin(), numbers.end());
    std::cout << "Numbers in reverse order: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

      // 11. Binary Search
    std::sort(numbers.begin(), numbers.end());  // Ensure the vector is sorted for binary search
    int targetBinary = 6;
    bool binarySearchResult = std::binary_search(numbers.begin(), numbers.end(), targetBinary);
    if (binarySearchResult) {
        std::cout << "Binary search found " << targetBinary << "\n";
    } else {
        std::cout << "Binary search did not find " << targetBinary << "\n";
    }

    return 0;
}
