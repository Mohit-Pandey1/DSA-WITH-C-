#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isValid(const vector<int>& pages, int n, int m, int maxPages) {
    int studentCount = 1;
    int currentSum = 0;

    for (int i = 0; i < n; ++i) {
        if (currentSum + pages[i] > maxPages) {
            studentCount++;
            currentSum = pages[i]; 

            if (studentCount > m) return false;
        } else {
            currentSum += pages[i];
        }
    }
    return true;  
}

int bruteForceAllocatePages(const vector<int>& pages, int n, int m) {
    int result = INT_MAX;

    int maxPossiblePages = 0, minPossiblePages = pages[0];
    for (int i = 0; i < n; ++i) {
        minPossiblePages = max(minPossiblePages, pages[i]);
        maxPossiblePages += pages[i];
    }

    for (int maxPages = minPossiblePages; maxPages <= maxPossiblePages; ++maxPages) {
        if (isValid(pages, n, m, maxPages)) {
            result = min(result, maxPages);
        }
    }

    return result;
}

int main() {
    int n, m;
    cout << "Enter the number of books: ";
    cin >> n;
    cout << "Enter the number of students: ";
    cin >> m;

    vector<int> pages(n);
    cout << "Enter the pages of each book:\n";
    for (int i = 0; i < n; ++i) {
        cin >> pages[i];
    }

    int result = bruteForceAllocatePages(pages, n, m);
    if (result == INT_MAX) {
        cout << "Not possible to allocate books to all students.\n";
    } else {
        cout << "The minimum of the maximum pages allocated to a student is: " << result << endl;
    }

    return 0;
}
