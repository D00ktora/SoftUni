

#include <iostream>
#include <sstream>
#define NEW_LINE '\n'

template <typename Y>
void create_matrix(size_t rows, size_t columns, Y**& matrix) {
    matrix = new Y * [rows];
    for (size_t row = NULL; row != rows; row++) {
        matrix[row] = new Y[columns];
    }
}

template <typename Y>
void init_matrix(size_t rows, size_t columns, Y**& matrix) {
    for (size_t row = NULL; row != rows; row++) {
        for (size_t column = NULL; column != columns; column++) {
            std::cin >> matrix[row][column];
        }
    }
}

template <typename Y>
void init_matrix(size_t rows, size_t columns, size_t initializer, Y**& matrix) {
    for (size_t row = NULL; row != rows; row++) {
        for (size_t column = NULL; column != columns; column++) {
            matrix[row][column] = initializer;
        }
    }
}

template <typename Y>
void print_matrix(size_t rows, size_t columns, Y**& matrix) {
    for (size_t row = NULL; row != rows; row++) {
        for (size_t column = NULL; column != columns; column++) {
            std::cout << matrix[row][column];
        }
        std::cout << NEW_LINE;
    }
}

template <typename Y>
void delete_matrix(size_t rows, size_t columns, Y**& matrix) {
    for (size_t row = NULL; row != rows; row++) {
        delete[] matrix[row];
    }
    delete[] matrix;
    matrix = nullptr;
}

template <typename Y>
size_t show_field(size_t rows, size_t columns, size_t check_row, size_t check_column, Y sign, Y**& matrix_fields) {
    size_t count{ NULL };

    if ((check_row < rows) && (check_column < columns)) {
        if (matrix_fields[check_row][check_column] == sign) {
            count++;
        }
    }
    return count;
}


int main(int argc, const char* argv[]) {
    char** mine_field;
    size_t rows{ 0 }, columns{ 0 };

    std::cin >> rows >> columns;
    create_matrix<char>(rows, columns, mine_field);
    init_matrix<char>(rows, columns, mine_field);

    size_t** mine_field_shown;
    create_matrix<size_t>(rows, columns, mine_field_shown);
    init_matrix<size_t>(rows, columns, NULL, mine_field_shown);


    char sign{ '!' };
    for (size_t row = NULL; row != rows; row++) {
        for (size_t column = NULL; column != columns; column++) {
            mine_field_shown[row][column] += show_field(rows, columns, row, column, sign, mine_field);
            mine_field_shown[row][column] += show_field(rows, columns, row, column - 1, sign, mine_field);
            mine_field_shown[row][column] += show_field(rows, columns, row, column + 1, sign, mine_field);
            mine_field_shown[row][column] += show_field(rows, columns, row - 1, column, sign, mine_field);
            mine_field_shown[row][column] += show_field(rows, columns, row + 1, column, sign, mine_field);

            mine_field_shown[row][column] += show_field(rows, columns, row - 1, column - 1, sign, mine_field);
            mine_field_shown[row][column] += show_field(rows, columns, row + 1, column + 1, sign, mine_field);
            mine_field_shown[row][column] += show_field(rows, columns, row - 1, column + 1, sign, mine_field);
            mine_field_shown[row][column] += show_field(rows, columns, row + 1, column - 1, sign, mine_field);
        }
    }



    print_matrix<size_t>(rows, columns, mine_field_shown);

    delete_matrix<char>(rows, columns, mine_field);
    delete_matrix<size_t>(rows, columns, mine_field_shown);



    return 0;
}



