#include <iostream>

int main() {
    int count = 1;  // Start from the first natural number

    std::cout << "Numbers divisible by 3 among the first 18 natural numbers:" << std::endl;

    while (count <= 18) {
        if (count % 3 == 0) {
            std::cout << count << " ";
        }
        count++;
    }

    std::cout << std::endl;

    return 0;
}
