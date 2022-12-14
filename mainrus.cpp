#include <iostream>
#include <ctime>
#include <fstream>
#include <ctime>

using namespace std;

int cn = 0; //Количество колод
int minlevel = 0; //Минимальный уровень в диапазоне.
int maxlevel = 0; //Максимальный уровень в диапазоне.
int fnumbers = 0; //Количество фей в колоде.
int fidn[16] = { 0,1,2,9,10,11,18,19,26,50,51,57,58,61,75,76 }; //Природа.
int fida[8] = { 12,13,14,40,41,42,54,60 }; //Воздух.
int fidw[7] = { 6,7,8,23,24,25,64 }; //Вода.
int fidl[3] = { 72,73,74 }; //Свет.
int fide[5] = { 29,30,43,44,45 }; //Энергия.
int fidp[6] = { 27,28,46,47,48,49 }; //Сай.
int fids[8] = { 3,4,5,20,21,22,62,63 }; //Камень.
int fidi[4] = { 34,35,36,52 }; //Лёд.
int fidf[6] = { 31,32,33,55,56,59 }; //Огонь.
int fidd[3] = { 69,70,71 }; //Тьма.
int fidc[8] = { 15,16,17,37,38,39,53,68 }; //Хаос.
int fidm[3] = { 65,66,67 }; //Металл.
ofstream fc("APC.txt"); //Файл для записи.

/*
0 - Природа.
1 - Воздух.
2 - Вода.
3 - Свет.
4 - Энергия.
5 - Сай.
6 - Камень.
7 - Лёд.
8 - Огонь.
9 - Тьма.
10 - Хаос.
11 - Металл.
*/

#include <iostream>
#include <ctime>
#include <fstream>
#include <ctime>

using namespace std;

int cn = 0; //Количество колод
int minlevel = 0; //Минимальный уровень в диапазоне.
int maxlevel = 0; //Максимальный уровень в диапазоне.
int fnumbers = 0; //Количество фей в колоде.
int fidn[16] = { 0,1,2,9,10,11,18,19,26,50,51,57,58,61,75,76 }; //Природа.
int fida[8] = { 12,13,14,40,41,42,54,60 }; //Воздух.
int fidw[7] = { 6,7,8,23,24,25,64 }; //Вода.
int fidl[3] = { 72,73,74 }; //Свет.
int fide[5] = { 29,30,43,44,45 }; //Энергия.
int fidp[6] = { 27,28,46,47,48,49 }; //Сай.
int fids[8] = { 3,4,5,20,21,22,62,63 }; //Камень.
int fidi[4] = { 34,35,36,52 }; //Лёд.
int fidf[6] = { 31,32,33,55,56,59 }; //Огонь.
int fidd[3] = { 69,70,71 }; //Тьма.
int fidc[8] = { 15,16,17,37,38,39,53,68 }; //Хаос.
int fidm[3] = { 65,66,67 }; //Металл.
ofstream fc("APC.txt"); //Файл для записи.

/*
0 - Природа.
1 - Воздух.
2 - Вода.
3 - Свет.
4 - Энергия.
5 - Сай.
6 - Камень.
7 - Лёд.
8 - Огонь.
9 - Тьма.
10 - Хаос.
11 - Металл.
*/

void magicf1n(int fn, int* a, int s) //Составление и запись колоды в файл.
{
	int st, l, f;
	srand(time(0));

	for (int i = 0; i < fn; i++)
	{
		cout << "Введите стихию: ";
		cin >> st; //Номер стихии.
		switch (st)
		{
		case 0: //Природа.
			l = a[rand() % s]; //Рандомный выбор уровня.
			f = fidn[rand() % 16]; //Рандомный выбор феи..
			break;
		case 1: //Воздух.
			l = a[rand() % s]; //Рандомный выбор уровня.
			f = fida[rand() % 8]; //Рандомный выбор феи.
			break;
		case 2: //Вода.
			l = a[rand() % s]; //Рандомный выбор уровня.
			f = fidw[rand() % 7]; //Рандомный выбор феи.
			break;
		case 3: //Свет.
			l = a[rand() % s]; //Рандомный выбор уровня.
			f = fidl[rand() % 3]; //Рандомный выбор феи.
			break;
		case 4: //Энергия.
			l = a[rand() % s]; //Рандомный выбор уровня.
			f = fide[rand() % 5]; //Рандомный выбор феи.
			break;
		case 5: //Сай.
			l = a[rand() % s]; //Рандомный выбор уровня.
			f = fidp[rand() % 6]; //Рандомный выбор феи.
			break;
		case 6: //Камень.
			l = a[rand() % s]; //Рандомный выбор уровня.
			f = fids[rand() % 8]; //Рандомный выбор феи.
			break;
		case 7: //Лёд.
			l = a[rand() % s]; //Рандомный выбор уровня.
			f = fidi[rand() % 4]; //Рандомный выбор феи.
			break;
		case 8: //Огонь.
			l = a[rand() % s]; //Рандомный выбор уровня.
			f = fidf[rand() % 6]; //Рандомный выбор феи.
			break;
		case 9: //Тьма.
			l = a[rand() % s]; //Рандомный выбор уровня.
			f = fidd[rand() % 3]; //Рандомный выбор феи.
			break;
		case 10: //Хаос.
			l = a[rand() % s]; //Рандомный выбор уровня.
			f = fidc[rand() % 8]; //Рандомный выбор феи.
			break;
		case 11: //Металл.
			l = a[rand() % s]; //Рандомный выбор уровня.
			f = fidm[rand() % 3]; //Рандомный выбор феи.
			break;
		}
		fc << "W." << f << "." << i << "." << l + 1 << "\n"; //Запись в файл феи.
	}
}


void col1(int minl, int maxl) //Один вариант колоды.
{
	int* a = new int[maxl - minl + 1]; //Диапазон уровней.
	int size = maxl - minl + 1; //Размер.

	//Запись диапазона.
	for (int i = 0; i < maxl - minl; i++)
		a[i] = minl + i; 
	a[maxl - minl] = maxl;

	cout << "Введите количество фей: ";
	cin >> fnumbers; //Количество фей.

	//Ограничения колод. 1 <= fnumbers <= 1000.
	if (fnumbers < 1) fnumbers = 1; 
	if (fnumbers > 5) fnumbers = 5;

	magicf1n(fnumbers, a, size);
}

void coln(int minl, int maxl, int cn) //Несколько вариантов колоды.
{
	int* a = new int[maxl - minl + 1]; //Диапазон уровней.
	int size = maxl - minl + 1; //Размер.

	//Запись диапазона.
	for (int i = 0; i < maxl - minl; i++)
		a[i] = minl + i;
	a[maxl - minl] = maxl;

	fc << "L." << cn << "\n"; //Вводная конструкция.
	for (int i = 0; i < cn; i++)
	{
		fc << "$." << i << "\n"; //Конструкция перед кадлым вариантом.
		cout << "Введите количество фей: ";
		cin >> fnumbers;

		//Ограничения колод. 1 <= fnumbers <= 1000.
		if (fnumbers < 1) fnumbers = 1;
		if (fnumbers > 5) fnumbers = 5;

		magicf1n(fnumbers, a, size); //Составление и запись колоды в файл.
		fc << "K." << cn << "\n"; //Промежуточная конструкция.
	}
	fc << "$." << cn << "\n"; //Конечная конструкция.
}

int main()
{
	setlocale(LC_ALL, "Rus"); //Включение русской мовы.
	cout << "Введите количество колод: ";
	cin >> cn; //Количество колод.

	//Ограничения колод. 1 <= cn <= 1000.
	if (cn < 1) cn = 1;
	if (cn > 1000) cn = 1000;

	cout << "Введите минимальный уровень в диапазоне: ";
	cin >> minlevel; //Минимальный уровень.
	cout << "Введите максимальный уровень в диапазоне: ";
	cin >> maxlevel; //Максимальный уровень.

	//Ограничения уровня. -1 <= (minlevel, maxlevel) <= 60.
	if (minlevel < -1) cn = -1;
	if (maxlevel > 60) cn = 60;

	if (cn == 1) col1(minlevel, maxlevel); //Один вариант колоды.
	else coln(minlevel, maxlevel, cn); //Несколько вариантов колоды.
}


void col1(int minl, int maxl) //Один вариант колоды.
{
	int* a = new int[maxl - minl + 1]; //Диапазон уровней.
	int size = maxl - minl + 1; //Размер.

	//Запись диапазона.
	for (int i = 0; i < maxl - minl; i++)
		a[i] = minl + i; 
	a[maxl - minl] = maxl;

	cout << "Введите количество фей: ";
	cin >> fnumbers; //Количество фей.

	//Ограничения колод. 1 <= fnumbers <= 1000.
	if (fnumbers < 1) fnumbers = 1; 
	if (fnumbers > 5) fnumbers = 5;

	magicf1n(fnumbers, a, size);
}

void coln(int minl, int maxl, int cn) //Несколько вариантов колоды.
{
	int* a = new int[maxl - minl + 1]; //Диапазон уровней.
	int size = maxl - minl + 1; //Размер.

	//Запись диапазона.
	for (int i = 0; i < maxl - minl; i++)
		a[i] = minl + i;
	a[maxl - minl] = maxl;

	fc << "L." << cn << "\n"; //Вводная конструкция.
	for (int i = 0; i < cn; i++)
	{
		fc << "$." << i << "\n"; //Конструкция перед кадлым вариантом.
		cout << "Введите количество фей: ";
		cin >> fnumbers;

		//Ограничения колод. 1 <= fnumbers <= 1000.
		if (fnumbers < 1) fnumbers = 1;
		if (fnumbers > 5) fnumbers = 5;

		magicf1n(fnumbers, a, size); //Составление и запись колоды в файл.
		fc << "K." << cn << "\n"; //Промежуточная конструкция.
	}
	fc << "$." << cn << "\n"; //Конечная конструкция.
}

int main()
{
	setlocale(LC_ALL, "Rus"); //Включение русской мовы.
	cout << "Введите количество колод: ";
	cin >> cn; //Количество колод.

	//Ограничения колод. 1 <= cn <= 1000.
	if (cn < 1) cn = 1;
	if (cn > 1000) cn = 1000;

	cout << "Введите минимальный уровень в диапазоне: ";
	cin >> minlevel; //Минимальный уровень.
	cout << "Введите максимальный уровень в диапазоне: ";
	cin >> maxlevel; //Максимальный уровень.

	//Ограничения уровня. -1 <= (minlevel, maxlevel) <= 60.
	if (minlevel < -1) cn = -1;
	if (maxlevel > 60) cn = 60;

	if (cn == 1) col1(minlevel, maxlevel); //Один вариант колоды.
	else coln(minlevel, maxlevel, cn); //Несколько вариантов колоды.
}
