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

p1.x = 450; p1.y = 600;
p2.x = 450; p2.y = 0;
draw_line(p1,p2,blanc);

p3=wait_clic ();
p4=wait_clic ();
p5=wait_clic ();
if ((p3.x <450 && p4.x <450 && p5.x < 450) || (p3.x >450 && p4.x >450 && p5.x>450))
{
draw_line(p3,p4,blanc);
draw_line(p3,p5,blanc);
draw_line(p4,p5,blanc);
}

// Fin du code

wait_escape();
exit(0);
}

