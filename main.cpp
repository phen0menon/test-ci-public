#include <bits/stdc++.h>

int main() {
    std::vector<int> collection;

    for (unsigned int i = 0, num; i < 10; i++) {
        std::cin >> num;
        collection.push_back(num);
    }

    std::sort(collection.begin(), collection.end());
    return 0;
}
