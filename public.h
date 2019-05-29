#pragma once
#include"Papich.h"


class papich_pablic : public Papich
{
public:
	void copy_public(papich_pablic &q1);// копирование очереди
	void marge_public(papich_pablic &q1, papich_pablic &q2); // слияние очередей
	double task_public();// подсчет среднего гармонического
};
