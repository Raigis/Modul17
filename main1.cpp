/*
Напишите функцию, принимающую два указателя на int и меняющую местами содержимое этих указателей.
*/

#include <iostream>

void swap (int* pa, int* pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main () {
    int a = 10;
    int b = 20;
    swap(&a, &b);
    std::cout << a << " " << b;
}