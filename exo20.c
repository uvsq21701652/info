#include "uvsqgraphics.h"

int main()
{
init_graphics(900,600);

// Debut du code
POINT p;

p= wait_clic ();
if (p.x % 2 ==0 && p.y % 2 ==0 )
{
draw_circle(p,50, rouge);	
}	
else if ( p.x% 2 ==0 && p.y%2 ==1)
{
draw_circle(p,50, bleu);	
}
else if ( p.x% 2 ==1 && p.y%2 ==1)
{
draw_circle(p,50, vert);	
}
else if ( p.x% 2 ==1 && p.y%2 ==0)
{
draw_circle(p,50, jaune);	
}


// Fin du code

wait_escape();
exit(0);
}
