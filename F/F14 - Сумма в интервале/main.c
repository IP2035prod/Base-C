/******************************************************************************
F14
       
Сумма в интервале
 
 Составить функцию которая возвращает сумму элементов в заданном отрезке [from, to] для массива.
Прототип функции int sum_between_ab(int from, int to, int size, int a[]) 

Формат ввода: 
Функция принимает концы отрезка from и to, размер массива, массив целых чисел

Формат вывода: 
Функция возвращает сумму элементов в интервале [from, to]

Пример 1: 
На входе: 
4 6 1 2 3 4 5 6 7 8 9 10
Результат: 
15

Пример 1: 
На входе:
6 4 1 2 3 4 5 6 7 8 9 10
Результат: 
15


*******************************************************************************/
#include <stdio.h>

int f(int SizeArr, int * arrIn, int From, int To) 
{
    int i; 
    int Out = 0;  
    for (i = 2; i < SizeArr; i++) // i = 2 пропуск первых двух ячеек, содержащие начало и конец отрезка.
    {
        if ((arrIn[i] >= From) && (arrIn[i] <= To)) // Условие сравнения.
        {
            Out = Out + arrIn[i];
        }
    }
    return Out;
}

int main()
{
    int i;
    int Out;
    // Параметры.
    int SizeArr = 12; // Число элементов массива + начало и конец отрезка.
    int From; // Начало отрезка.
    int To; // Конец отрезка.
    // Массивы.
    int arrIn[SizeArr];
    
    for (i = 0; i < SizeArr; i++) //Заполнение входного массива. 
    {
        scanf("%d", &arrIn[i]);
    }
    if (arrIn[0] <= arrIn[1])
    {
        From = arrIn[0]; // начало отрезка (по условию).
        To = arrIn[1]; // Конец отрезка.
    }
    if (arrIn[0] > arrIn[1]) // Если отрезок задан в обратном порядке (для автотеста).
    {
        From = arrIn[1];
        To = arrIn[0]; 
    }
    Out = f(SizeArr, arrIn, From, To);
    printf ("%d", Out);
    return 0;
}



