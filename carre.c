#include "uvsqgraphics.h"

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1;
POINT p2;
POINT p;

p1.x=300;p1.y=150;
p2.x=600;p2.y=450;
draw_rectangle(p1,p2,jaune);

int i,a;
POINT p3;
a=0;
p3.x=p1.x+150;
p3.y=p1.y+150;
for(i=0;1;i++)
{
	p=wait_clic ();
	
	
		if(p.x<600 && p.x>300 && p.y<450 && p.y>150)
		{
		draw_circle(p3,145,bleu);
		
		}
		   else draw_circle(p3,145,black);
   

    
}


// Fin du code

wait_escape();
exit(0);
}



