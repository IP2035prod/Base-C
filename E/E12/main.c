/******************************************************************************
    ============ E12 ===================
    По убыванию и по возрастанию
    Считать массив из 10 элементов и отсортировать первую половину по возрастанию, а вторую – по убыванию.

      Формат ввода: 
    10 целых чисел через пробел
      Формат вывода: 
    Исходный массив. Первая часть отсортирована по возрастанию, вторая половина по убыванию.

      Пример 1: 
      На входе: 
      14  25  13  30  76  58  32  11  41  97
      Результат: 
      13  14  25  30  76  97  58  41  32  11

      Пример 2: 
      На входе: 
      5 4 3 2 1 6 7 8 9 10
      Результат: 
      1 2 3 4 5 10 9 8 7 6
*******************************************************************************/
#include <stdio.h>

int main()
{
    // Для сравнения.
    int i;
    int j; 
    int tmp;
    // Параметры.
    int ElIn = 10; // Чмсло элементов массива.
    // Массивы.
    int arrIn[ElIn]; //Ввод элементов.


    printf("Введите %d целых натуральных числел через пробел.\n", ElIn);
    
    for (i = 0; i < ElIn; i++) //Заполнение входного массива. 
    {
        scanf("%d", &arrIn[i]);
    }
    for (i = 0; i < ElIn / 2 - 1; i++) // Метод попарного сравнения. По возрастанию. Половина.
    {
       for (j = ElIn - 2; j >= i; j--)
       {
           if (arrIn[j] > arrIn[j+1])
           {
               tmp = arrIn[j];
               arrIn[j] = arrIn[j+1];
               arrIn[j+1] = tmp;
           }
       }
    }
    for (i = ElIn / 2; i < ElIn - 1; i++) // Метод попарного сравнения. По убыванию. Половина.
    {

       for (j = ElIn - 2; j >= i; j--)
       {
           if (arrIn[j] < arrIn[j+1])
           {
               tmp = arrIn[j];
               arrIn[j] = arrIn[j+1];
               arrIn[j+1] = tmp;
           }
       }
    }
    for (i = 0; i < ElIn; i++) // Вывод массива.
    {
        printf("%d ", arrIn[i]);    
    }
}
