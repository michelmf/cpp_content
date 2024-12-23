#include <iostream>
#include <vector>

#define OK 0

int main(int argc, char** argv) {

    std::vector<std::vector<int>> maze_grid;

    // Maze grid from the exercise; It will be used to apply the A* algorithm later.
    maze_grid = {
        {0, 1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0}
    };

    auto rows_size = maze_grid.size();
    auto columns_size = maze_grid[0].size();

    // Print the maze grid
    auto print_boundary = [](int size){
        for (auto boundary = 0; boundary < size; boundary++) {
            std::cout << "---";
        }
        std::cout << std::endl;
    };

    print_boundary(columns_size);

    for (auto row = 0; row < rows_size; row++) {
        for (auto cell = 0; cell < columns_size; cell++) {
            std::cout << "| " << maze_grid[row][cell] << "";
        }
        std::cout << "|" << std::endl;
    }

    print_boundary(columns_size);
    std::cout << std::endl;

    return OK;

}
