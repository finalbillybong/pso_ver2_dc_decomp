typedef struct Vector {float x,y,z;} Vector;typedef struct Grid {Vector *points;int width,height;float first,last,step;} Grid;typedef char check_grid[sizeof(Grid)==24&&sizeof(Vector)==12?1:-1];
typedef char check_points[(unsigned long)&((Grid *)0)->points==0?1:-1];
typedef char check_width[(unsigned long)&((Grid *)0)->width==4?1:-1];
typedef char check_height[(unsigned long)&((Grid *)0)->height==8?1:-1];
typedef char check_first[(unsigned long)&((Grid *)0)->first==12?1:-1];
typedef char check_last[(unsigned long)&((Grid *)0)->last==16?1:-1];
typedef char check_step[(unsigned long)&((Grid *)0)->step==20?1:-1];
extern int selectors[2];extern Vector offsets[2];extern void draw_at(Grid *,void *,void *,int *,Vector *);
void draw_grid_offset_rows(Grid *o,void *drawing,void *transform,int selector,Vector *first,Vector *second) {selectors[0]=selector;selectors[1]=selector;offsets[0]=*first;offsets[1]=*second;draw_at(o,drawing,transform,selectors,offsets);}
