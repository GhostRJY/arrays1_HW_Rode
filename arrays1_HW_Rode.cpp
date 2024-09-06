#include <iostream>
#include "arrayFunction.h"
#include <random>
#include <string>

// псевдослучайные числа в диапазоне
auto randomNumber(int fromVal = -10, int toVal = 100) -> int
{
    // std::cout << "<Machine choose value>" << std::endl;
    std::random_device rd;
    std::mt19937 mersenne{rd()};
    mersenne();
    return (fromVal + mersenne() % toVal);
}

// заполняем массив случайными числами
template <typename T>
void fillRandArr(T *randArr, const int arrSize)
{
    for (size_t i{0}; i < arrSize; ++i)
        randArr[i] = randomNumber();
}

template <typename T>
void fillRand2DArr(T *rand2dArr, const int &row, const int &column, const int from, const int to)
{
    for (int i{0}; i < row; ++i)
    {
        for (int j{0}; j < column; ++j)
            rand2dArr[i][j] = randomNumber(from, to);
    }
}

template <typename T>
void show2DArray(T *array2dArr, const int &row, const int &column)
{
    const int fieldSize = 5;

    // std::cout << std::setw(fieldSize) << std::setiosflags(std::ios::right) << std::endl;

    for (size_t i{0}; i < row; ++i)
    {
        for (size_t j{0}; j < column; ++j)
        {
            std::cout << '[' << array2dArr[i][j] << "] ";
        }
        std::cout << '\n';
    }

    std::cout << std::endl;
}

int main()
{

    // //    5.	Написать программу, которая предлагает пользователю ввести число, и затем подсчитывает, сколько раз это число встречается в массиве на 100 случайных элементов.
    // const int arrSize{ 100 };
    // int userValue{ 0 };
    // int randArr[arrSize];

    // fillRandArr(randArr, arrSize);
    // bubbleSort(randArr, arrSize, true);
    // showArray(randArr, arrSize);
    //
    // std::cout << "\nВведите число для поиска в массиве случайных значений ->";
    // std::cin >> userValue;
    //
    // for(size_t i{ 0 }; i < arrSize; ++i) {
    //     if(randArr[i] == userValue)
    //         std::cout << "Элемент [" << i << "] равен вашему значению\n";
    // }

    // std::cout << "================================================================\n" << std::endl;
    //
    // //    6.	Создать массив из 20 случайных чисел в диапазоне от - 10 до 30.
    // // Написать программу, определяющую сумму элементов массива, находящихся в массиве после первого отрицательного элемента.
    // const int arrSize6{ 20 };
    // int result{ 0 };
    // int randArr6[arrSize6];
    // bool startCount{ false };
    // bool loopStep{ true };

    // fillRandArr(randArr6, arrSize6);
    // showArray(randArr6, arrSize6);

    // //считаем сумму элементов
    // for(size_t i{ 0 }; i < arrSize6; ++i) {
    //
    //     if(randArr6[i] < 0 && loopStep) {
    //         startCount = true;
    //         loopStep = false;
    //         continue;
    //     }

    //     if(startCount) {
    //         result += randArr6[i];
    //     }
    // }

    // std::cout << "\nСумма элементов начиная с первого отрицательного элемента = " << result;
    // std::cout << "\n================================================================\n" << std::endl;

    //
    //
    // //    21.	Создать массив строк на 4000 элементов.Заполнить его римскими числами от 1 до 3999, показать на экране все элементы.
    //
    // //    22.	Ввести число в диапазоне от 0 до 1000000. Озвучить его словами.Например, при вводе числа 25 вывести на экране «двадцать пять».
    //
    //
    ////    23.	Дана последовательность:
    ////            1,
    ////           11, предыдущий элемент : 1 - единица
    ////           21, предыдущий элемент : 2 - единицы
    ////         1211, предыдущий элемент : 1 - двойка 1 - единица
    ////       111221, предыдущий элемент : 1 - единица 1 - двойка 2 - единицы
    ////       312211, предыдущий элемент : 3 - единицы 2 - двойки 1 - единица
    ////     13112221, предыдущий элемент : 1 - тройка 1 - единица 2 - двойки 2 - единицы
    ////   1113213211, следующее число
    ////… Ввести число N.Показать N - ный по счёту элемент последовательности.

    // int n = 10;

    // std::cout << "Считаю предыдущие элементы\n";
    // generateUnitCountRow(n);
    // std::cout << "================================================================\n" << std::endl;

    // двумерные массивы
    // 1.	Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20.
    //  Определить сумму элементов массива, среднее арифметическое, минимальный и максимальный элемент.
    // const int row{ 10 }, column{ 10 };
    // int fromRange{ 0 }, toRange{ 20 };
    //
    // int arr2[row][column];
    //
    // fillRand2DArr(arr2, row, column, fromRange, toRange);
    // show2DArray(arr2, row, column);
    ////сумма
    // int result = 0;

    // for(int i{ 0 }; i < row; ++i) {
    //     for(int j{ 0 }; j < column; ++j) {
    //         result += arr2[i][j];
    //     }
    // }

    // std::cout << "Сумма элементов двумерного массива равна " << result << '\n';

    ////среднеарифметическое
    // std::cout << "Среднеарифметическое элементов двумерного массива равна " << static_cast<double>(result) / (row * column) << '\n';
    ////мин
    // int min{ 0 }, max{ 0 };
    // for(int i{ 0 }; i < row; ++i) {
    //     for(int j{ 0 }; j < column; ++j) {
    //         if(arr2[i][j] < min)
    //             min = arr2[i][j];
    //     }
    // }

    // std::cout << "Минимальный элемент двумерного массива равен " << min << '\n';

    ////макс
    //
    // for(int i{ 0 }; i < row; ++i) {
    //    for(int j{ 0 }; j < column; ++j) {
    //        if(arr2[i][j] > min)
    //            max = arr2[i][j];
    //    }
    //}

    // std::cout << "Максимальный элемент двумерного массива равен " << max << '\n';

    // 2.	Дан двумерный массив размерностью M х M, заполненный случайными числами из диапазона от 0 до 20.
    //  Определить сумму элементов, расположенных на главной диагонали, а также сумму элементов, расположенных на побочной диагонали.
    /*const int SIZE = 10;
    int arr2D[SIZE][SIZE];
    fillRand2DArr(arr2D, SIZE, SIZE, 0, 20);
    show2DArray(arr2D, SIZE, SIZE);
    int diagonal1{0};
    int diagonal2{0};

    for(int row{ 0 }; row < SIZE; ++row) {
        for(int col{ 0 }; col < SIZE; ++col) {
            if(row == col)
                diagonal1 += arr2D[row][col];

            if(col==SIZE-1-col)
            diagonal2 += arr2D[row][col];
        }
    }

    std::cout << "Сумма Диагонали 1 = " << diagonal1 << '\n';
    std::cout << "Сумма Диагонали 2 = " << diagonal2 << '\n';*/

    // 3.	Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от - 10 до 10.
    //  Определить количество положительных, отрицательных и нулевых элементов.
    /*const int ROW{ 5 }, COL{ 4 };
    int arr2D[ROW][COL];
    size_t positiveCounter{ 0 }, negativeCounter{ 0 }, nullCounter{0};


    fillRand2DArr(arr2D, ROW, COL, -10, 20);
    show2DArray(arr2D, ROW, COL);

    for(int row{ 0 }; row < ROW; ++row) {
        for(int col{ 0 }; col < COL; ++col) {
            if(arr2D[row][col] < 0)
                ++negativeCounter;
            else if(arr2D[row][col] > 0)
                ++positiveCounter;
            else
                ++nullCounter;
        }
    }

    std::cout << "Кол-во отрицательных элементов в массиве = " << negativeCounter << '\n';
    std::cout << "Кол-во положительных элементов в массиве = " << positiveCounter << '\n';
    std::cout << "Кол-во равных нулю элементов в массиве = " << nullCounter << '\n';*/


    // 4.	Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20.
    //  Определить сумму по каждой строке и по каждому столбцу массива.
    /*const int ROW{ 5 }, COL{ 4 };
    int arr2D[ROW][COL];
    int sumInRow[ROW] = { 0 };
    int sumInCol[COL] = { 0 };

    fillRand2DArr(arr2D, ROW, COL, -10, 20);
    show2DArray(arr2D, ROW, COL);

    for(int row{ 0 }; row < ROW; ++row) {
                
        for(int col{ 0 }; col < COL; ++col) {
            sumInRow[row] += arr2D[row][col];
            
        }                
    }

    for(int col{ 0 }; col < COL; ++col) {

        for(int row{ 0 }; row < ROW; ++row) {
            sumInCol[col] += arr2D[row][col];

        }
    }

    std::cout << "Сумма элементов в строках массива = ";
    showArray(sumInRow, ROW);
    std::cout << "Сумма элементов в столбцах массива = ";
    showArray(sumInCol, COL);*/

    // 5.	Заполнить массив M x N двузначными числами так, чтобы первая цифра указывала  номер строки, а вторая – номер столбца.
    /*const int ROW{ 5 }, COL{ 4 };
    std::string arr2D[ROW][COL];
    
    for(int row{ 0 }; row < ROW; ++row) {

        for(int col{ 0 }; col < COL; ++col) {
            arr2D[row][col].append(std::to_string(row));
            arr2D[row][col].append(std::to_string(col));
        }
    }

    show2DArray(arr2D, ROW, COL);*/

    // 6.	В двумерном массиве размерности M x N поменять местами чётные строки с нечётными.

    // 7.	Дан двумерный массив размерностью M x N, заполненный случайными числами из диапазона от - 100 до 100.
    //  Определить сумму элементов массива, расположенных между минимальным и максимальным элементами.
    //const int ROW{ 5 }, COL{ 4 };
    //int arr2D[ROW][COL];
    //int minVal{ 0 }, maxVal{ 0 };
    //int minRow{ 0 }, minCol{ 0 };
    //int maxRow{ 0 }, maxCol{ 0 };

    //fillRand2DArr(arr2D, ROW, COL, 10, 20);
    //show2DArray(arr2D, ROW, COL);

    //for(int i{ 0 }; i < ROW; ++i) {
    //     for(int j{ 0 }; j < COL; ++j) {
    //       if(arr2D[i][j] < minVal) {
    //           minVal = arr2D[i][j];
    //           minRow = i;
    //           minCol = j;
    //       }
    //     }
    //}
    //
    ////макс   
    //for(int i{ 0 }; i < ROW; ++i) {
    //   for(int j{ 0 }; j < COL; ++j) {
    //       if(arr2D[i][j] > minVal) {
    //           maxVal = arr2D[i][j];
    //           maxRow = i;
    //           maxCol = j;
    //       }
    //       }
    //}

    //int sumInRangeMinMax{ 0 };
    //
    //for(int row{ minRow }; row < maxRow; ++row) {
    //    for(int col{ minCol }; col < maxCol; ++col) {
    //        sumInRangeMinMax += arr2D[row][col];
    //    
    //    }
    //}

    //std::cout << "Сумма значений элементов между минимальным и максимальным элементом = " << sumInRangeMinMax << std::endl;

    //11 змейка
    const int ROW{ 5 }, COL{ 4 };
    int arr2D[ROW][COL];
    int counter{ 0 };

    for(int row{ 0 }; row < ROW; ++row) {
        for(int col{ 0 }; col < COL; ++col) {
            ++counter;
            if(row % 2 == 0) { 
                arr2D[row][col] = counter;
            }
            else { 
                arr2D[row][COL - col - 1] = counter; 
            }
        }
    }
    
    // вывод
    for(int row{ 0 }; row < ROW; ++row) {
        for(int col{ 0 }; col < COL; ++col) {
            if(arr2D[row][col] % 10 == arr2D[row][col]) { 
                std::cout << "   "; 
            }
            else if(arr2D[row][col] % 100 == arr2D[row][col]) { 
                std::cout << "  ";
            }
            else if(arr2D[row][col] % 1000 == arr2D[row][col]) { 
                std::cout << " "; 
            }
            std::cout << arr2D[row][col];
        }
        std::cout << std::endl;
    }

    return 0;
}
