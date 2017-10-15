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

for(i=0;1;i++)
{
	p=wait_clic ();
	if(p.x>10 || p.y>10)
	{
     
     draw_circle(p,100,bleu);
    }
   else if (p.x<10 || p.y<10)
   {
	   exit (0);
   }
   
    
}


// Fin du code

wait_escape();
exit(0);
}


