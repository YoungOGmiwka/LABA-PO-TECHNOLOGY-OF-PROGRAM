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
		cout << "�������� ����������� ������������: " << endl;
		cout << "1) Public" << endl;
		cout << "2) Private" << endl;
		cout << "3) Protected" << endl;
		cout << "4) �����" << endl;

		cin >> modificator_choise;

		switch (modificator_choise)
		{
		case '1':
		{
			papich_pablic q1_public;
			papich_pablic q_copy_public;// �������� ������� ���� ����� ��� �������� �������
			papich_pablic q_new_public;//�������� ������� ���� ����� ��� ������� �������
			papich_pablic task_public;// ������� �������� ��������������
			do {
				system("cls");
				cout << "1) �������� ������� � �������" << endl;
				cout << "2) ������� ������� �� �������" << endl;
				cout << "3) ������� ������� �� �����" << endl;
				cout << "4) ������ �������� �������" << endl;
				cout << "5) ������� ����� �������" << endl;
				cout << "6) ������� ������� ��������" << endl;
				cout << "7) ������� �������� ��������������" << endl;
				cout << "8) �����" << endl;
				cout << "�������� ��������: ";
				cin >> menu_choise;

				switch (menu_choise)
				{
				case '1':
					system("cls");
					cout << "������� �������� ��������:" << endl;
					cout << "...";
					cin >> user_value;
					q1_public.add(user_value);
					break;
				case '2':
					system("cls");
					q1_public.del();
					cout << "������� ��� ������!" << endl;
					system("Pause");
					break;
				case '3':
					system("cls");
					q1_public.print();
					cout << "������� �� ������!" << endl;
					system("Pause");
					break;
				case'4':
					system("cls");
					q1_public.clear();
					cout << "������ �������� �������" << endl;
					system("Pause");
					break;
				case '5':
					system("cls");
					q_copy_public.copy(q1_public);
					cout << "����� ���� �������!!!" << endl;
					system("Pause");
					break;
				case'6':
					system("cls");
					q_new_public.marge(q1_public, q_copy_public);
					q_new_public.print();
					cout << "������� ���� �����" << endl;
					system("Pause");
					break;
				case'7':
					system("cls");
					cout << "������� ������������� ��������� ������� = " << q1_public.task_public() << endl;
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
			papich_private q_copy_private;// �������� ������� ���� ����� ��� �������� �������
			papich_private q_new_private;//�������� ������� ���� ����� ��� ������� �������
			papich_private task_private; // ������� �������� ��������������
			do {
				system("cls");
				cout << "1) �������� ������� � �������" << endl;
				cout << "2) ������� ������� �� �������" << endl;
				cout << "3) ������� ������� �� �����" << endl;
				cout << "4) ������ �������� �������" << endl;
				cout << "5) ������� ����� �������" << endl;
				cout << "6) ������� ������� ��������" << endl;
				cout << "7) ������� �������� ��������������" << endl;
				cout << "8) �����" << endl;
				cout << "�������� ��������: ";
				cin >> menu_choise;

				switch (menu_choise)
				{
				case '1':
					system("cls");
					cout << "������� �������� ��������:" << endl;
					cout << "...";
					cin >> user_value;
					q1_private.add_private(user_value);
					break;
				case '2':
					system("cls");
					q1_private.del_private();
					cout << "������� ��� ������!" << endl;
					system("Pause");
					break;
				case '3':
					system("cls");
					q1_private.print_private();
					cout << "������� �� ������!" << endl;
					system("Pause");
					break;
				case'4':
					system("cls");
					q1_private.clear_private();
					cout << "������ �������� �������" << endl;
					system("Pause");
					break;
				case '5':
					system("cls");
					q_copy_private.copy_private(q1_private);
					cout << "����� ���� �������!!!" << endl;
					system("Pause");
					break;
				case'6':
					system("cls");
					q_new_private.marge_private(q1_private, q_copy_private);
					q_new_private.print_private();
					cout << "������� ���� �����" << endl;
					system("Pause");
					break;
				case'7':
					system("cls");
					cout << "������� ������������� ��������� ������� = " << q1_private.task_private() << endl;
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
			papich_protected q_copy_protected;// �������� ������� ���� ����� ��� �������� �������
			papich_protected q_new_protected;//�������� ������� ���� ����� ��� ������� �������
			papich_protected task_protected;// ������� ��������� ��������������
			do {
				system("cls");
				cout << "1) �������� ������� � �������" << endl;
				cout << "2) ������� ������� �� �������" << endl;
				cout << "3) ������� ������� �� �����" << endl;
				cout << "4) ������ �������� �������" << endl;
				cout << "5) ������� ����� �������" << endl;
				cout << "6) ������� ������� ��������" << endl;
				cout << "7) ������� �������� ��������������" << endl;
				cout << "8) �����" << endl;
				cout << "�������� ��������: ";
				cin >> menu_choise;

				switch (menu_choise)
				{
				case '1':
					system("cls");
					cout << "������� �������� ��������:" << endl;
					cout << "...";
					cin >> user_value;
					q1_protected.add_protected(user_value);
					break;
				case '2':
					system("cls");
					q1_protected.del_protected();
					cout << "������� ��� ������!" << endl;
					system("Pause");
					break;
				case '3':
					system("cls");
					q1_protected.print_protected();
					cout << "������� �� ������!" << endl;
					system("Pause");
					break;
				case'4':
					system("cls");
					q1_protected.clear_protected();
					cout << "������ �������� �������" << endl;
					system("Pause");
					break;
				case '5':
					system("cls");
					q_copy_protected.copy_protected(q1_protected);
					cout << "����� ���� �������!!!" << endl;
					system("Pause");
					break;
				case'6':
					system("cls");
					q_new_protected.marge_protected(q1_protected, q_copy_protected);
					q_new_protected.print_protected();
					cout << "������� ���� �����" << endl;
					system("Pause");
					break;
				case'7':
					system("cls");
					cout << "������� ������������� ��������� ������� = " << q1_protected.task_protected() << endl;
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

	