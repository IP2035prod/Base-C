/******************************************************************************
   ============ F19 ===================
    Больше среднего
    Определить количество положительных элементов квадратной матрицы, превышающих по величине среднее арифметическое 
    всех элементов главной диагонали. Реализовать функцию среднее арифметическое главной диагонали.

      Формат ввода: 
    5 строк по 5 целых чисел через пробел

      Формат вывода: 
    Одно целое число
 
      Пример 1: 
      На входе: 
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
      Результат: 
      10
*******************************************************************************/
#include <stdio.h>

const int strok = 5, stolb = 5; // Глобальные константы, определяют размер матрицы (для наладки программы).

int SrArDiag (int ArrIn[strok][stolb], int i, int j)
{
    int Sum = 0;
    int Out;
    for (i = 0; i < strok; i++) 
    {
        for (j = 0; j < stolb; j++) 
        {
            if (i == j)
            {
                Sum = Sum + ArrIn[i][j];
            }
        }   
    }
    Out = Sum / strok; // strok т.к квадратная матрица.
    //printf ("Среднее арифметическое элементов главной диагонали = %d ", Out);   
    return Out;
}

int main()
{
    int ArrIn [strok][stolb];  // Матрица.
    int i, j; //Счетчики строк и столбцов.
    int Chet = 0; // Счетчик элементов.
    int SrAr;
    printf ("Ввод матрицы (скопируйте готовую).\n");
    for (i = 0; i < strok; i++) // Ввод матрицы (готовой).
    {
        for (j = 0; j < stolb; j++)
        {
            scanf ("%d", &ArrIn[i][j]);    
        }
    }
    SrAr = SrArDiag (ArrIn, i, j);
    
    for (i = 0; i < strok; i++) // перебор матрицы.
    {
        for (j = 0; j < stolb; j++)
        {
            if ((ArrIn[i][j] > 0) && (ArrIn[i][j] > SrAr)) // Условие: элемент больше "0" и больше ср.ар. диагонали.
            {
                Chet = Chet + 1;
            }
        }
    }
    printf ("Количество элементов = %d.\n", Chet);
}