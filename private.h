#pragma once
#include"Papich.h"


class papich_private: private Papich
{
public:
	void add_private(int user_val);// ���������� ��������
	void del_private(); // �������� ��������
	void print_private();//����� ������� �� �����
	void clear_private();//�������� �������
	double task_private(); // ������� �������� ��������������
	void copy_private(papich_private &q1);// ����������� �������
	void marge_private(papich_private &q1, papich_private &q2); // ������� ��������
};