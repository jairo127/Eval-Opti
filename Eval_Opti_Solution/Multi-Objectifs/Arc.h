#pragma once

class Arc {
public:
	int numero_arc;
	int from;
	int to;
	double longueur;
	double cout;

	Arc(int num, int f, int t, double l, double c) : numero_arc(num), from(f), to(t), longueur(l), cout(c) {}
};