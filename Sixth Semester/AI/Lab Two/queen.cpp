#include <iostream>
#include <vector>

using namespace std;

struct Cell {
    int x, y;
    Cell(int _x, int _y) : x(_x), y(_y) {}
};

using List = vector<Cell>;

bool noAttack(const Cell& cell, const List& others) {
    for (const auto& other : others) {
        if (cell.y == other.y || cell.y - other.y == cell.x - other.x || cell.y - other.y == other.x - cell.x) {
            return false;
        }
    }
    return true;
}

bool solution(const List& queens) {
    if (queens.size() == 8) {
        return true;
    }

    for (int y = 1; y <= 8; ++y) {
        Cell newCell(queens.size() + 1, y);
        if (noAttack(newCell, queens)) {
            List newQueens = queens;
            newQueens.push_back(newCell);

            if (solution(newQueens)) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    List queens;
    if (solution(queens)) {
        cout << "Solution found:" << endl;
        for (const auto& cell : queens) {
            cout << "c(" << cell.x << "," << cell.y << ") ";
        }
        cout << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
