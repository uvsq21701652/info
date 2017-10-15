#include "uvsqgraphics.h"

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1;
POINT p2;

p1.y = 0; p2.y = 600;
for(p1.x=0; p1.x<900; p1.x=p1.x + 100)
{
	p2.x = p1.x;
	draw_line (p1,p2,blanc);
}

// Fin du code

wait_escape();
exit(0);
}

