/******************************************************************************
    ============ G10 ===================
    Самое длинное слово
    В файле input.txt дана строка слов, разделенных пробелами. Найти самое длинное слово и вывести его в файл output.txt. Случай, когда самых длинных слов может быть несколько, не обрабатывать.

      Формат ввода: 
    Строка из английских букв и пробелов. Не более 1000 символов.

      Формат вывода: 
    Одно слово из английских букв.

      Пример 1: 
      На входе: 
      Hello beautiful world
      Результат: 
      beautiful

*******************************************************************************/
#include <stdio.h>
#include <string.h> // библиотека для работы со строками.

int COLSIM = 1001; // Максимальная длинна строки по условию задания.
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

int main()
{
   
    FILE *Fo; // Файл вывода.
    char strIn[COLSIM]; // Длинна строки по условию 100 символов.
    
    int MaxWord = 0; // Длина самого длинного слова.
    int indMaxWord = 0; // Индекс начала самого длинного слова.

    int Count;
    int LWord = 0; // Длинна слова (количество символов).
    
    ReadFile(strIn); //Чтение входного файла.
    
    for (Count = 0; Count < len; Count++) // Сканирование строки.
    {
        if (strIn[Count] != ' ') //Уловие деление строки на подстроки по символу пробела.
        {
            LWord ++; 
        }
        else if (LWord > MaxWord) 
        { 
            MaxWord = LWord;
            indMaxWord = Count - LWord;
            LWord = 0;
        }
        
    }
    
    if (LWord > MaxWord) // Проверка последнего слова
    {  
        MaxWord = LWord;
        indMaxWord = Count - LWord;
    }
    MaxWord = MaxWord + indMaxWord; 
    
    // запись выходного файла.
    Fo = fopen("output.txt","w"); // открытие файла output.txt на запись
    for (Count = indMaxWord; Count < MaxWord; Count++) 
    {
        fputc (strIn[Count], Fo);  //Вывод символов по индексу: http://www.c-cpp.ru/content/fputc.
    }
    fclose (Fo);
    return 0;
}
