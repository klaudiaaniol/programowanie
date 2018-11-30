#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
void NewLine()
{
	printf("\n");
}
void NewLines(int count)
{
	
	for (int i = 0; i < count; i++)
	{
		printf("\n");
	}
}
WriteBiggerNumber(int x, int y)
{
	if (x < y)
		return y;
	if (x > y)
		return x;
	else
		return false;
}
Multiply(int x, int y)
{
	return x * y;
}

void kalkulator(char operator, float x, float y)
{
	float wynik = 0;

	switch (operator)
	{
	case '+':
	{
		wynik = x + y;
		printf("Twoj wynik to : %0.2f\n", x + y);
		break;
	}
	case '-':
	{
		wynik = x - y;
		printf("Twoj wynik to : %0.2f\n", x - y);
		break;
	}
	case '*':
	{
		wynik = x * y;
		printf("Twoj wynik to : %0.2f\n", x*y);
		break;
	}
	case '/':
	{
		wynik = x / y;
		printf("Twoj wynik to : %0.2f\n", x / y);
		break;
	}

	}
}
int main()
{

	//zadanie1.1
/*
int x;
char y;
float z;
	x = 95;
	y ='A';
	z = 56.25;
	printf("Zadanie 1.1 \n%d\n", x);
	printf("%c\n", y);
	printf("%0.2f\n", z);
	return 0;
	system("pause");
*/
//zadanie 1.2
/*
	int x = 12;  
	printf("Zadanie 1.2 \n%d\n", x);
	return 0;
	system("pause");
*/
//zadanie 1.3
/*
	int x;
	printf("Podaj liczbê do spotêgowania: ");
	scanf_s("%d", &x);
	x=x*x;
	printf("Kwadratem twojej liczby jest %d", x);
	system("pause");
			*/
//zadanie 1.4
/*
	int x;
	printf("Podaj liczbe:");
	scanf_s("%d", &x);
	if (x > 0)
		printf("liczba jest wieksza od 0");

	if (x < 0)
		printf("liczba jest mniejsza od 0");

	if (x==0)
		printf("podales wartosc rowna 0");
	system("pause");
*/

/*
//zadanie 1.5
	int a, b, c;

	printf("podaj a:");
	scanf_s("%d", &a);
	printf("podaj b:");
	scanf_s("%d", &b);
	printf("podaj c:");
	scanf_s("%d", &c);

	if (a > b&&a > c)
		printf("liczba 'a' jest najwieksza");
			else if (b > a&&b > c)
			printf("liczbna 'b' jest najwieksza");
			else if (c > a&&c > b)
			printf("liczba 'c' jest najwieksza ");
			else
			printf("podales wartosci rowne");
			system("pause");
*/

//zadanie 1.6
/*
float x = 0, y = 0, wynik = 0;
char operator;
printf("Operatory do wyboru :\n +   -dodawanie, \n -   -odejmowanie, \n *   -mnozenie,\n /   -dzielenie\n\n");
printf("Podaj operator\n");
scanf_s("%c", &operator);
printf("podaj x:\n");
scanf_s("%f", &x);
printf("podaj y:\n");
scanf_s("%f", &y);

switch (operator)
{
case '+':
	wynik = x + y;
	printf("Twoj wynik to : %0.2f\n", wynik);
	break;
case '-':
	wynik = x - y;
	printf("Twoj wynik to : %0.2f\n", wynik);
	break;
case '*':
	wynik = x * y;
	printf("Twoj wynik to : %0.2f\n", wynik);
	break;
case '/':
	wynik = x / y;
	printf("Twoj wynik to : %0.2f\n", wynik);
	break;
}

	system("pause");
	return 0;
*/
//zadanie2.1
/*
int x;
printf("Podaj liczbe\n");
scanf_s("%d", &x);
while (x != 0) {
	printf("%d\n", x);
	break;
}
system("pause");
*/
//zadanie2.2
/*
	bool wybor = false;
	char operator, odp;
	float x, y;
	do
	{
		printf("Operatory do wyboru :\n +   -dodawanie, \n -   -odejmowanie, \n *   -mnozenie,\n /   -dzielenie\n\n");
		printf("Podaj operator\n");
		scanf_s(" %c", &operator);
		printf("podaj x:\n");
		scanf_s("%f", &x);
		printf("podaj y:\n");
		scanf_s("%f", &y);
		kalkulator(operator, x, y);

		printf("Czy chcesz powtorzyc dzialanie? (T/N): ");
		scanf_s(" %c", &odp);
		if (odp == 't' || odp == 'T');
		{
			wybor = true;
		}
	} while (wybor == true);

	system("pause");
	return 0;
/*
//zadanie2.3

/*
int x = 0, wynik = 0;

	printf("Podaj liczbe:\n");
	scanf_s(" %d", &x);
	while (x < 100000)
	{
		wynik = pow(x, 2);
		printf("Wynik to: %d\n", wynik);
	}
	system("pause");
	return 0;
*/
//zadanie2.4
/*
int x = 0;
printf("Podaj liczbe wieksza od 0:");
scanf_s(" %d", &x);

	while (x >=0)
	{
		printf("\n%d", x--);
	}
	printf("\n");
	system("pause");
	return 0;
*/	
//zadanie2.5
int x;
printf("Podaj liczbe:");
scanf_s("%d", &x);
//if (x % 2 == !0) continue; 
	if (x > 0)
		printf("liczba jest wieksza od 0");

	if (x < 0)
		printf("liczba jest mniejsza od 0");

	if (x == 0)
		printf("podales wartosc rowna 0"); 
system("pause");
return 0;
//zadanie2.6
/*
int x;
for (x = 0; x < 10; x++) {
	printf("%d\n", x);
}
system("pause");
return 0;
*/
//zadanie2.7
/*
int x, y, i;
printf("podaj x:");
scanf_s(" %d", &x);  //y>x 
printf("podaj y:");
scanf_s(" %d", &y);
for (i = x; i <= y; i++)  //stanem pocz¹tkowym musi byæ mniejsza liczba, w tym wypadku x
{ 
	printf("%d\n", i);
}
system("pause");
*/
//zadanie2.8
/*
int x, i;
printf("podaj liczbe: ");
scanf_s(" %d", &x);
for (i = x; i > 0; i--)
{
	printf("%d\n", i);
}
system("pause");
*/
//zadanie2.9
/*
int x, i;
printf("podaj liczbe: ");
scanf_s(" %d", &x);
for (i = x; i <100; i+2)
{
	i = i + 3; //co trzeci¹ !!
	printf("%d\n", i);
}
system("pause");
*/
//zadanie3.1
/*
NewLine();
system("pause");
*/
//zadanie3.2
/*
int count;
printf("podaj ilosc linii: \n");
scanf_s("%d", &count);
NewLines(count);
system("pause");
return 0;
*/
//zadanie3.3
/*
int x, y, wynik=0;
printf("podaj x: \n");
scanf_s("%d", &x);
printf("podaj y: \n");
scanf_s("%d", &y);
wynik = WriteBiggerNumber(x, y);
printf("wiêksza liczba to:\n%d", wynik);
printf("\n");
system("pause");
return 0;
*/
//zadanie3.4
/*
int x, y, wynik;
printf("podaj x: \n");
scanf_s("%d", &x);
printf("podaj y: \n");
scanf_s("%d", &y);
wynik = Multiply(x, y);
printf("%d", wynik);
printf("\n");
system("pause");
return 0;
*/

}





