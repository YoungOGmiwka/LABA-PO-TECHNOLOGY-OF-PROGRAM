#pragma once
#include "Papich.h"


class papich_protected : protected Papich
{
public:
	void add_protected(int user_val);// добавление элемента
	void del_protected();//удаление элемента
	void print_protected();//вывод очереди на экран 
	void clear_protected();//очищение очереди
	double task_protected(); // подсчет среднего гармонического
	void copy_protected(papich_protected &q1);//копирование очереди
	void marge_protected(papich_protected &q1, papich_protected &q2);//слияние очередей

	

};







