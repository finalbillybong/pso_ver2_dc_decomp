typedef struct Vector {float x,y,z;} Vector;typedef struct Grid {Vector *points;int width,height;float first,last,step;} Grid;typedef char check_grid[sizeof(Grid)==24&&sizeof(Vector)==12?1:-1];
typedef char check_points[(unsigned long)&((Grid *)0)->points==0?1:-1];
typedef char check_width[(unsigned long)&((Grid *)0)->width==4?1:-1];
typedef char check_height[(unsigned long)&((Grid *)0)->height==8?1:-1];
typedef char check_first[(unsigned long)&((Grid *)0)->first==12?1:-1];
typedef char check_last[(unsigned long)&((Grid *)0)->last==16?1:-1];
typedef char check_step[(unsigned long)&((Grid *)0)->step==20?1:-1];
extern float first_at(float);Vector *lookup_vector_grid_row(Grid *o,float value) {if(value<o->first||value>o->last) return 0;return o->points+o->width*(int)first_at((value-o->first+0.01f)/o->step);}
