#include "uvsqgraphics.h"

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1;
POINT p2;
COULEUR c;

int i;
i = 0;
p1.y = 0; p2.y = 600;

while ( p1.x <=900)
{
	i++;
	if(i%2==0)
	{
		c=bleu;
	}
	else
	{
		c=rouge;
	}
	
	p2.x=p1.x;
	draw_line(p1,p2,c);
	p1.x= p1.x+100;
}

// Fin du code

wait_escape();
exit(0);
}

