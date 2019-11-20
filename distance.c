#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include "distance.h"


float distance_seq()
{
	distance D;
	D.a=0;
	if((D.S=='A' && D.Z=='A') || (D.S=='C' && D.Z== 'C') || (D.S=='T' && D.Z== 'T') || (D.S=='G' && D.Z== 'G'))
	{
		D.a=0;
		return D.a;
	}
	
	if((D.S=='A' && D.Z== '#') || (D.S=='C' && D.Z== '#') || (D.S=='T' && D.Z== '#') || (D.S=='G' && D.Z== '#') || (D.S=='#' && D.Z== 'A') || (D.S=='#' && D.Z== 'C') || (D.S=='#' && D.Z== 'T') || (D.S=='#' && D.Z== 'G'))
	{	
		D.a=1.5;
		return D.a;
	}
	
	
	if((D.S=='A' && D.Z== 'C') || (D.S=='C' && D.Z== 'A'))
	{	
		D.a=2;
		return D.a;
	}
	
	
	if((D.S=='A' && D.Z=='T') || (D.S=='T' && D.Z=='A'))
	{
		D.a=2;
		return D.a;
	}
	
	
	if((D.S=='A' && D.Z== 'G') || (D.S=='G' && D.Z== 'A'))
	{
		D.a=1;
		return D.a;
	}
	
	
	if((D.S=='C' && D.Z== 'T') || (D.S=='T' && D.Z== 'C'))
	{
		D.a=1;
		return D.a;
	}
	
	
	if((D.S=='C' && D.Z== 'G') || (D.S=='G' && D.Z== 'C'))
	{
		D.a=2;
		return D.a;
	}
	
	
	if((D.S=='T' && D.Z== 'G') || (D.S=='G' && D.Z== 'T'))
	{
		D.a=2;
		return D.a;
	}
	
	
}


float calcule_distance()
{
	distance D;
	
	while(D.S <= 19 && D.Z <= 19 )
	{
		D.a = D.a + D.a;
	}
	return D.a;
	
}
