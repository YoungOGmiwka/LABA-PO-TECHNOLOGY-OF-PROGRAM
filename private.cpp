#include "private.h"



void papich_private::add_private(int user_val)
{
	add(user_val);
}

void papich_private::del_private()
{
	del();
}

void papich_private::print_private()
{
	print();
}

void papich_private::clear_private()
{
	clear();
}

double papich_private::task_private() // подсчет среднего гармонического
{
	float count = 0;// колво элементов

	float l = 0;// сумма value

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

void papich_private::copy_private(papich_private & q1)// копирование очереди
{
	// копирование q1 в this
	this->clear();// указателль на обьект метод которого вызывается

	Elem *end_p_q1 = q1.get_end_p(), *ptr = nullptr; // получаем значение end_p из q1

	int counter = 0, *array1 = nullptr;
	ptr = end_p_q1;


	while (ptr != nullptr)// находим количество элементы очереди
	{
		counter++;
		ptr = ptr->prev_p;


	}

	array1 = new int[counter];
	ptr = end_p_q1;

	for (int i = 0; counter - i > 0; i++)// заполнение массива элементами очереди
	{
		*(array1 + counter - i - 1) = ptr->value;
		ptr = ptr->prev_p;
	}

	for (int i = 0; counter > i; i++)
	{
		this->add(*(array1 + i)); //копируем очередь в данный объект 

	}
	delete[] array1;// освобождаем память массива 
}

void papich_private::marge_private(papich_private &q1, papich_private &q2) // слияние очередей
{
	this->clear();// указатель на объект метода который вызывается 
	Elem *end_p_q = q1.get_end_p(), *ptr = nullptr; // берем значение end_p очереди объекта q1 
	int counter = 0, *array1 = nullptr;

	ptr = end_p_q;

	while (ptr != nullptr)// нахождение элементов очереди 
	{
		counter++;
		ptr = ptr->prev_p;
	}

	array1 = new int[counter];
	ptr = end_p_q;

	for (int i = 0; counter - i > 0; i++)// заполняем массив элементами очереди
	{
		*(array1 + counter - i - 1) = ptr->value;
		ptr = ptr->prev_p;
	}

	for (int i = 0; counter > i; i++)
	{
		this->add(*(array1 + i));// копируем очередь в данный объект 
	}
	delete[] array1;
	array1 = nullptr;


	end_p_q = q2.get_end_p(); //берем значение end_p очереди объекта q2
	ptr = nullptr;
	counter = 0;

	ptr = end_p_q;

	while (ptr != nullptr)// нахождение элементов очереди
	{
		counter++;
		ptr = ptr->prev_p;
	}

	array1 = new int[counter];
	ptr = end_p_q;

	for (int i = 0; counter - i > 0; i++) // заполняем массив элементами очереди
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