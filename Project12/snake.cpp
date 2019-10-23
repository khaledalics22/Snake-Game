#include "snake.h"
#include "graph.h"
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
snake::snake()
{
	srand(time(NULL));
	x[0]=(rand()% (graph::getw()-2)+1);
	y[0]=(rand()% (graph::geth()-2)+1);
	l=0;

}
void snake::setl(){l++;  }
void snake::move(int D)
{
	if (x[0]>=graph::getw()-1)
		x[0]=1; 
	 if (x[0]<=0)
		x[0]=graph::getw()-2;
	 if (y[0]>=graph::geth()-1)
		y[0]=1; 
	 if(y[0]<=0)
		y[0]=graph::geth()-2; 
	for (int i=l;i>0;i--)
	{
	x[i]=x[i-1]; 
	y[i]=y[i-1]; 
	}
	switch(D)
	{
	case KEY_UP:
		y[0]--; 
		break; 
	case KEY_RIGHT:
		x[0]+=2;
		break ;
	case KEY_LEFT:
		x[0]-=2; break; 
	case KEY_DOWN:
		y[0]++; break; 
	}
}

void snake::setx(){ 	x[0]=rand()% graph::getw(); }
void snake::sety(){ y[0]=rand()% graph::geth(); }
int snake::getx(int i){return x[i]; }
int snake::gety(int i){return y[i]; }
int snake::getl(){return l; }
//char snake::getd(){}
void snake::draw_snake()
{
	cout<<'*';
}
