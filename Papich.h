#pragma once

#include "Elem.h"
#include<iostream>

using namespace std;

class Papich
{
	Elem *end_p;
	

public:
	Papich();
	~Papich();

	void add(int user_value);// добавление элемента
	void del();// удаление элемента 
	void print();// вывод очереди на экран
	void clear(); // очищение очереди
	Elem *get_end_p(); // возвращает значение указателя
	void copy(Papich &q1);// копирование очереди
	void marge(Papich &q1, Papich &q2); // слияние очередей
 

};



