#include "uvsqgraphics.h"

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1;
POINT p2;
POINT p3;
POINT p4;
POINT p5;
POINT p6;
POINT p7;
POINT p8;
POINT p9;
POINT p10;

p1.x = 20; p1.y =  100;
p2.x = 400; p2.y = 100;
p3.x = 20; p3.y = 200;
p4.x = 400; p4.y = 200;
p5.x = 20; p5.y = 300;
p6.x = 400; p6.y = 300;
p7.x = 20; p7.y = 400;
p8.x = 400; p8.y = 400;
p9.x = 20; p9.y = 500;
p10.x = 400; p10.y = 500;

draw_line(p1,p2,rouge);
draw_line(p3,p4,rouge);
draw_line(p5,p6,rouge);
draw_line(p7,p8,rouge);
draw_line(p9,p10,rouge);

// Fin du code

wait_escape();
exit(0);
}
