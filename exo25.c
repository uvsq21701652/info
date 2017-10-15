
#include "uvsqgraphics.h"

int main()
{
init_graphics(600,600);

// Debut du code
POINT p1,p2;

p1.x = 400; p1.y = 400;
p2.x = 200;p2.y = 200;

int i;

for(i=0; i<5; i=i+1)
{
	draw_rectangle (p1,p2,blanc);
	wait_clic();
	draw_fill_rectangle(p1,p2,rouge);
	wait_clic();
	draw_fill_rectangle(p1,p2,noir);
}
// Fin du code

wait_escape();
exit(0);
}

