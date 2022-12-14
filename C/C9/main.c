/******************************************************************************
    ============ C9 ===================
    Факториал
    Составить функцию вычисления N!. Использовать ее при вычислении факториала<br/>
<b>int factorial(int n)</b>

      Формат ввода: 
    Целое положительное число не больше 20
      Формат вывода: 
    Целое положительное число

      Пример 1: 
      На входе: 
      5
      Результат: 
      120

*******************************************************************************/
#include <stdio.h>
// формула факториала: n! = 1*2*3*... n раз.
// логика программы: fac = 1; fac*(fac+1)*(fac+2)*(fac+3)*...*(fac+in).

int f(int in)
{
    int i;
    int fac = 1; //значение факториала.
    for (i = 1; i < in; i++)
    {
        fac = fac * (i+1); // (a+1), добавляю еденицу.
    }
    return fac;
}

int main()
{
    int in;
    int out;
    //printf("Введите целое число не больше 20.\n");
    scanf("%d", &in);
    if (in <= 20 && in >= 0)
    {
        out = f(in);
        //printf("Факториал числа %d = %d.\n", in, out);
        printf("%d", out);
    }
    else
    {
        printf("Неккоректный ввод.\n");
    }
}

