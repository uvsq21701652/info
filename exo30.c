#include "uvsqgraphics.h"

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1;
POINT p2;
POINT p;

p1.x=0;p1.y=0;
p2.x=10;p2.y=10;
draw_fill_rectangle(p1,p2,jaune);

int i;

for(i=0;i<10;i++)
{
	p=wait_clic ();
     draw_circle(p,10,rouge);
    
}
p=wait_clic();
draw_circle(p

// Fin du code

wait_escape();
exit(0);
}



