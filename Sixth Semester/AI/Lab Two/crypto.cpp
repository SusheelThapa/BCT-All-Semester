#include <iostream>
#include <vector>
#include <algorithm>

bool isValid(const std::vector<int>& digits, const std::vector<char>& letters) {
    int FORTY = digits[0] * 10000 + digits[1] * 1000 + digits[2] * 100 + digits[3] * 10 + digits[4];
    int TEN = digits[3] * 100 + digits[5] * 10 + digits[6];
    int SIXTY = digits[7] * 10000 + digits[8] * 1000 + digits[9] * 100 + digits[3] * 10 + digits[4];

    return FORTY + TEN + TEN == SIXTY && digits[0] != 0 && digits[3] != 0 && digits[7] != 0;
}

void solvePuzzle(std::vector<int>& digits, std::vector<char>& letters, int index) {
    if (index == 10) {
        if (isValid(digits, letters)) {
            std::cout << "Solution found:" << std::endl;
            for (int i = 0; i < 10; ++i) {
                std::cout << letters[i] << "(" << digits[i] << ") ";
            }
            std::cout << std::endl;
        }
        return;
    }

    for (int i = 0; i <= 9; ++i) {
        if (std::find(digits.begin(), digits.end(), i) == digits.end()) {
            digits[index] = i;
            letters[index] = 'A' + index;

            solvePuzzle(digits, letters, index + 1);

            digits[index] = -1; // Backtrack
        }
    }
}

int main() {
    std::vector<int> digits(10, -1);
    std::vector<char> letters(10);

    solvePuzzle(digits, letters, 0);

    return 0;
}
