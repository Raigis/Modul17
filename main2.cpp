/*
Напишите функцию, принимающую указатель на тип int, по которому размещены десять переменных типа int. 
Функция ничего не возвращает, но по тому же указателю элементы должны располагаться в обратном порядке.
*/

#include <iostream>

void swap (int* pa, int* pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void reverse(int* px) {
    for (int i = 0, y = 9; i < y; i++, y--){
        swap ((px+i), (px+y));
    }
}

int main () {
    int x[] {1, 2, 3, 4, 5, 6 , 7, 8, 9, 10};
    reverse(x); 
    for (int i = 0; i < 10; i++) {
        std::cout << *(x+i) << " ";
    }
}