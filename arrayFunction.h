#pragma once
#include<iostream>
#include<iomanip>
#include<vector>
#include<string>

//показываем массив
template<typename T>
void showArray(T *array, const int &arrSize)
{
    const int fieldSize = 4;
    for(size_t i{ 0 }; i < arrSize; ++i) {
        std::cout<<std::setw(10)<<std::setiosflags(std::ios::left) << array[i] << ' ';
        if(!((i + 1) % 10))
            std::cout << '\n';
    }

    std::cout << std::endl;
}

//сортировка пузырьком массива asc = true (по возрастанию) false(по убыванию)
template <typename T>
void bubbleSort(T *userArray, const int arrSize, bool asc = true)
{
    for(size_t i{ 0 }; i < arrSize; ++i) {
        for(size_t j{ 0 }; j < arrSize - i - 1; ++j) {
            if(asc) {
                if(userArray[j] > userArray[j + 1]) {

                    userArray[j] ^= userArray[j + 1];
                    userArray[j + 1] ^= userArray[j];
                    userArray[j] ^= userArray[j + 1];
                }
            } else {
                if(userArray[j] < userArray[j + 1]) {

                    userArray[j] ^= userArray[j + 1];
                    userArray[j + 1] ^= userArray[j];
                    userArray[j] ^= userArray[j + 1];
                }
            }
        }
    }
}

//строка со счетом предыдущих элементов
void generateUnitCountRow(int n)
{
    //Создаю вектор для хранения строк
    std::vector<std::string> resultVect(n + 1);

    //Инициализирую первый элемент
    resultVect[0] = "1";

    //формирую строки
    for(size_t i{ 1 }; i <= n; ++i) {

        //вытягиваю из вектора предыдущую строку
        std::string previous = resultVect[i - 1];

        //создаю текущую строку
        std::string current = "";

        //формирую текущую строку(добавляю следующую цифру и так пока не конец строки)
        for(size_t j{ 0 }; j < previous.size(); ++j) {
            int count = 1;

            //пока не закончилась строка и текущая единица продолжаю увеличивать счетчик
            while(j + 1 < previous.size() && previous[j] == previous[j + 1]) {
                ++count;
                ++j;
            }


            current += std::to_string(count) + previous[j];
        }

        resultVect[i] = current;
    }

    //отображаю результаты
    for(auto element : resultVect)
        std::cout << element << std::endl;


}
