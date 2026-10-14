#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int n1(char* c, int* i, float* f, double* d);
int n2(float f);
int n3(char c);
int n4(int i);
int n5(void);
int n6(void);
int main(void)
{
    setlocale(LC_ALL, ".UTF8");

    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("Исходные значения\n");
    printf("char c = %c\n", c);
    printf("int i = %d\n", i);
    printf("float f = %f\n", f);
    printf("double d = %e\n\n", d);

    n1(&c, &i, &f, &d);
    n2(f);
    n3(c);
    n4(i);
    n5();
    n6();
    return 0;
}

int n1(char* c, int* i, float* f, double* d)
{
    printf("Ввод новых значений\n");
    printf("Введите 1 символ (char):\n ");
    scanf(" %c", c);
    printf("Введите целое число (int):\n ");
    scanf("%d", i);
    printf("Введите вещественное число с запятой (float):\n ");
    scanf("%f", f);
    printf("Введите вещественное число с запятой (double):\n ");
    scanf("%lf", d);
    return 0;
}

int n2(float f)
{
    printf("Задача 1а\n");
    int n = (int)f;
    float k = f - int_part;
    printf("Вещественное число f: %f\n", f);
    printf("Целая часть: %d\n", n);
    printf("Дробная часть: %f\n\n", k);
    return 0;
}

int n3(char c)
{
    printf("Задача 1б\n");
    printf("Введенный символ:'%c'\n", c);
    printf("Десятичный ASCII-код: %d\n", c);
    printf("Шестнадцатеричный ASCII-код: 0x%X\n\n", c);
    return 0;
}

int n4(int i)
{
    printf("Задача 1в\n");
    if (i != 0) {
        double result = 1.0 / i;
        printf("Результат выражения 1/%d: %f\n\n", i, result);
    }
    else {
        printf("Ошибка: деление на ноль невозможно (вы ввели i = 0).\n");
    }
    return 0;
}

int n5(void)
{
    int a = 11;
    int b = 3;
    printf("Неявное преобразование типов\n");
    int x;
    float y;
    double z;

    x = a / b;
    y = a / b;
    z = a / b;

    printf("Результат для int x = %d\n", x);
    printf("Результат для float y = %f\n", y);
    printf("Результат для double z = %lf\n\n", z);

    printf("Явное преобразование типов и скобки\n");
    printf("Явное приведение float (float)a / b = %f\n", (float)a / b);
    printf("Явное приведение double (double)a / b = %f\n\n", (double)a / b);

    printf("Эксперименты со скобками\n");
    printf("Выражение ((float)a) / b = %f\n", ((float)a) / b);
    printf("Выражение (float)(a / b) = %f\n", (float)(a / b));
    printf("Выражение a / (float)b = %f\n\n", a / (float)b);
    return 0;
}

int n6(void)
{
    int n;
    printf("Введите целое трехзначное число: ");
    scanf("%d", &n);
    int last = n % 10;
    int middle = (n /10) % 10;
    int first = n /100;

    int sum = first +middle + last;
    int revers = (last * 100) + (middle *10) + first;
    printf("\nПоследняя цифра: %d, первая: %d, сумма цифр: %d, число наоборот:%d\n", last, first, sum, revers);
    return 0;
}
