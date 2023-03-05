#include<iostream>
using namespace std;


//#define LOGICAL_TYPES
//#define DATA_TUPES
//#define DELERATION_AND_INITIALISTION
//#define COFFEE

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Привет Data Tupes\n";
#if defined LOGACAL_TYPES
	cout << true << endl;
	cout << false << endl;
	cout << (bool)-0.0000000001 << endl;
#endif

#ifdef DATA_TUPES
	cout << "long long:\n";
	cout << sizeof(long long) << endl;;
	cout << "signed long long:" << LLONG_MIN << "..." << LLONG_MIN << endl;;
	cout << "unsigned long long:" << 0 << "..." << ULLONG_MAX << endl;
	cout << "\n-----------------------------------------------------------------------\n";



	cout << "float:\n";
	cout << FLT_MIN << "..." << FLT_MAX << endl;
	cout << "\n------------------------------------------------------------------------\n";
	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "..." << DBL_MAX << endl;
#endif // DEBUG

#ifdef DELERATION_AND_INITIALISTION
	int _1stPlace;
	double price_of_coffee;
	cout << price_of_coffee << endl;
	int a;
	int b = 0;
	int c;
	c = 0;
	int d;
	cout << "Введите число:" cin >> d;
#endif // DELERATION_AND_INITIALISTION

#ifdef COFFEE

	double price_of_coffe;
	int number_of_cups;
	cout << "Введите стоимость кофе: "; cin >> price_of_coffe;
	cout << "Введите стоимость чашек: "; cin >> number_of_cups;
	double total_price = price_of_coffe * number_of_cups;
	cout << "Общая стоимость:" << total_price << endl;

#endif // COFFEE

	int speed = 0;
	const int MAX_SPEED = 250;


	//#Литералы
	cout << .5 << endl;
	cout << sizeof(.5) << endl;
	cout << typeid(5.f).name() << endl;
	//5 - это числовая константа типа 'int'
	//5. - это числовая константа типа 'double'
	//.5 - это числовая константа типа 'double'
	//.5f - это числовая константа типа 'float'
	//.5ULL - это числовая константа типа '' unsigned long long

	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;

