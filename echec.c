#include "uvsqgraphics.h"

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1;
POINT p2;
COULEUR c;
int i;
p1.x=0; p1.y=0;
p2.x=20; p2.y=20;
i=0;

for(p1.x=0;p1.x<=900;)
{
	i++;
	if(i%2==0)
	{
				c=bleu;
	}
	else {
		c= rouge;
}

draw_fill_rectangle(p1,p2,c);
p1.x=p1.x+20;
p2.x=p2.x+20;
}



// Fin du code

wait_escape();
exit(0);
}




