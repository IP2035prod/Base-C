/******************************************************************************
  ============ C17 ===================
    Сумма цифр равна произведению
    Составить логическую функцию, которая определяет, верно ли, что в заданном числе сумма цифр равна произведению.<br/>
<b>int is_happy_number(int n)</b>

      Формат ввода: 
    Целое не отрицательное число
      Формат вывода: 
    YES или NO

      Пример 1: 
      На входе: 
      123
      Результат: 
      YES

      Пример 2: 
      На входе: 
      528
      Результат: 
      NO

*******************************************************************************/
#include <stdio.h>
#include <malloc.h> // динамическое выделение памяти под массив.
int f(int in)
{
    int k; // "Буфер".
    int i; 
    int m; //Кол-во цифр в числе.
    int *a; //Указатель на массив.
    // ИСПРАВЛЕНИЕ №1: убрана изначальная очистка от мусора (сумма = 0, Произведение = 1).
    int sum; // Сумма цифр числа. 
    int mull; // Произведение цифр числа. 
    
    k = in;
    m = 0;
    while(k != 0)       //Ищем количество цифр в числе, поразрядно разделяя (на 10, 100, 1000 и т.д).
    {
        k = k / 10;
        m++;
    }
    k = 0; //Обнуляю буфер, его значение больше не нужно.
    a = (int*)malloc(m * sizeof(int)); //Размер массива = количество цифр в числе.
    for(i = 0; i < m; i++) //Запись числа в ячейки массива в ОБРАТНОМ порядке. (245 = [5][4][2])
    {
        a[i] = in%10;      //беру последнюю цифру с числа.
        in = in / 10;         //забираю эту цифру с числа.
    }
    // ИСПРАВЛЕНИЕ №1: вместо 0 для суммы и 1 для произведения цифр в начале присваиваем саму цифру. В частности, для ситуации, когда число 0. 
    sum = a[0];
    mull = a[0];
    
    for(i = 1; i < m; i++) //ИСПРАВЛЕНИЕ №1: т.к последнюю цифру уже записали в переменную, интераций меньше на одну.
    {
        sum = sum + a[i];
        mull = mull * a[i];
    }
    //printf("Cумма цифр = %d, Произведение цифр = %d \n", sum, mull);
    if (sum == mull) 
    {
        return 1;
    }
}

int main()
{
    int in;
    //printf("Введите целое число\n");
    scanf("%d", &in);
    if (f(in)==1) //Функция вернула значение, а его перевод в "YES" или "NO" в основной программе.
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}



