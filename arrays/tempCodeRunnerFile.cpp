#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    map<int, string> orderedMap;
    unordered_map<int, string> unorderedMap;

    orderedMap[3] = "Three";
    orderedMap[1] = "One";
    orderedMap[2] = "Two";

    unorderedMap[3] = "Three";
    unorderedMap[1] = "One";
    unorderedMap[2] = "Two";

    cout << "Ordered Map:\n";
    for (auto &p : orderedMap)
        cout << p.first << " -> " << p.second << endl;

    cout << "\nUnordered Map:\n";
    for (auto &p : unorderedMap)
        cout << p.first << " -> " << p.second << endl;

    return 0;
}
