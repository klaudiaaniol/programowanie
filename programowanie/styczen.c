#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<stdbool.h>
#define _CRT_SECURE_NO_WARNINGS
typedef struct Node Node;

struct Node
{
	int Value;
	Node * Next;
};

Node * Create(int value) // tworzy listê jednoelementow¹ (alokuje wêze³), która ma wêze³ wskazuj¹cy na samego siebie jako nastêpnik
{
	Node * core = (Node*)malloc(sizeof(Node));
	core->Value = value;
	core->Next = core;
	return core;
}
Node* GetTail(Node* root) // metoda musi ustaliæ pozycjê ostatniego elementu maj¹c dostêp do korzenia i zwróciæ jego adres (uwaga - nie jest tu wymagany malloc!)
{
	Node * core = root;
	while (core->Next != root)
	{
		core = core->Next;
	}
	return core;
}
void Add(Node* root, int value)//dodaje wêze³ do listy, której KORZEÑ jest przekazany jako parametr, do znalezienia koñca listy nale¿y u¿yæ metody GetTail() z powy¿ej
{
	Node *core_new = (Node*)malloc(sizeof(Node));
	GetTail(root)->Next = core_new;
	core_new->Value = value;
	core_new->Next = root;
}
void PrintList(Node* root)// metoda powinna wypisaæ listê, maj¹c tylko jej korzeñ. Nale¿y u¿yæ GetTail() do okreœlenia, kiedy zakoñczyæ wypisywanie
{
	Node * core = root;
	Node * tail = GetTail(root);
	printf("%d\n", core->Value);
	while (core != tail)
	{
		core = core->Next;
		printf("%d\n", core->Value);
	}
}
void RemoveNode(Node * root, int value) // metoda powinna usun¹æ wêze³ o WARTOŒCI podanej jako parametr, maj¹c tylko korzeñ listy. UWAGA - nale¿y usun¹æ wêze³, zwolniæ pamiêæ po nim i nie naruszyæ integralnoœci listy (powinna nast¹piæ zmiana nastêpnika wêz³a PRZED usuwanym wêz³em, na zasadzie: 2->4->8->16->2->(…) , usuwamy wêze³ 4, nowa lista: 2->8->16->2->(…)
{										//UWAGA-nale¿y usun¹æ wêze³, zwolniæ pamiêæpo nim i nie naruszaæ integralnoœci listy
#if 0
	Node *temp_f = root;
	Node *temp_s = root;
	temp_f = temp_s->Next;

	do
	{
		if (temp_f->Value = value)
		{
			temp_f->Next = temp_s->Next;
			free(temp_s);
		}
		else
		{
			temp_s = temp_f;
			temp_s = temp_s->Next;
		}
	} while (temp_s != root);
#endif	
	Node * core = root;
	if (core->Value == value)
	{
		Node*tail = GetTail(root);
		tail->Next = core->Next;
		Node * core_temp = core;
		core = core->Next = root;
		free(core_temp);
	}
	while (core->Next != root)
	{
		if (core->Next->Value == value)
		{
			Node * core_temp = core->Next;
			core->Next = core_temp->Next;
			free(core_temp);
		}
		core = core->Next;
	}

}
void FreeList(Node * root) // metoda czyœci pamiêæ po liœcie, usuwaj¹c wszystkie wêz³y metod¹ free()
{
	Node * core = root;
	Node * next;
	do {
		next = core->Next;
		free(core);
		core = next;
	} while (next != root);
}
int Count(Node *root) // metoda zwraca rozmiar listy
{
	int i = 1;
	Node *core = root;
	for (i; core->Next != root; i++)
	{
		core = core->Next;
	}
	return i;
}
//zad 1 .2
/*
typedef struct Student Student;
typedef struct Node Node;
struct Student
{
	int Age;
	int Height;
	int Semester;

};

struct Node
{
	int Value;
	Node *Next;
};

Student* StudentCreate(int age, int height, int semestr)
{
	Student *student = (Student*)malloc(sizeof(Student));
	student->Age = age;
	student->Semester = height;
	student->Height = semestr;
	return student;
}

void PrintStudent(Student *s)
{
	printf("Wiek: %dlat\nSemestr: %d\nWysokosc %dcm\n", s->Age, s->Semester, s->Height);

}
bool AreEqueal(Student * stu1, Student * stu2)
{
	bool equeal = true;
	if (stu1->Age != stu2->Age)
		equeal = false;
	if (stu1->Semester != stu2->Semester)
		equeal = false;
	if (stu1->Height != stu2->Height)
		equeal = false;

	return equeal;
}
int main() {
	printf("Zadanie 1\n");
	{
		Student *s = StudentCreate(19, 3, 195);
		PrintStudent(s);
		free(s);
		system("pause");
	}
}
*/
//zad 1.2
/*
typedef struct Student Student;
typedef struct Node Node;
struct Student
{
	int Age;
	int Height;
	int Semester;

};

Student* StudentCreate(int age, int height, int semestr)
{
	Student *student = (Student*)malloc(sizeof(Student));
	student->Age = age;
	student->Semester = height;
	student->Height = semestr;
	return student;
}

void PrintStudent(Student *stu)
{
	printf("Wiek: %dlat\nSemestr: %d\nWysokosc %dcm\n", stu->Age, stu->Semester, stu->Height);

}
bool AreEqueal(Student * stu1, Student * stu2)
{
	bool equeal = true;
	if (stu1->Age != stu2->Age)
		equeal = false;
	if (stu1->Semester != stu2->Semester)
		equeal = false;
	if (stu1->Height != stu2->Height)
		equeal = false;

	return equeal;
}

int main() {
	printf("Zadanie 1\n");
	{
		Student *stu1, *stu2;
		int wiek;
		int wz;
		int sem;
		printf("Dane studentow:\n"); 
		printf("pierwszy student, wiek:\n"); scanf_s("%d", &wiek);
		printf("pierwszy student, semestr:\n"); scanf_s("%d", &sem);
		printf("pierwszy student, wzrost:\n"); scanf_s("%d", &wz);
		stu1 = StudentCreate(wiek, sem, wz);
		printf("drugi student, wiek:\n"); scanf_s("%d", &wiek);
		printf("drugi semestr, semestr:\n"); scanf_s("%d", &sem);
		printf("drugi semestr, wzrost:\n"); scanf_s("%d", &wz);
		stu2 = StudentCreate(wiek, sem, wz);
		PrintStudent(stu1);
		PrintStudent(stu2);

		if (AreEqueal(stu1, stu2) == true)
			printf("\ncos nie tak, wpisales identyczne dane\n");
		else
			printf("\nnie ok, wpisales roznych studentow\n");

		free(stu1);
		free(stu2);
	}
	system("pause");
}
*/
//zad 2
/*
int main(int argc, const char * argv[]) {

	Node * root = Create(2);
	PrintList(root); // 2

	Add(root, 4);
	Add(root, 8);
	Add(root, 16);
	PrintList(root); // 2 -> 4 -> 8 -> 16

	Add(root, 20);
	PrintList(root); // 2 -> 4 -> 8 -> 16 -> 20

	printf("Ostatni wezel ma wartosc %d", GetTail(root)->Value); // 20

	Add(root, 16);
	PrintList(root); // 2 -> 4 -> 8 -> 16 -> 20 -> 16
	printf("%d", Count(root)); // 6

	RemoveNode(root, 8);
	PrintList(root); // 2 -> 4 -> 16 -> 20 -> 16
	RemoveNode(root, 10); // element nieistniej¹cy
	PrintList(root); // 2 -> 4 -> 16 -> 20 -> 16
	RemoveNode(root, 16); // usuñ wszystkie wêz³y o wartoœci 16
	PrintList(root); // 2 -> 4 -> 20
	printf("%d", Count(root)); // 3

	FreeList(root); // zwolnienie pamiêci na wszystkie wêz³y.
	PrintList(root); // (nic, lista niezaalokowana)

	return 0;
}
*/
//zad 3.1
/* 
main()
{
	int z;
	FILE *fp = fopen("numbers.txt", "r+");
	if (fp != NULL)
	{
		fclose_s(fp); 
		return true;
	}
	else
		return false;
	printf("wprowdz liczby, liczba 0 konczy program");
	while (z != 0)
	{
		scanf_s("%d", &z);
		if (z != 0)
		{
			fprintf(fp, "%d ", z);
		}

	}
	fclose_s(fp);
	fp = fopen_s("numbers.txt", "r");
	printf("\n\n Dane ktore zostaly zapisane do pliku to:");
	while (fscanf_s(z, "%d", &z) != EOF)
	{
		printf("%d ", z);
	}
	fclose_s(fp);
}

*/
//zad 3.2
/*
main()
{
	int u;
	FILE *fp;
	fp = fopen_s("numbers.txt", "r+");
	fscanf_s(fp, "%d", &u);
	Node * root = Create(u);
	while (fscanf_s(fp, "%d", &u) != EOF)
	{
		Add(root, u);
	}
	PrintList(root);
}
*/

//zad3.3
main()
	{
		int k, l, m;
		int	data;
		FILE *fp;
		fp = fopen("numbers.txt", "r");
		FILE *fp2;
		fp2 = fopen("sorted.txt", "w");
		int array[sizeof(fp)];
		for (k = 0; fscanf(fp, "%d", &data) != EOF; k++)
		{
			array[k] = data;
		}data = array[k];
		for (k = 0; k < data - 1; k++)
		{
			printf("Wartosc poczatkowa %d\n", array[k]);
			for (l = 0; l < data - 1 - k; l++)

			{
				if (array[l] > array[l + 1])
				{
					m = array[l + 1];
					array[l + 1] = array[l];
					array[l] = m;
					printf("Wartosc koncowa %d\n", m);
				}

			}
			fclose(fp);
			fclose(fp2);
		}

	}
	system("pause");
	return 0;
}
}