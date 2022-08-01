/******************************************************************************
    ============ E1 ===================
    Среднее арифметическое чисел
    Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива.

      Формат ввода: 
    5 целых не нулевых чисел через пробел

      Формат вывода: 
    Олно число в формате "%.3f"

      Пример 1: 
      На входе: 
      4 15 3 10 14
      Результат: 
      9.200
      
      Пример 2: 
      На входе: 
      1 2 3 4 5
      Результат: 
      3.000

*******************************************************************************/
#include <stdio.h>


int main()
{
    int i;
    float sum = 0;
    float arr[5];
    float out;
    printf("Введите пять целых натуральных числел через пробел.\n");
    
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];  
    }
    out = sum / 5;
    printf("%.3f", out);
}
