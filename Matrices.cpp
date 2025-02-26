#include <iostream>

// Функция для сравнения двух матриц
bool compareMatrices(int A[4][4], int B[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            // Если хотя бы один элемент не совпадает, немедленно возвращаем false
            if (A[i][j] != B[i][j]) {
                return false;
            }
        }
    }
    // Если все элементы совпадают, возвращаем true
    return true;
}

// Функция для преобразования матрицы в диагональную
void convertToDiagonal(int matrix[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            // Если элемент не лежит на диагонали, зануляем его
            if (i != j) {
                matrix[i][j] = 0;
            }
        }
    }
}

// Функция для вывода матрицы в консоль
void printMatrix(int matrix[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Ввод матриц A и B
    int A[4][4], B[4][4];
    
    std::cout << "Enter matrix A:" << std::endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cin >> A[i][j];
        }
    }
    
    std::cout << "Enter matrix B:" << std::endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cin >> B[i][j];
        }
    }

    // Сравнение матриц
    if (compareMatrices(A, B)) {
        std::cout << "Matrices are equal." << std::endl;
        
        // Преобразование матрицы A в диагональную
        convertToDiagonal(A);
        
        std::cout << "Diagonal matrix A:" << std::endl;
        printMatrix(A);
    } else {
        std::cout << "Matrices are not equal." << std::endl;
    }

    return 0;
}
