#include "uvsqgraphics.h"

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1;
POINT p2;
POINT p;

p1.x=450;p1.y=0;
p2.x=450;p2.y=600;
draw_line(p1,p2,blanc);

int i;

for( i=0;i<5;i++)
{
p=wait_clic ();

if (p.x<450) 
{
	draw_circle(p,100, rouge);
}
else if (p.x>450)
{
	draw_circle(p,100, bleu);
}
}
// Fin du code

wait_escape();
exit(0);
}

