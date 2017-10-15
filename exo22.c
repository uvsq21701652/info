
#include "uvsqgraphics.h"

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1;
POINT p2;
POINT p3;
POINT p4;
int delta;
int i;
delta= lire_entier_clavier();
p1.y = 0; p2.y = 600;
for(p1.x=0; p1.x<=900; p1.x=p1.x + delta)
{
	p2.x = p1.x;
	draw_line (p1,p2,rouge);
}

p3.x=0; p4.x=900;
for(p3.y=0; p3.y<600; p3.y=p3.y + delta)
{
	p4.y = p3.y;
	draw_line (p3,p4,bleu);

i++;
	if(i%2==0)
	{
		c=bleu;
	}
	else
	{
		c=rouge;
	}
// Fin du code

wait_escape();
exit(0);
}
