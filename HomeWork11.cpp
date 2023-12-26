#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <cstdlib> 
#include <iomanip> 
#include <ctime> 
#include <cmath> 
using namespace std;



int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	int task = 0;
	cout << "Введите номер задания ";
	cin >> task;


	switch (task)
	{
	case 1:
	{/*
	  Напишите программу для хранения информации об учащемся школы 
	  (Имя, Фамилия, год рождения, класс (параллель, литера)). 
	  Напишите функцию, которая будет переводить обучающегося в следующий класс. 
	  Программа должна запрашивать данные об учащимся с клавиатуры, 
	  запрашивать на сколько классов перевести (предусмотрите невозможность перевода 
	  в класс больше чем 11, в этом случае не изменять данные структуры). 
	  Программа должна выводить:
      Учащийся <Имя> <Фамилия> <год рождения> года рождения переведен в <номер класса> <литера класса> класс
	 */

		break;
	}
	case 2:
	{cout << "Задание № 4"<< endl;
		/*
	 Создайте структуру для хранения координат точки в трехмерном пространстве (x, y z).
	 Создайте массив из трех таких структур, ввод данных запросите с клавиатуры.
	 Выведите сумму координат x всех точек.
	 */
	    int sum = 0;
		const int SIZE = 3;
		struct point              // Создаем структуру
		{
			int x;
			int y;
			int z;
			
		}player[SIZE];            
		
		
		cout << "Введите координаты " << SIZE << " - х точек"<< endl;
		for (int i = 0; i < SIZE; i++)
		{
			cout << "Координаты: "<< i +1 << "- ой точки:   "<< endl;
			cout << "x - ";
			cin >> player->x;
			cout << "y - ";
			cin >> player->y;
			cout << "z - ";
			cin >> player->z;
			sum += player->x;              // Сумма точек х 
		}
		/*for (int i = 0; i < SIZE; i++)
		{
			cout << player[SIZE];
		}*/

		cout<<"Сумма точек координаты х = " << sum;

		break;
	}
	case 3:
	{/*
	 Создайте структуру для хранения координат точки в двумерном пространстве
	 и цвета точки(x, y, цвет), цвет задается одной латинской буквой. 
	 Создайте массив из пяти таких структур, ввод данных запросите с клавиатуры. 
	 Выведите количество точек красного цвета (r), координата x которых меньше 10.
	 */
		const int SIZE = 5;
		int count_red = 0;
		int sum = 0;
		struct garland
		{
			int x;
			int y;
			char color;

		};
		garland myGarland[SIZE];
		cout << "Введите координаты " << SIZE << " точек (x, y)  и цвет (R, G, B)" << endl;
		for (int i = 0; i < SIZE; i++)
		{
			cout << "Координаты: " << i + 1 << "- ой точки:   " << endl;
			cout << "x - ";
			cin >> myGarland->x;
			cout << "y - ";
			cin >> myGarland->y;
			cout << "цвет - ";
			cin >> myGarland[i].color;
			sum += myGarland->x;

		}
		

			for (int i = 0; i < SIZE; i++)
			{
				if (myGarland[i].color == 'R' && myGarland[i].x < 10)         // Проверка выполнения условия
				{
					count_red++;                                              // Счетчик
				}
			}
		

		cout<< "Количество точек красного цвета (R)= " << count_red << endl;
		cout << "Сумма точек 'R.x'= " << sum;                                 //Вывод суммы просто для себя
		break;
	}

	case 4:
	{
		/*
		Создайте структуру для хранения информации о студенте (имя, фамилия, номер класса). 
		Создайте массив из пяти таких структур, ввод данных запросите с клавиатуры. 
		Программа должна запрашивать ввод класса и выводить в столбик с новой строки 
		фамилии учащихся запрашиваемого класса.
		*/

		const int SIZE = 3;
		int num_classroom = 0;
		struct student
		{
			char name[10];
			char surname[10];
			int  classroom;
		} student_vuz[SIZE];

		cout << "Введите Имя, Фамилию, номер класса " << SIZE<< " студентов"<< endl;
		for (int i = 0; i < SIZE; i++)
		{
			cout << "Имя" << endl;
			cin >> student_vuz[i].name;
			cout << "Фамилия" << endl;
			cin >> student_vuz[i].surname;
			cout << "Класс" << endl;
			cin >> student_vuz[i].classroom;

		}

		cout << "Введите номер класса ";
		cin >> num_classroom;
		cout << "Ученики " << num_classroom << " класса: " << endl;
		for (int i = 0; i < SIZE; i++)
		{
			
		  if ( student_vuz[i].classroom == num_classroom  )
			  {
			    cout << student_vuz[i].surname<< endl;
			  } 
		}
		
		break;
	}
	case 5:
	{
		/*
		Создайте структуру для хранения данных о книге (Название, Автор, цена, год издания). 
		Создайте массив из пяти таких структур, ввод данных запросите с клавиатуры. 
		Программа должна запрашивать год издания и выводить в отдельных строках 
		количество книг выпущенных после указанного года и их стоимость (сумму цен).
		*/
		cout << "Задание № 5" << endl;
		const int SIZE = 2;
		int request_year = 0;
		int count_lib = 0;
		int lib_sum = 0;
		struct lib
		{ 
			char  title[20] ;
			string autor ;
			int price;
			int year;
		}myLib[SIZE];
		 

		for(int i = 0; i < SIZE; i++)
		{
			cout << "Укажите название книги" << endl;
			//cin >> myLib[i].title;
			cin.getline(myLib[i].title,20);
			
			cout << "Укажedfeeите автора данного произведения" << endl;
			cin >> myLib[i].autor;
			cout << "Укажите стоимость книги" << endl;
			cin >> myLib[i].price;
			cout << "Укажите год выпуска в тираж" << endl;
			cin >> myLib[i].year;
		}

		cout << "Укажите искомый год выпуска книги"<< endl;
		cin >> request_year;
		for (int i = 0; i < SIZE; i++)
		{
			if (myLib[i].year == request_year  )
			{
				count_lib++;
				lib_sum += myLib[i].price;
			}


		}
			
		cout<< "В каталоге книг: " << count_lib << " шт " << endl;
		cout<< "Сумма книг:= " << lib_sum;
		






		break;
	}
	case 6:
	{
		/*
		Создайте структуру для хранения координат точки в двумерном пространстве. 
		Создайте массив из 5 таких структур. 
		Программа должна запрашивать координаты точки А и выводить координаты той точки из массива, 
		расстояние между которой и точкой А минимально. 
		Результат вывести в формате
         x=
         y=
		*/
		const int SIZE = 3;
		struct point { int x, y; };
		point A, point[SIZE]; 
		int i, imin;
		double r,
			//rmin = pow(2., (int)3);
		rmin = 1e303;
		cout << "rmin = " << rmin << endl;
		//cout << "rmin1 = " << rmin1 << endl;
		cout << "Введите координаты точек:" << endl;
		for (int i = 0; i < SIZE; i++)
		{
			cout << "Координаты: " << i + 1 << "- ой точки:   " << endl;
			cout << "x= ";
			cin >> point[i].x;
			cout << "y= ";
			cin >> point[i].y;
					
		}
		for (int i = 0; i < SIZE; i++)
		{
			cout << i + 1 << "): ";
			cout << "x= " << point[i].x << " " << "y= " << point[i].y << " " << endl;
		}

		cout << "Введите координаты точки А:" << endl;
		cout << "x = ";
		cin >> A.x;
		cout << "y = "; 
		cin >> A.y;
		for (i = 0; i < SIZE; i++)
		{
			r = pow(point[i].x - A.x, 2) + pow(point[i].y - A.y, 2);
			cout << "  r  " << r << " < " << rmin << endl;
			if (r < rmin) 
			{ 
				rmin = r;  // При первом же проходе в цикле записываем результат 'r'  в 'rmin' 
			               
				imin = i;  // Счетчик для определения номера координаты
			}   
			
			cout << imin << " " << i;

		}

		cout << " Сумма r = " << r << endl;
		cout << "rmin = " << rmin << endl;
		//cout << "rmin1 = " << rmin1 << endl;
		cout << "Точка находящаяся на минимальном расстоянии от точки  A это точка № "
			<< imin + 1 << ".\nКоординаты точки № " << imin + 1 << ":\nx =" << setw(3) <<
			point[imin].x << "\ny =" << setw(3) << point[imin].y << endl;
		    cin.get(); cin.get(); return 0;




		break;
	}

	default:

		cout << "Нет такого задания !";
		break;
	}

}








/*
double r;

		int i, imin, rmin = 1e303;
		const int SIZE = 3;
		struct point
		{
			double x;
			double y;

		}myPoint[SIZE],myPoit_A ;
		cout << "Введите координаты точек:" << endl;
		for (int i = 0; i < SIZE; i++)
		{
			cout << "Координаты: " << i + 1 << "- ой точки:   " << endl;
			cout << "x= ";
			cin >> myPoint[i].x;
			cout << "y= ";
			cin >> myPoint[i].y;
		}
		for (int i = 0; i < SIZE; i++)
		{
			cout << i + 1 << "): ";
			cout<<"x= " << myPoint[i].x << " " << "y= " << myPoint[i].y << " " << endl;
		}


		cout << "Введите координаты точки А:" << endl;
			cout << "x= ";
			cin >> myPoit_A.x;
			cout << "y= ";
			cin >> myPoit_A.y;
			cout << "Точка А "<<"x= "<< myPoit_A.x<< " y= "<< myPoit_A.y << endl;
			for (int i = 0; i < SIZE; i++)
			{
				r = pow(myPoint[i].x - myPoit_A.x, 2) + pow(myPoint[i].y - myPoit_A.y, 2);
				if (r < rmin)
				{
					rmin = r;
					imin = SIZE;
				}
			}

			cout << r;
			cout << "The point at the minimum distance from point A is point "
				<< imin + 1 << ".\nIts coordinates are:\nx =" << setw(20) <<
				myPoint[imin].x << "\ny =" << setw(20) << myPoint[imin].y << endl;
			cin.get(); cin.get(); return 0;
*/













