#include "uvsqgraphics.h"

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1;
POINT p2;
POINT p5;
POINT p6;
POINT p;

p1.x = 300; p1.y = 600;
p2.x = 300; p2.y = 0;
draw_line(p1,p2,blanc);
p5.x = 600; p5.y = 600;
p6.x = 600; p6.y = 0;
draw_line(p5,p6,blanc);

p= wait_clic ();
if (p.x<300) 
{
	draw_circle(p,50, bleu);
}
else if ( p.x>300 && p.x <600)
{
	draw_circle(p,50, blanc);
}
else if ( p.x>600)
{
	draw_circle(p,50, rouge);
}

// Fin du code

wait_escape();
exit(0);
}
