#include "Papich.h"
#include <iostream>

using namespace std;




Papich::Papich() // ������������� ������� 
{
	end_p = nullptr;
}

Papich::~Papich() // ������������ ������
{
	Elem *ptr = end_p;

	while ( ptr !=nullptr)
	{
		
		end_p = end_p->prev_p;
		delete ptr;
		ptr = end_p;
	
	}
	
	end_p = nullptr;
}


void Papich::add(int user_value) // ���������� ������� � �������
{


	if (end_p != nullptr) // ���� ������� �� ������
	{
		Elem *p;
		p = new Elem;
		p->prev_p = end_p;
		end_p = p;


		p->value = user_value;
		end_p = p;


	}
	else// ������ ������ �������
	{
		
		end_p = new Elem; // �������� ������ ��� ����� �������
		end_p->value = user_value;// ���������� �������� ������������ 
		end_p->prev_p = nullptr; //��������� �� ���������� ����� ����� null (�������� ��������� ������� � ������� ������ ����� ����� null)


	}
}


void Papich::del()// �������� �������� 
{
	if (end_p != nullptr) // ������ ������� �� ������
	{
		Elem *ptr = end_p, *next_p = end_p;

		while (ptr->prev_p != nullptr) 
		{
			next_p = ptr; // ������� ������� ����� ������� ��������
			ptr = ptr->prev_p; // ptr ��� ������ ������� 
		}

		if (ptr != end_p)// � ������� �� ���� �������
		{
			cout << "�� ������� ����� ������� " << ptr->value << endl;
			delete ptr; // ����������� ������
			next_p->prev_p = nullptr;// ������ ���� ���� ������
		}
		else // ���� � ������� ����� ���� ������� 
		{
			cout << "�� ������� ������ ������� " << ptr->value << endl;
			delete ptr;
			end_p = nullptr;

		}

	}
	else
	{
		cout << "� ������� ��� ���������!" << endl;
	}
}



void Papich::print() // ����� ������� �� �����
{
	Elem *ptr = end_p;
	cout << "����� �������: " << endl;


	while (ptr != nullptr)
	{
		cout << ptr->value << endl;
		ptr = ptr->prev_p;// ����������� �� ������� � ������� �������� value

	}

	cout << "������ ������� " << endl;

}


void Papich::clear()// ������ �������� �������
{
	Elem *ptr1 = end_p, *ptr2 = end_p;// 

	while ((ptr1 = ptr2) != nullptr)
	{
		ptr2 = ptr2->prev_p;
		delete ptr1;

	}
	end_p = nullptr;
}

Elem * Papich::get_end_p()
{
	return end_p;
	
}




// ����� ������ ����� ��� �� ����� 

void Papich::copy(Papich &q1)// ����������� ������� 
{
	// ����������� q1 � this
	this->clear();// ���������� �� ������ ����� �������� ����������

	Elem *end_p_q1 = q1.get_end_p(), *ptr = nullptr; // �������� �������� end_p �� q1

		int counter = 0, *array1 = nullptr;
		ptr = end_p_q1;


		while (ptr != nullptr)// ������� ���������� �������� �������
		{
			counter++;
			ptr = ptr->prev_p;


		}

		array1 = new int[counter];
		ptr = end_p_q1;

		for (int i = 0; counter - i > 0; i++)// ���������� ������� ���������� �������
		{
			*(array1 + counter - i - 1) = ptr->value;
			ptr = ptr->prev_p;
		}

		for (int i = 0; counter > i; i++)
		{
			this->add(*(array1 + i)); //�������� ������� � ������ ������ 
			
		}
		delete[] array1;// ����������� ������ ������� 
}





void Papich::marge(Papich & q1, Papich & q2)// ������� ��������

{
	this->clear();// ��������� �� ������ ������ ������� ���������� 
	Elem *end_p_q = q1.get_end_p(), *ptr = nullptr; // ����� �������� end_p ������� ������� q1 
	int counter = 0, *array1 = nullptr;

	ptr = end_p_q;

	while (ptr != nullptr)// ���������� ��������� ������� 
	{
		counter++;
		ptr = ptr->prev_p;
	}

	array1 = new int[counter];
	ptr = end_p_q;

	for (int i = 0; counter - i > 0; i++)// ��������� ������ ���������� �������
	{
		*(array1 + counter - i - 1) = ptr->value;
		ptr = ptr->prev_p;
	}

	for (int i = 0; counter > i; i++)
	{
		this->add(*(array1 + i));// �������� ������� � ������ ������ 
	}
	delete[] array1;
	array1 = nullptr;


	end_p_q = q2.get_end_p(); //����� �������� end_p ������� ������� q2
	ptr = nullptr;
	counter = 0;

	ptr = end_p_q;

	while (ptr != nullptr)// ���������� ��������� �������
	{
		counter++;
		ptr = ptr->prev_p;
	}

	array1 = new int[counter];
	ptr = end_p_q;

	for (int i = 0; counter - i > 0; i++) // ��������� ������ ���������� �������
	{
		*(array1 + counter - i - 1) = ptr->value;
		ptr = ptr->prev_p;
	}

	for (int i = 0; counter > i; i++)
	{
		this->add(*(array1 + i));
	}
	delete[] array1;

}



