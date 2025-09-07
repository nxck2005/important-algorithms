#include <bits/stdc++.h>
using namespace std;

class BinarySearch {
public:
    // Function to find an element in an array, and return it's index.
    // Time complexity: O(logn)
    static int binarySearch(vector<int> arr, int target) {
    int low = 0;
	int high = arr.size() - 1;
	int result = -1;
	while (low < high) {
	    int mid = low + (high - low) / 2;
	    if (arr[mid] == target) {
		result = mid;
		break;
	    } else if (arr[mid] > target) {
	        high = mid - 1;
	    } else {
	        low = mid + 1;
	    }
	}
	return result;
    }
};


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	vector<int> arr = {1,2,3,4,5};
	cout << BinarySearch::binarySearch(arr, 3) << "\n";
	return 0;
}
