#include <conio.h>
#include "graph.h"
#include<Windows.h>
int graph::w=40;
int graph::h=20; 
#define Esc 33
#define ok 40
#define KEY_UP 72

int main()
{

	graph G; 
	int Action=KEY_UP;
	while (Action!=Esc)
	{
		if (_kbhit())
			Action=_getch();
		G.move(Action);
		G.draw_graph();
		Sleep(G.getspeed()); 
	}
	return 0; 
}
