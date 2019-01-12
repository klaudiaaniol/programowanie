#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>


/*int main()
{
	//zadanie1.1
	//najwiêksza liczba

	int tab[5];

	int size = 5;
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		printf("podaj liczbe;\n");
		scanf_s("%d", &tab[i]);
	}

	for (int i = 0; i < size; i++)
	{
		if (max < tab[i])
				max=tab[i];
	}
	printf("wartosc zmiennej wynosi: %d,\n", max);
	system("pause");
	
}
*/

	//zadanie 1.2
	//wypisanie od pocz¹tku i od koñca
/* int main() {
	int tab[5];

	int size = 5;
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &tab[i]);
	}
	for (int i = 0; i < size; i++)
	{
		printf_s(" %d,\n", tab[i]);
	}
	system("pause");
	for (int i = 4; i>=0; i--)
	{
		printf_s(" %d,\n", tab[i]);
	}
	system("pause");
	
}
*/
//zadanie 1.3
/*
*int licznik = 0;
int tab[5];
void spr(int tab[])
{
	for (int i = 0; i < 4; i++)
	{
		if(tab[i]<tab[i+1])
		{
			licznik++;
		}
	}
	if(licznik==4)
	{
		printf("tablica jest uporzadkowana rosnaco \n");
	}
	else
	{
		printf("tablica nie jest uporzadkowana rosnaco \n");
	}
	return;
int main() {
	

	int tab[5];
	int size = 5;
	for (int i = 0; i < size; i++)
	{
		printf("podaj wartosc;\n");
		scanf_s("%d", &tab[i]);
	}
	spr(tab);
	system("pause");
}
*/

	//zad 2.1
/*
#include <stdio.h>
#define SIZE 5

void isSorted(int *a)
{
	int *temp;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{

			if (*(a + j) < *(a + i))
			{
				temp = *(a + j);
				*(a + j) = *(a + i);
				*(a + i) = temp;
			}

		}
	}

	printf("\nTablica po sortowaniu:\n");
	for (int i = 0; i < SIZE; i++)
	{

		printf("%d \t", *(a + i));
	}
}


int main(void) {
	int tab[SIZE] = { NULL };
	int *a = tab;
	for (int i = 0; i < SIZE; i++)
	{
		printf("Podaj wartosc:\n");
		scanf_s("%i", &tab[i]);
	}
	printf("Tablica przed sortowaniem:\n");
	for (int i = 0; i < SIZE; i++)
	{

		printf("%d \t", *(a + i));

	}

	isSorted(a);
	printf("\n\n");
	system("pause");
	return 0;

}
*/

//zad 2.2
/*# define SIZE 5
void printBackwards(int *tab, int s)

{
	int i;
	printf("Tablica od konca\n");
	for (i = s - 1; i >= 0; i--)

	{
		printf("%d\n\n", tab[i]);
	}
}
int main()
{
	int tab[5];
	printf("Prosze podac 5 liczb oddzielonych spacja ktore zostana przypisane do tablicy: ");
	scanf_s(" %d %d %d %d %d", &tab[0], &tab[1], &tab[2], &tab[3], &tab[4]);
	printf("Twoje liczby wpisane do tablicy to :\n %d %d %d %d %d \n", tab[0], tab[1], tab[2], tab[3], tab[4]);

	{
		printBackwards(tab, sizeof(tab) / sizeof(tab[0]));
	}
	return 0;
	system("pause");
	}
*/
// zad 2.3
/*
void printDots(int *tab, int s)
{
	int i;
	int a;
	for (i = 0; i < s; i++)
	{
		for (a = 0; a < tab[i]; a++)
		{
			printf(".");
		}
		printf("\n");
	}
}

int main()
{
	int tab[5];
	printf("\n\n\t\tProsze podac 5 liczb oddzielonych spacja ktore zostana przypisane do tablicy: \n\n ");
	scanf_s(" %d %d %d %d %d", &tab[0], &tab[1], &tab[2], &tab[3], &tab[4]);
	printf("Twoje liczby wpisane do tablicy to :\n %d %d %d %d %d \n", tab[0], tab[1], tab[2], tab[3], tab[4]);

	printf("Ilosc kropek w zaleznoscci od wielkosci elementu tablicy :\n");
	{
		printDots(tab, sizeof(tab) / sizeof(tab[0]));
	}
	return 0;
	system("pause");
	}
*/
// zad 2.4
/*
int Sum(int*tab, int s)
{
	int i;
	int a;
	for (i = 0, a = 0; i < s; i++)
	{
		a = a + tab[i];
	}
	return a;
}

int main()
{
	int tab[5];
	printf("Prosze podac 5 liczb oddzielonych spacja ktore zostana przypisane do tablicy: \n ");
	scanf_s(" %d %d %d %d %d", &tab[0], &tab[1], &tab[2], &tab[3], &tab[4]);
	printf("Twoje liczby wpisane do tablicy to :\n %d %d %d %d %d \n", tab[0], tab[1], tab[2], tab[3], tab[4]);

	printf("Suma: ");
	{
		printf("%d\n", (Sum(tab, sizeof(tab) / sizeof(tab[0]))));
	}

	return 0;
	system("pause");
}
*/
// zad 2.5
/*
int main()
{

	int tab[5];
	printf("Prosze podac 5 liczb oddzielonych spacja ktore zostana przypisane do tablicy: \n ");
	scanf_s(" %d %d %d %d %d", &tab[0], &tab[1], &tab[2], &tab[3], &tab[4]);
	printf("Twoje liczby wpisane do tablicy to :\n %d %d %d %d %d \n\n", tab[0], tab[1], tab[2], tab[3], tab[4]);


	int j = 1, i, x;

	int tab2[sizeof(tab) / sizeof(tab[0])];

	for (i = 0; i < sizeof(tab) / sizeof(tab[0]); i++)
	{
		tab2[i] = tab[i];
	}

	while (j > 0)
	{
		for (i = 0, j = 0; i < (sizeof(tab2) / sizeof(tab2[0]) - 1); i++)
		{

			if (tab2[i] > tab2[i + 1])
			{
				x = tab2[i];
				tab2[i] = tab2[i + 1];
				tab2[i + 1] = x;
				j++;
			}
		}
	}


	printf("Tablica nie uporzadkowana: ");

	for (i = 0; i < sizeof(tab) / sizeof(tab[0]); i++)
	{
		printf("%d ", tab[i]);
	}

	printf("Tablica posortowana: ");

	for (i = 0; i < sizeof(tab2) / sizeof(tab2[0]); i++)
	{
		printf("%d ", tab2[i]);
	}
	printf("\n\n\n");
	return 0;
	system("pause");
}
*/
//zad 3.1
/*
int getLenght(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}


int main()
{

	printf("Podaj lancuch znakow bez spacji: \n");
	char str[] = "tekst";
	scanf_s("%s", str);
	printf("Twoj lancuch to : %s\n\n\n", str);

	{
		printf("Lancuch sklada sie z %d liter;) \n", getLenght(str));
	}

	return 0;
}
*/
//zad 3.2
/*
int getLenght(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}


void Reverse(char *str)
{
	int i = 0;

	char x;

	char c[i];

	strcpy(c, str);
}

while (i < getLenght(c) / 2)
{
	x = c[i];

	nowy[i] = c[getLenght(c) - i - 1];

	c[getLenght(c) - i - 1] = x;

	i++;
}
printf("Lancuch od konca : %s", c);
int main()
{
	printf("Podaj lancuch znakow bez spacji: \n");

	char c[] = "kto";

	scanf_s("%s", c);

	printf("Twoj lancuch to : %s\n", c);

	Reverse(c);

	return 0;
	system("pause");
}
*/
//zad 3.3
/*
bool containsDigits(char *str)
{

	for (int i = 0; i < getLength(str); i++)
	{
		if (isdigit(str[i]))
		{
			return 1;
		}
	}
	return 0;
}
main(void) {
	printf("wprowadz ciag do sprawdzenia:\n");
	scanf_s("%s", str);

	if (containsDigits(str))
	{
		printf("ciag zawiera syfry\n");
	}
	else
	{
		printf("Ciag znakow nie zawiera cyfr.\n");
	}
	system("pause");
}
*/
//zad 4.1
/*
#define SIZE 5
void printBackwards(int *a, int s)
{
	int i;
	s = SIZE ;
	for (i = s - 1; i >= 0; i--)
	{
		printf("%d\n", a[i]);
	}

}
main(void) {
	int n, i;
	printf("Podaj liczbe elementow ile bedziesz chcial wprowadzic do tablicy\n");
	scanf_s("%d", &n);
	int *arr = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)                
	{
		printf("Podaj liczbe[%d] = ", i + 1);
		scanf_s("%d", &arr[i]);
	}
	printBackwards(arr, n);
	free(arr);
	system("pause");
}
*/
//zad 4.2
/*
main(void) {
	int n, i, o = 0, p = 0;
	printf("Podaj liczbe elementow ile bedziesz chcial wprowadzic do tablicy\n\n");
	scanf_s("%d", &n);
	int *arr = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)               
	{
		printf("Podaj liczbe[%d] = ", i + 1);
		scanf_s("%d", &arr[i]);
		if (arr[i] < 0)
		{

			o++;

		}

	}

	int *arr1 = (int*)malloc(sizeof(int) * o);
	for (i = 0, p = 0; i < n; i++)               
	{
		if (arr[i] < 0)
		{
			arr1[p] = arr[i];
			p++;

		}

	}
	printf("Druga tablica z liczbami ujemnymi przekazana z pierwszej tablicy\n");
	for (i = 0; i < o; i++)
	{
		printf("%d ,", arr[i]);
	}



	free(arr); 
	free(arr1); 
	system("pause");
}
*/
//zad 4.3
/*
bool AreArreysIdentical(int *al, int sl, int *a2, int s2)
{
	int i;
	if (sl != s2)
	{
		return 0;
	}
	for (i = 0; i < sl; i++)
	{
		if (al[i] != a2[i])
		{
			return 0;
		}
	}
	return 1;
}
main()
{
	int n, i, o = 0, p = 0;
	printf("Podaj liczbe elementow ile bedziesz chcial wprowadzic do tablicy pierwszej\n");
	scanf_s("%d", &n);
	int *arr = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)               
	{
		printf("Podaj liczbe[%d] = ", i + 1);
		scanf_s("%d", &arr[i]);

	}
	printf("Podaj liczbe elementow ile bedziesz chcial wprowadzic do tablicy drugiej\n");
	scanf_s("%d", &o);
	int *arr2 = (int*)malloc(sizeof(int) * n);
	for (p = 0; p < o; p++)               
	{
		printf("Podaj liczbe[%d] = ", p + 1);
		scanf_s("%d", &arr[i]);

	}
	if (AreArreysIdentical(arr, n, arr2, o))
	{
		printf("\t\tTablice sa identyczne!\n");
	}
	else
	{
		printf("\t\tTablice nie sa identyczne!\n");
	}
	free(arr);
	free(arr2);
}
*/
//zad 4.4
char str[100];
int getLength(char *str)
{

	int i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		
	}
	return i;


}
char * reverseString(char*str)
{
	int size = getLenght(str);
	int i = 0;
	char q;
	char *str2;
	str2 = (char*)malloc((size + 1) * sizeof(char));
	strcpy(str2, str);
	while (i < size / 2)
	{
		q = str2[i];
		str2[i] = str2[size - i - 1];
		str2[size - i - 1] = q;
		i++;
	}
	return str2;
}
main(void) {

	{

		printf("Podaj wyraz a go przelicze\n\n");
		scanf_s("%s", str);
		char * result = reverseString(str);
		printf("Dlugosc wiersza  wynosi: %d \n\n", getLength(str));
		free(result);
	}

}