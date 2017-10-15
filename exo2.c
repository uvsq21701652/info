#include "uvsqgraphics.h"

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1;
POINT p2;
POINT p3;

p1.x = 20; p1.y =  300;
p2.x = 400; p2.y = 300;
draw_line(p1,p2,rouge);

p3.x = 210; p3.y = 300;
draw_circle(p1,20, magenta);
draw_circle(p2,20, magenta);
draw_circle(p3,20, magenta);

// Fin du code

wait_escape();
exit(0);
}
