/******************************************************************************
    ============ G14 ===================
    Hello name
    В файле input.txt в одной строке фамилию, имя и отчество. Сформировать файл приветствие output.txt, где останутся имя и фамилия

      Формат ввода: 
    Строка состоящая из английских букв и пробелов не более 100 символов. Формат: Фамилия Имя Отчество
      Формат вывода: 
    Строка состоящая из английских букв и пробелов

      Пример 1: 
      На входе: 
      Pupkin Vasiliy Ivanovich
      Результат: 
      Hello, Vasiliy Pupkin!

*******************************************************************************/
#include <stdio.h>
#include <string.h> // библиотека для работы со строками.
#include <malloc.h> // динамическое выделение памяти под массив.

/*
Алгоритм решения:
1. Разбить строку на слова.
2. Записать слова в массив.
3. Составить выходную строку.
*/

int COLSIM = 101; // Максимальная длинна входной строки по условию.
int len; // Фактическая длинна строки.  

int ReadFile(char *strIn) // Функция чтения строки из файла input.txt, Возвращает фактическое количество символов в строке.
{
    FILE *Fi; 

    Fi = fopen("input.txt", "r"); 
    fgets(strIn, COLSIM, Fi); 
    fclose (Fi); 
    
    len = strlen (strIn); 
    return len; 
}

/* Оно тут не нужно.
void WriteFile(char *strOut, int len) // Функция записи строки в файл output.txt.
{
    FILE *Fo; 
    int i;
    
    Fo = fopen("output.txt", "w"); 
    for (i = 0; i < len; i++) 
    {    
        fputc (strOut[i], Fo); //Вывод символов по индексу.
    }
    fclose (Fo);
}
*/

int main()
{
    char strIn[COLSIM]; //Входная строка символов.
    //char *strOut; // Выходная строка символов.
    
    char *WordMatrix[3]; // Формат: Фамилия Имя Отчество. Три слова.
    int i;
    
    ReadFile(strIn);
    
    char *tmp;
    tmp = strtok(strIn, " ");
    while (tmp != NULL) //пока есть лексемы
    {
        //printf("%s\n", tmp);
        WordMatrix[i] = tmp;
        i++;
        tmp = strtok(NULL, " ");
    }
 
    /*
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", WordMatrix[i]);
    }
    */    
    
    FILE *Fo; 
    Fo = fopen("output.txt", "w"); 
    fprintf(Fo, "Hello, %s %s!", WordMatrix[1], WordMatrix[0]);
    fclose (Fo);
    
    return 0;
}   
    
