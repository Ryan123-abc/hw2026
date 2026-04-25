#include"container.h"

void calculate(Container *c){
	if(c->type == CYLINDER){
		double r = c->radius;
		double h = c->height;

		c->surface_area = r*r*PI*2 + 2*PI*r*h;
		c->volume = r*r*PI*h;
	}else if(c->type == SQUARE_PRISM){
		double s = c->side;
		double h = c->height;

		c->surface_area = s*s*2 + s*h*4;
		c->volume = s*s*h;
	}
}
