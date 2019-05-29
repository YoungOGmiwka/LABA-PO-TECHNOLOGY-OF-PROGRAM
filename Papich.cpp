#include "Papich.h"
#include <iostream>

using namespace std;




Papich::Papich() // инициализация очереди 
{
	end_p = nullptr;
}

Papich::~Papich() // освобождение памяти
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


void Papich::add(int user_value) // добавление элемнта в очередь
{


	if (end_p != nullptr) // если элемент не первый
	{
		Elem *p;
		p = new Elem;
		p->prev_p = end_p;
		end_p = p;


		p->value = user_value;
		end_p = p;


	}
	else// значит первый элемент
	{
		
		end_p = new Elem; // выделяем память под новый элемент
		end_p->value = user_value;// запоминаем значения пользователя 
		end_p->prev_p = nullptr; //указатель на предыдущий будет равен null (следущий указатель первого в очереди всегда будет равен null)


	}
}


void Papich::del()// удаление элемента 
{
	if (end_p != nullptr) // значит очередь не пустая
	{
		Elem *ptr = end_p, *next_p = end_p;

		while (ptr->prev_p != nullptr) 
		{
			next_p = ptr; // элемент стоящий после первого элемента
			ptr = ptr->prev_p; // ptr это первый элемент 
		}

		if (ptr != end_p)// в очереди не один элемент
		{
			cout << "Из очереди удалён элемент " << ptr->value << endl;
			delete ptr; // освобождаем память
			next_p->prev_p = nullptr;// теперь этот стал первым
		}
		else // если в очереди всего один элемент 
		{
			cout << "Из очереди удален элемент " << ptr->value << endl;
			delete ptr;
			end_p = nullptr;

		}

	}
	else
	{
		cout << "В очереди нет элементов!" << endl;
	}
}



void Papich::print() // вывод очереди на экран
{
	Elem *ptr = end_p;
	cout << "Конец очереди: " << endl;


	while (ptr != nullptr)
	{
		cout << ptr->value << endl;
		ptr = ptr->prev_p;// пробегаемся по очереди и выводим значения value

	}

	cout << "Начало очереди " << endl;

}


void Papich::clear()// полное очищение очереди
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




// ХУйня мишаня давай все по новой 

void Papich::copy(Papich &q1)// копирование очереди 
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





void Papich::marge(Papich & q1, Papich & q2)// слияние очередей

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



