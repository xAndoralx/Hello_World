#include <iostream>
using namespace std;
void rand(int array[2][6])
{
	srand(time(NULL));
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
			array[i][j] = rand() % 100;
	}
}
void output(int array[2][6])
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}
void menu()
{
	cout << "1. вправо\n";
	cout << "2. влево\n";
	cout << "3. вверх\n";
	cout << "4. вниз\n";
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int array1[2][6];
	int array2[2][6];
	rand(array1);
	output(array1);
	menu();
	int naprav;
	cin >> naprav;
	cout << "Cдвиг равен: ";
	int next;
	cin >> next;
	if (next > 6)
		next = next % 6;
	if (naprav == 1)
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (6 - next + j > 5)
				{
					array2[i][j] = array1[i][j - next];
				}
				else
					array2[i][j] = array1[i][6 - j - next];
			}
		}
	}
	else if (naprav == 2)
	else if (naprav == 3)
	else if (naprav == 4)
}
/*
int Max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int Max(int a, int b, int c)
{
	if (a > b && a > c)
		return a;
	else
		if (b > a && b > c)
		return b;
	else
		if (c > a && c > b)
		return c;
}
int main(int a, int b, int c)
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите первое число ";
	cin >> a;
	cout << "Введите второе число ";
	cin >> b;
	cout << Max(a, b) << endl;
	cout << "Введите третье число ";
	cin >> c;
	cout << Max (a, b, c) << endl;
}
*/
/*
void input(int x)
{
	srand(time(NULL))
	for (int i = 0; i < 10; i++)
	{
				a[i] = rand()%100;
	}
}
int Sort(int a[10])
{
	for (int i = 0; i < 10; i++)
	{
		int j = i;
		for (j; j < 10; j++)
		{
			if (a[i] > a[j])
			{
				swap(a[i], a[j])
			}
		}
	}
}
void Output(int a[10])
{
	for (int i=0; i < 10; i++)
} */
/*void input(int x)
{
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand();
	}
}
int max (int a[10])
{
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
}
int output (int a[10])
{
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
}
int main()
{
	int array[10];
	input(array)
}
*/
/*
int Inpunt()
{
	int a;
	cin >> a;
	return a;
}
char Inpunt_sym ()
{
	char a;
	cin >> a;
	return a;
}
void ground (int a, int b, char sym)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if ((i == 0) || (i >= a - 1) || (b - 1) || (j == 0))
			cout << sym;
			else
				cout << " ";
		}
		cout << endl;
	}
}
int main()
{
	int height = Inpunt();
	int wight = Inpunt();
	char sym = Inpunt_sym();
	ground(height, wight, sym);
}
*/
/*
int Inpunt()
{
	int x;
	cin >> x;
	return x;
}
int Sum(int a, int b)
{
	int Sum;
	Sum = a + b;
	return Sum;
}
int Min(int a, int b)
{
	int Min;
	Min = a - b;
	return Min;
}
int Мultiplication(int a, int b)
{
	int Мultiplication;
	Мultiplication = a * b;
	return Мultiplication;
}
int Division(int a, int b)
{
	int Division;
	Division = a / b;
	return Division;
}
int main()
{
	int x = Inpunt();
	int y = Inpunt();
	cout << Sum(x, y)<<endl;
	cout << Min(x, y) << endl;
	cout << Мultiplication(x, y) << endl;
	cout << Division(x, y) << endl;
}*/
/*
void Greeting()
{
	cout << "Hello Man\n";
}
void Name()
{
	cout << "My name is Evgenii\n";
}
void Phone()
{
	cout << "My number +79220017854\n";
}
int main()
{
	Greeting();
	Name();
	Phone();
}
*/
	//тип_переменная название = значение
	// или
	// тип_переменная название
	/*
	int first = 5;
	float second = 1.5;
	string text = "some text";
	char sym = '*';
	char tab = '\t';
	//тип_переменная const название =7;
	int const DAYS_IN_WEEK = 7;

	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
	cout << "text = " << text << endl;
	cout << "sym = " << sym << endl;
	cout << "tab = " << tab << endl;
	return 0;
	*/
	/*
	int H, m, s, N;
	cin >> N;
	H = N / 3600 % 24;
	m = N / 60 % 60;
	s = N % 60;
	cout <<;

}
*/
/*
float x = 5.6;
cout << "x =  " << trunc(x) << endl;
float y = -3.6;
cout << "y = " << trunc(y) << endl;

cout << "x =  " << trunc(x) << endl;
cout << "y = " << trunc(y) << endl;

cout << "x =  " << trunc(x) << endl;
cout << "y = " << trunc(y) << endl;
*/
/*
float x = 10.5;
cout << (int)x;
int y = x;
*/
/*
int a = 10;
int b = 5;
cout << (a < b) << endl;
cout << (a > b) << endl;

int x = 10;
int y = 10;
cout << (x >= y) << endl;
*/
/*int a, b, c;
cin >> a >> b >> c;
if ((a > b) && (a > c));
{
	cout << a << endl;
}
if ((b > a) && (b > c))
{
	cout << b << endl;
}
else
	cout << c;
	*/
	/*
	int i = 0;
	i++;// i=i+1;
	cout << i;
	int i = 0;
	i--;// i=i+1;
	cout << i;
	int i = 0;
	i+-;// i=i+1;
	cout << i;
*/
/*int i, n, sum=0;
cin >> n;
for (i = 1; i <= n; i++)
{
	sum=sum + i;
}
cout << "sum" << sum;
*/
/*for (int i = 0; i < 7; i++)
{
	for (int j = 0; j < 10; j++)
	{
		cout << "|###|";
	}
	cout << endl;
}
*/
/*for (int i = 0; i <= 19; i++)
{
	for (int j = 0; j <= 19; j++)
	{
		if (i == j)
			cout << "*";
		else
			cout << " ";
	}
	cout << endl;
*/
/*for (int i = 0; i < 10; i++)
{
	for (int j = 0; j < 10; j++)
	{
		if (i + j >= 9 && i >= j)
			cout << "|***|";
		else
			cout << "     ";
	}
	cout << endl;
}
for (int i = 0; i < 10; i++)
{
	for (int j = 0; j < 10; j++)
	{
			cout << "|###|";
	}
	cout << endl;
}
*/
/*int A, B;
cout << "Введите любое число: ";
	cin >> A;
cout << "Ответ ";
for (B = 1; B <= A; B++);
{
	if (A % B * B == 0 && A % B * B * B != 0)
		cout << B << endl;
}
return 0;
*/
/*
int student [5];
//Ввод данных
for (int i = 0; i < 5; i++)
	{
	cout << i << " element is = ";
	cin >> student[i];
	}
	//main
for (int i = 0; i < 5; i++)
	{
	If ( student [i] > 0)
	cout <<  student [i] << " ";
	}
	*/
	/*int student[12];
	cout << "Введите номер студента ";
	int k;
	cin >> k;
	//Ввод данных
	for (int i = 0; i < 12; i++)
	{
		cout << i + 1 << ") ";
		cin >> student[i];

	}
	//main

	for (int i = 0; i < 12; i++)
	{
		if (i+1== k)
			cout << student[i];
	}
	*/
	/*int limbo [5];
	int sum = 0;
	cout << "Введите число" << endl;
	//Ввод данных
	for (int i = 0; i < 5; i++)
		{
		cout << i + 1 << ") ";
		cin >> limbo[i];
		}
	for (int i = 0; i < 5; i++)
		{
		if (limbo[i] < 0)
			sum = sum + limbo[i];
		}
	cout << sum;
	*/
	/*int student[10];
	int sum = 0;
	cout << "Введите число" << endl;
	//Ввод данных
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ") ";
		cin >> student[i];
	}
	//main
	int max = student[0];
	for (int i = 0; i < 10; i++)
	{
		if (student[i] > max)
		{
			max = student[i];
		}
	}
	cout << "max = " << max;
	*/
	/*int student[10];
	int sum = 0;
	cout << "Введите число" << endl;
	//Ввод данных
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ") ";
		cin >> student[i];
	}
	//main
	int min = student[0];
	for (int i = 0; i < 10; i++)
	{
		if (student[i] < min)
		{
			min = student[i];
		}
	}
	cout << "min= " << min << endl;
	*/
	//цвет консоли 
	/*
	system("color 09");
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 10; j++)
		{
			if ((i == 0 || i == 10) || (j == 0 || j == 10))
			{
				cout << "*"<<" ";
			}
			else
				cout << "  ";
		}
		cout << endl;

	}
	*/
	/*int array[200];
	for (int i = 0; i < 200; i++)
	{
		array[i] = rand();
	}
	for (int i : array)
		cout << i << " ";
	return 0;
	*/
	/*int a[3][4];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i][j] = rand();
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	int max = a[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
		cout << endl;
	}
	cout << max;
	*/
/*
vector <int> v(10);
for (int x : v)
cout << x << " ";

cout << endl;

int array[10];
for (int x : array)
	cout << x << " ";
	*/
