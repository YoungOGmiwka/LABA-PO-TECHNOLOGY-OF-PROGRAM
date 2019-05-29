#include "protected.h"


void papich_protected::add_protected(int user_val)
{
	add(user_val);
}

void papich_protected::del_protected() //�������� ��������
{
	del();
}

void papich_protected::print_protected()// ����� ������� �� �����
{
	print();
}

void papich_protected::clear_protected()// �������� �������
{
	clear();
}

double papich_protected::task_protected()//������� �������� ��������������
{
	float count = 0;// ����� ���������
					
	float l = 0;// ����� value

	Elem *ptr = get_end_p();

	while (ptr != nullptr)
	{
		l = l + (1 / ((float) ptr->value));
		
		count++;
		ptr = ptr->prev_p;
	}
	l = count / l;
	return l;

}

void papich_protected::copy_protected(papich_protected &q1) // ����������� �������
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

void papich_protected::marge_protected(papich_protected & q1, papich_protected & q2)
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

