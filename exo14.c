#include "uvsqgraphics.h"

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1;
POINT p2;
POINT p;

p1.x = 450; p1.y = 600;
p2.x = 450; p2.y = 0;
draw_line(p1,p2,blanc);

p= wait_clic ();
p.x = 900-p.x; 
if ( p.x < 450 )
{ 
draw_circle(p,50, bleu);
}
else if ( p.x > 450 )
{
draw_circle(p,50, rouge);
}


// Fin du code

wait_escape();
exit(0);
}
