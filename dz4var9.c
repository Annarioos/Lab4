#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int r(int A, int B);
int main()
{
    setlocale(LC_CTYPE, ".UTF8");
    int A, B;
    int l;

    printf("выбор маршрута\n");
    printf("Введите данные от двух датчиков traffic flow (A и B): ");
    scanf("%d %d", &A, &B);
    l = r(A, B);

    printf("Показать направление 'Налево' если только одно из двух чисел (A или B) является четным (1 - да, 0 - нет):\n %d\n", l);
    return 0;
}

int r(int A, int B)
{
    int result;
    result = (A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0);
    return result;
}
