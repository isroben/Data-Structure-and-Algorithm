
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

double medianOf2SortedArray(std::vector<int>& arr1, std::vector<int>& arr2) {
    int m = arr1.size();
    int n = arr2.size();

    // Always perform binary search on the smaller array
    if (m > n) {
        return medianOf2SortedArray(arr2, arr1);
    }
    int low = 0, high = m;

    while (low <= high) {

        int partitionX = (low + high) / 2;
        int partitionY = (m + n + 1) / 2 - partitionX;

        int maxLeftX = (partitionX == 0) ? INT_MIN : arr1[partitionX - 1];
        int minRightX = (partitionX == m) ? INT_MAX : arr1[partitionX];

        int maxLeftY = (partitionY == 0) ? INT_MIN : arr2[partitionY - 1];
        int minRightY = (partitionY == n) ? INT_MAX : arr2[partitionY];

        if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
            if ((m + n) % 2 == 0) {
                return (std::max(maxLeftX, maxLeftY) + (double)std::min(minRightX, minRightY)) / 2.0;
            }
            else {
                return std::max(maxLeftX, maxLeftY);
            }
        }

        else if (maxLeftX > minRightY) {
            high = partitionX - 1;
        }

        else {
            low = partitionX + 1;
        }
    }

    return -1.0;
}

int main() {

    std::vector<int> arr1 = {1, 2};
    std::vector<int> arr2 = {3, 4};

    double median = medianOf2SortedArray(arr1, arr2);

    std::cout << "Median of given two sorted arrays: "
              << median << std::endl;

    return 0;
}
