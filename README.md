
# Sudoku Solver

This is a simple Sudoku solver application written in C++. It takes a 9x9 Sudoku puzzle as input and solves it using a backtracking algorithm.


## Features

- Solves 9x9 Sudoku puzzles.
- Implements an efficient backtracking algorithm.
- Simple command-line interface for easy usage.


## How to Use

### Prerequisites

Ensure you have a C++ compiler installed, such as:
- `g++` (GNU Compiler)
- `clang++` (LLVM Compiler)


### Building the Application

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/yourusername/your-repository.git
   cd your-repository
   ```

2. **Compile the Application:**
   ```bash
   g++ -o sudoku_solver solver.cpp
   ```



### Running the Application

1. **Run the Executable:**
   ```bash
   ./sudoku_solver
   ```

2. **Enter the Sudoku Puzzle:**

   When prompted, input the Sudoku puzzle as a 9x9 grid, using `0` for empty cells. For example:
   ```plaintext
   5 3 0 0 7 0 0 0 0
   6 0 0 1 9 5 0 0 0
   0 9 8 0 0 0 0 6 0
   8 0 0 0 6 0 0 0 3
   4 0 0 8 0 3 0 0 1
   7 0 0 0 2 0 0 0 6
   0 6 0 0 0 0 2 8 0
   0 0 0 4 1 9 0 0 5
   0 0 0 0 8 0 0 7 9
   ```

3. **View the Output:**

   The application will solve the puzzle and display the result:
   ```plaintext
   Solved Sudoku:
   5 3 4 6 7 8 9 1 2
   6 7 2 1 9 5 3 4 8
   1 9 8 3 4 2 5 6 7
   8 5 9 7 6 1 4 2 3
   4 2 6 8 5 3 7 9 1
   7 1 3 9 2 4 8 5 6
   9 6 1 5 3 7 2 8 4
   2 8 7 4 1 9 6 3 5
   3 4 5 2 8 6 1 7 9
   ```

   If no solution exists, the application will notify you.



## License

This project is licensed under the [MIT License](LICENSE). You are free to use, modify, and distribute this project.



## Contributing

Contributions are welcome! Follow these steps to contribute:

1. **Fork the Repository:**
   ```bash
   git clone https://github.com/yourusername/your-repository.git
   ```

2. **Create a Feature Branch:**
   ```bash
   git checkout -b feature/your-feature
   ```

3. **Commit Your Changes:**
   ```bash
   git commit -m "Add your feature"
   ```

4. **Push to the Branch:**
   ```bash
   git push origin feature/your-feature
   ```

5. **Open a Pull Request:**  
   Submit your changes for review.

---

## Example

Here’s how the application looks during execution:  
**Input:**
```plaintext
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9
```

**Output:**
```plaintext
Solved Sudoku:
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
```




    


