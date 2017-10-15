
#include "uvsqgraphics.h"

int main()
{


// Debut du code
POINT p;
int delta;
int taille;
taille = 200;
init_graphics(taille,taille);
p.x = 100; p.y = 100;
delta = 10;
for(p.x=100; delta<=100; delta= delta + 10)
{
	draw_circle (p,delta,rouge);
}

// Fin du code

wait_escape();
exit(0);
}

