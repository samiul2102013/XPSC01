#include <iostream>
#include <string>
using namespace std;

int countSubstringOccurrences(const string& mainString, const string& substring) {
    int count = 0;
    size_t pos = mainString.find(substring); // Find the first occurrence of the substring

    while (pos != string::npos) {
        count++; // Increment the count for each occurrence found
        pos = mainString.find(substring, pos + 1); // Find the next occurrence starting from the next position
    }

    return count;
}

int main() {
    string mainString = "abababcabab"; // Example input string
    string substring = "ab"; // Example substring to find

    int occurrences = countSubstringOccurrences(mainString, substring);
    cout << "Number of occurrences of '" << substring << "' in the main string: " << occurrences << endl;

    return 0;
}
