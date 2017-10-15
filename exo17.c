#include "uvsqgraphics.h"

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1;
POINT p2;
POINT p3;
POINT p4;
POINT p;

p1.x = 450; p1.y = 600;
p2.x = 450; p2.y = 0;
draw_line(p1,p2,blanc);
p3.x=0; p3.y = 300;
p4.x=900; p4.y = 300;
draw_line(p3,p4,blanc);

p= wait_clic ();
if ((p.x < 450 && p.y >300) || (p.x > 450 && p.y< 300))
{ 
draw_circle(p,50, bleu);
}
else if ((p.x > 450 && p.y >300) || (p.x < 450 && p.y< 300))
{
draw_circle(p,50, rouge);
}


// Fin du code

wait_escape();
exit(0);
}
