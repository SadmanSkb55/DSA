#include <iostream>
#include "dynArr2DRagged.cpp"

using namespace std;

int main() {
    int row;
    char choice;

    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter data type for array (1 for integer, 2 for double, 3 for char): ";
    cin >> choice;

    switch (choice) {
        case '1': {
            dynArr2DRagged<int> arr(row);
            for (int i = 0; i < row; ++i) {
                for (int j = 0; j < arr.getColumnSize(i); ++j) {
                    int value;
                    std::cout << "Enter value for element [" << i << "][" << j << "]: ";
                    std::cin >> value;
                    arr.setValue(i, j, value);
                }
            }
            std::cout << "Ragged 2D Integer Array:" << std::endl;
            for (int i = 0; i < row; ++i) {
                for (int j = 0; j < arr.getColumnSize(i); ++j) {
                    std::cout << arr.getValue(i, j) << " ";
                }
                std::cout << std::endl;
            }
            break;
        }
        case '2': {
            dynArr2DRagged<double> arr(row);
            for (int i = 0; i < row; ++i) {
                for (int j = 0; j < arr.getColumnSize(i); ++j) {
                    double value;
                    std::cout << "Enter value for element [" << i << "][" << j << "]: ";
                    std::cin >> value;
                    arr.setValue(i, j, value);
                }
            }
            std::cout << "Ragged 2D Double Array:" << std::endl;
            for (int i = 0; i < row; ++i) {
                for (int j = 0; j < arr.getColumnSize(i); ++j) {
                    std::cout << arr.getValue(i, j) << " ";
                }
                std::cout << std::endl;
            }
            break;
        }
        case 'c': {
            dynArr2DRagged<char> arr(row);
            for (int i = 0; i < row; ++i) {
                for (int j = 0; j < arr.getColumnSize(i); ++j) {
                    char value;
                    std::cout << "Enter value for element [" << i << "][" << j << "]: ";
                    std::cin >> value;
                    arr.setValue(i, j, value);
                }
            }
            std::cout << "Ragged 2D Char Array:" << std::endl;
            for (int i = 0; i < row; ++i) {
                for (int j = 0; j < arr.getColumnSize(i); ++j) {
                    std::cout << arr.getValue(i, j) << " ";
                }
                std::cout << std::endl;
            }
            break;
        }
        default:
            std::cout << "Invalid choice!";
            break;
    }

    return 0;
}
