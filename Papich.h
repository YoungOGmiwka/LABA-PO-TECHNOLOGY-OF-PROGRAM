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

	void add(int user_value);// ���������� ��������
	void del();// �������� �������� 
	void print();// ����� ������� �� �����
	void clear(); // �������� �������
	Elem *get_end_p(); // ���������� �������� ���������
	void copy(Papich &q1);// ����������� �������
	void marge(Papich &q1, Papich &q2); // ������� ��������
 

};



