/******************************************************************************
     
    ============ E10 ===================
    Циклический сдвиг массива вправо на 4
    Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.

      Формат ввода: 
    12 целых чисел через пробел
      Формат вывода: 
    12 целых чисел через пробел

      Пример 1: 
      На входе: 
      4  -5   3  10  -4  -6   8 -10   1   0   5   7
      Результат: 
      1   0   5   7   4  -5   3  10  -4  -6   8 -10

      Пример 2: 
      На входе: 
      1 2 3 4 5 6 7 8 9 10 11 12
      Результат: 
      9 10 11 12 1 2 3 4 5 6 7 8


*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    // Унификация программы под решение других задач в перспективе.  
    
    // Параметры.
    int ElIn = 12; //Количество элементов на входе.
    int ElOut = 12; //Количество элементов на выходе.
    int Sdv = 4; //Величина сдвига.
    // Массивы
    int arrIn[ElIn]; //Ввод элементов.
    int arrBuf[ElIn + Sdv]; //"Буферный", величину и направление сдвига можно задавать условиями. Но потом.
    int arrOut[12]; //Вывод элементов (в этой программе не нужен).
    //printf("Введите %d целых натуральных числел через пробел.\n", ElIn);
    
    for (i = 0; i < ElIn; i++) //Заполнение входного массива. arrIn = {[1] [2] [3] [4] [5] [6] [7] [8] [9] [10] [11] [12]}
    {
        scanf("%d", &arrIn[i]);
    }
    for (i = 0; i < ElIn; i++) //Заполнение "Буферного" массива начиная с ячейки с индексом Sdv. arrBuf = {[ ] [ ] [ ] [ ] [1] [2] [3] [4] [5] [6] [7] [8] [9] [10] [11] [12]}
    {
        arrBuf[i+Sdv] = arrIn[i];    
    }
    for (i = 0; i < Sdv; i++)  // Возврат последних элементов "Буферного" массива в пустые первые ячейки. arrBuf = {[9] [10] [11] [12] [1] [2] [3] [4] [5] [6] [7] [8] [0] [0] [0] [0]}
    {
        arrBuf[i] = arrBuf[ElIn + i]; 
        arrBuf[ElIn + i] = 0; // Нули в "лишние" ячейки. 
    }
    for (i = 0; i < ElIn; i++) // Вывод ElIn ячеек "Буферного" массива. 
    {
        printf("%d ", arrBuf[i]);    
    }
}
