#include "snake.h"
#pragma once

class graph:public snake
{
	 static int w,h;
	 int fx,fy; 
	 int speed;
public: 
	graph(); 
	void setspeed(); 
	int getspeed(); 
	static int getw(); 
	static int geth();
	static int getf_x(); 
	static int getf_y(); 
	void setf(); 

	void draw_graph(); 
};