#include <iostream>
#pragma once
using namespace std; 
#include <ctime>

class snake
{
	int l; 
	int x[200],y[100];

public:
	snake(); 
	void setx(); 
	void sety(); 
	void setl(); 
	int getx(int i); 
	int gety(int i); 
	int getl(); 
	char getd(); 
	static void draw_snake();
	void move(int);
};
	