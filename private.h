#pragma once
#include"Papich.h"


class papich_private: private Papich
{
public:
	void add_private(int user_val);// добавление элемента
	void del_private(); // удаление элемента
	void print_private();//вывод очереди на экран
	void clear_private();//очищение очереди
	double task_private(); // подсчет среднего гармонического
	void copy_private(papich_private &q1);// копирование очереди
	void marge_private(papich_private &q1, papich_private &q2); // слияние очередей
};