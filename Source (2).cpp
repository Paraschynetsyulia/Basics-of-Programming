//завдання номер 3 , варіант 19
#include<iostream>
using namespace std;
int function(int num1, int num2) {
    return num1 * num1 * num1 - num2 + num1;
}
int main() {
    int num1 = -1;
    int num2 = 2;
    int sum = 0;
    for (int i = 1; i < 10; i++) {
        int temp = function(num1, num2);
        num1 = num2;
        num2 = temp;
        sum += temp;
    }
}