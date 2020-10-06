#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int i,n,m;
    printf_s("Введите натуральное число.\nn = ");
    scanf_s("%d", &n);
    printf_s("Введите количество итераций.\nm = ");
    scanf_s("%d", &m);
    for (i = 0; i < m; i++) {
        if (n % 2 == 0) {
            n /= 2; 
            if (n == 1) break;
        }
        else n = n * 3 + 1;
        printf_s("%d ", i);
    }
    printf_s("\n%d", n);
    return 0;
}
















//do {                                                              //Цикл, который не дает ввести отрицательный i
//    printf_s("Введите натуральное значение i:\nn = ");
//    kolvo = scanf_s("%d", &i);
//    if (i < 1){
//        fflush(stdin);
//        system("CLS");
//        kolvo = 0;
//        printf_s("Это не натуральное число!\n");
//    }
//}   while (kolvo < 1);
