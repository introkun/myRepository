#include <stdio.h>
#include <locale.h>

#define SIZE_ARRAY 5

/*
Напишите программу, которая создает двухмерный массив и заполняет его по
следующему принципу: пользователь вводит число (например, 3) первый элемент массива
принимает значение этого числа, последующий элемент массива принимает значение
этого числа умноженного на 2 (т.е. 6 для нашего примера), третий элемент массива
предыдущий элемент умноженный на 2 (т.е. 6*2=12 для нашего примера). Созданный
массив вывести на экран.
*/

int shitaetMassiv(int array[SIZE_ARRAY][SIZE_ARRAY], int size, int number);
void printArray(int array[], int size);

int main()
{
	setlocale(LC_ALL, "rus");

	int array[SIZE_ARRAY][SIZE_ARRAY];
	int size = SIZE_ARRAY;
	int number = 0;
	
	shitaetMassiv(array, size, number);
	printArray(array, size);
	return 0;
}


//считает и выводит массив на экран
int shitaetMassiv(int array[SIZE_ARRAY][SIZE_ARRAY], int size, int number)
{
	
	for (int i = 0; i < size; i++)
	{		
		printf("Введите число от 1 до 100 \n");
		scanf("%i", &number);
		for (int j = 0; j < size; j++)
		{			
			array[i][j] = number;
			number = number * 2;
		}		
	}
	printf("\n");
	return array;
}


//Выводит массив на экран
void printArray(int array[SIZE_ARRAY][SIZE_ARRAY], int size)
{
	for (int i = 0; i < size; i++)
	{		
		for (int j = 0; j < size; j++)
		{
			printf("%i\t", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
