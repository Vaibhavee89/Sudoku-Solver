#include <iostream>
using namespace std;

// Function to check if placing a number is valid
bool isValid(int grid[9][9], int row, int col, int num) {
    // Check row
    for (int x = 0; x < 9; x++) {
        if (grid[row][x] == num) {
            return false;
        }
    }

    // Check column
    for (int x = 0; x < 9; x++) {
        if (grid[x][col] == num) {
            return false;
        }
    }

    // Check 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}

// Function to solve the Sudoku puzzle
bool solveSudoku(int grid[9][9], int row, int col) {
    // If we reach the last cell
    if (row == 8 && col == 9) {
        return true;
    }

    // Move to the next row if the column exceeds 8
    if (col == 9) {
        row++;
        col = 0;
    }

    // Skip cells that are already filled
    if (grid[row][col] != 0) {
        return solveSudoku(grid, row, col + 1);
    }

    // Try placing numbers 1-9 in the cell
    for (int num = 1; num <= 9; num++) {
        if (isValid(grid, row, col, num)) {
            grid[row][col] = num;

            // Recursively solve the rest of the puzzle
            if (solveSudoku(grid, row, col + 1)) {
                return true;
            }

            // Undo the move (backtrack)
            grid[row][col] = 0;
        }
    }

    return false; // Trigger backtracking
}

// Function to print the Sudoku grid
// void printGrid(int grid[9][9]) {
//     for (int row = 0; row < 9; row++) {
//         for (int col = 0; col < 9; col++) {
//             cout << grid[row][col] << " ";
//         }
//         cout << endl;
//     }
// }

void printGrid(int grid[9][9]);
bool solveSudoku(int grid[9][9], int row, int col);

int main() {
    int grid[9][9];

    cout << "Enter the Sudoku puzzle (use 0 for empty cells):\n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> grid[i][j];
        }
    }

    if (solveSudoku(grid, 0, 0)) {
        cout << "Solved Sudoku:\n";
        printGrid(grid);
    } else {
        cout << "No solution exists.\n";
    }
    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}

void printGrid(int grid[9][9]) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }
}