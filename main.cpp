#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Papich.h"
#include "public.h"
#include "private.h"
#include"protected.h"


using namespace std;

int main()
{
	system("chcp 1251");

	int user_value = 0;
	char menu_choise;
	char modificator_choise;


	do
	{
		system("cls");
		cout << "Выберите модификатор наследование: " << endl;
		cout << "1) Public" << endl;
		cout << "2) Private" << endl;
		cout << "3) Protected" << endl;
		cout << "4) Выход" << endl;

		cin >> modificator_choise;

		switch (modificator_choise)
		{
		case '1':
		{
			papich_pablic q1_public;
			papich_pablic q_copy_public;// создание очереди типа класс для создания очереди
			papich_pablic q_new_public;//создание очереди типа класс для слияния очереди
			papich_pablic task_public;// подсчет среднего гармонического
			do {
				system("cls");
				cout << "1) Добавить элемент в очередь" << endl;
				cout << "2) Удалить элемент из очереди" << endl;
				cout << "3) Вывести очередь на экран" << endl;
				cout << "4) Полное очищение очереди" << endl;
				cout << "5) Сдлеать копию очереди" << endl;
				cout << "6) Сделать слияние очередей" << endl;
				cout << "7) Подсчет среднего гармонического" << endl;
				cout << "8) Выход" << endl;
				cout << "Выберите действие: ";
				cin >> menu_choise;

				switch (menu_choise)
				{
				case '1':
					system("cls");
					cout << "Введите значение элемента:" << endl;
					cout << "...";
					cin >> user_value;
					q1_public.add(user_value);
					break;
				case '2':
					system("cls");
					q1_public.del();
					cout << "Элемент был удален!" << endl;
					system("Pause");
					break;
				case '3':
					system("cls");
					q1_public.print();
					cout << "Очередь на экране!" << endl;
					system("Pause");
					break;
				case'4':
					system("cls");
					q1_public.clear();
					cout << "Полное очищение очереди" << endl;
					system("Pause");
					break;
				case '5':
					system("cls");
					q_copy_public.copy(q1_public);
					cout << "Копия была сделана!!!" << endl;
					system("Pause");
					break;
				case'6':
					system("cls");
					q_new_public.marge(q1_public, q_copy_public);
					q_new_public.print();
					cout << "Очереди были слиты" << endl;
					system("Pause");
					break;
				case'7':
					system("cls");
					cout << "Среднее гармоническое элементов очереди = " << q1_public.task_public() << endl;
					system("Pause");
					break;


				case'8':
					menu_choise = 7;
					break;

				default:
					break;
				}

			} while (menu_choise != 7);

			break;
		}

		case '2':
		{
			papich_private q1_private;
			papich_private q_copy_private;// создание очереди типа класс для создания очереди
			papich_private q_new_private;//создание очереди типа класс для слияния очереди
			papich_private task_private; // подсчет среднего гармонического
			do {
				system("cls");
				cout << "1) Добавить элемент в очередь" << endl;
				cout << "2) Удалить элемент из очереди" << endl;
				cout << "3) Вывести очередь на экран" << endl;
				cout << "4) Полное очищение очереди" << endl;
				cout << "5) Сдлеать копию очереди" << endl;
				cout << "6) Сделать слияние очередей" << endl;
				cout << "7) Подсчет среднего гармонического" << endl;
				cout << "8) Выход" << endl;
				cout << "Выберите действие: ";
				cin >> menu_choise;

				switch (menu_choise)
				{
				case '1':
					system("cls");
					cout << "Введите значение элемента:" << endl;
					cout << "...";
					cin >> user_value;
					q1_private.add_private(user_value);
					break;
				case '2':
					system("cls");
					q1_private.del_private();
					cout << "Элемент был удален!" << endl;
					system("Pause");
					break;
				case '3':
					system("cls");
					q1_private.print_private();
					cout << "Очередь на экране!" << endl;
					system("Pause");
					break;
				case'4':
					system("cls");
					q1_private.clear_private();
					cout << "Полное очищение очереди" << endl;
					system("Pause");
					break;
				case '5':
					system("cls");
					q_copy_private.copy_private(q1_private);
					cout << "Копия была сделана!!!" << endl;
					system("Pause");
					break;
				case'6':
					system("cls");
					q_new_private.marge_private(q1_private, q_copy_private);
					q_new_private.print_private();
					cout << "Очереди были слиты" << endl;
					system("Pause");
					break;
				case'7':
					system("cls");
					cout << "Среднее гармоническое элементов очереди = " << q1_private.task_private() << endl;
					system("Pause");
					break;
					
				case'8':
					menu_choise = 7;
					break;

				default:
					break;
				}

			} while (menu_choise != 7);

			break;

		}

		case '3':
		{
			papich_protected q1_protected;
			papich_protected q_copy_protected;// создание очереди типа класс для создания очереди
			papich_protected q_new_protected;//создание очереди типа класс для слияния очереди
			papich_protected task_protected;// подсчет среденего гармонического
			do {
				system("cls");
				cout << "1) Добавить элемент в очередь" << endl;
				cout << "2) Удалить элемент из очереди" << endl;
				cout << "3) Вывести очередь на экран" << endl;
				cout << "4) Полное очищение очереди" << endl;
				cout << "5) Сдлеать копию очереди" << endl;
				cout << "6) Сделать слияние очередей" << endl;
				cout << "7) Подсчет среднего гармонического" << endl;
				cout << "8) Выход" << endl;
				cout << "Выберите действие: ";
				cin >> menu_choise;

				switch (menu_choise)
				{
				case '1':
					system("cls");
					cout << "Введите значение элемента:" << endl;
					cout << "...";
					cin >> user_value;
					q1_protected.add_protected(user_value);
					break;
				case '2':
					system("cls");
					q1_protected.del_protected();
					cout << "Элемент был удален!" << endl;
					system("Pause");
					break;
				case '3':
					system("cls");
					q1_protected.print_protected();
					cout << "Очередь на экране!" << endl;
					system("Pause");
					break;
				case'4':
					system("cls");
					q1_protected.clear_protected();
					cout << "Полное очищение очереди" << endl;
					system("Pause");
					break;
				case '5':
					system("cls");
					q_copy_protected.copy_protected(q1_protected);
					cout << "Копия была сделана!!!" << endl;
					system("Pause");
					break;
				case'6':
					system("cls");
					q_new_protected.marge_protected(q1_protected, q_copy_protected);
					q_new_protected.print_protected();
					cout << "Очереди были слиты" << endl;
					system("Pause");
					break;
				case'7':
					system("cls");
					cout << "Среднее гармоническое элементов очереди = " << q1_protected.task_protected() << endl;
					system("Pause");
					break;

				case'8':
					menu_choise = 7;
					break;

				default:
					break;
				}

			} while (menu_choise != 7);

		}
		case'4':
			system("cls");
			modificator_choise = 4;
			break;
		}
		

	}while (modificator_choise != 4);
}

	