/*
Напишите функцию, принимающую два указателя на char*, по которым размещены две строки.

Функция должна возвращать true, если вторая строка является подстрокой первой.
*/
#include <iostream>

bool substr(const char* a, const char* b) {
    for (int i = 0, y = 0; *(a+i+y) != '\0'; y++) {
        if (*(a+i+y) != *(b+y)) {
            y = -1;
            i++;
            continue;
        } else if (*(b+y+1) == '\0') {
            return true;
        }
    }
    return false;
}

void print (bool res) {
    if (res) {
        std::cout << "True\n";
    } else {
        std::cout << "False\n";
    }
}

int main () {
    const char* a = "Hello world";
    const char* b = "wor";
    const char* c = "banana";
    print(substr(a,b));
    print(substr(a,c));
}