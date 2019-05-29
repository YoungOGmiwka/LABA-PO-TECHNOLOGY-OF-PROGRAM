#include "public.h"





void papich_pablic::copy_public(papich_pablic & q1) // ����������� �������
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




void papich_pablic::marge_public(papich_pablic &q1, papich_pablic & q2) // ������� ��������
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

double papich_pablic::task_public() // ������� �������� ��������������
{
	float count = 0;// ����� ���������

	float l = 0;// ����� value

	Elem *ptr = get_end_p();

	while (ptr != nullptr)
	{
		l = l + (1 / ((float)ptr->value));

		count++;
		ptr = ptr->prev_p;
	}
	l = count / l;
	return l;

}
