#pragma once
#include "Papich.h"


class papich_protected : protected Papich
{
public:
	void add_protected(int user_val);// ���������� ��������
	void del_protected();//�������� ��������
	void print_protected();//����� ������� �� ����� 
	void clear_protected();//�������� �������
	double task_protected(); // ������� �������� ��������������
	void copy_protected(papich_protected &q1);//����������� �������
	void marge_protected(papich_protected &q1, papich_protected &q2);//������� ��������

	

};







