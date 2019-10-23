#include "graph.h"
graph::graph()
{
	speed=20; 
//	srand(time(NULL));
	do{
		fx=(rand()% (w-2))+2;
		}
		while(fx%2==0);
	fy=(rand()% (h-2))+1; 
	for (int j=0; j<h; j++)
	{
		cout<<'$';
		if (j==0||j==h-1)
		{
		for (int i=1; i<w-1; i++)
		{
			cout<<'$'; 
		}
		}
		else 
		{
			for(int i=1;i<w-1; i++)
			{
				if (i==snake::getx(0)&&j==snake::gety(0))
				{snake::draw_snake(); continue;}
				if (fx==i&&fy==j)
				{	cout<<'@' ; continue;}
			
					cout<<' ';
			}
		   	cout<<'$'; 
		}
		cout<<endl; 
	}
}
void graph::setf(){	do{
		fx=(rand()% (w-2))+2;
		}
		while(fx%2==0);
fy=(rand()% (h-2))+1;}
int graph::getw(){return w; }
int graph::geth(){return h; }
void graph::draw_graph()
{ 
	system("cls"); 
	if (fx==getx(0)&&fy==gety(0))
	{
//	srand(time(NULL));
		do{
		fx=(rand()% (w-2))+2;
		}
		while(fx%2==0);
	    fy=(rand()% (h-2))+1;
		
     	setl(); 
		if (getl()>5)
			setspeed(); 
	}
	for (int j=0; j<h; j++)
	{
		cout<<'$';
		if (j==0||j==h-1)
			{
			for (int i=1; i<w-1; i++)
			{
				cout<<'$'; 
			}
			}
		else 
		{
			for (int i=1; i<w-1; i++)
			{
		
				if (i==fx&&j==fy)
				{cout<<"@"; continue; }
				int u=0; 
				for (int k=0; k<=getl();k++)
				{
					if (i==getx(k)&&j==gety(k))
					{cout<<"*"; u++;  break;}
				}
				if (u>0)
				{ i+=u-1; }
				else cout<<' '; 
			}
		
		}
			cout<<'$';
			cout<<endl; 
		}
				

	cout<<"X= "<<getx(0)<<"   "<<"Y= "<<gety(0)<<"  "<<"score= "<<getl(); 

}
void graph::setspeed(){speed--; }
int graph::getspeed (){return speed; }