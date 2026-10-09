typedef struct Vector {float x,y,z;} Vector;typedef struct Grid {Vector *points;int width,height;float first,last,step;} Grid;typedef char check_grid[sizeof(Grid)==24&&sizeof(Vector)==12?1:-1];
typedef char check_points[(unsigned long)&((Grid *)0)->points==0?1:-1];
typedef char check_width[(unsigned long)&((Grid *)0)->width==4?1:-1];
typedef char check_height[(unsigned long)&((Grid *)0)->height==8?1:-1];
typedef char check_first[(unsigned long)&((Grid *)0)->first==12?1:-1];
typedef char check_last[(unsigned long)&((Grid *)0)->last==16?1:-1];
typedef char check_step[(unsigned long)&((Grid *)0)->step==20?1:-1];
extern Vector origin;extern Vector *active_points;extern int active_width,active_index;extern void *context_a,*context_b;extern void begin_at(void),reset_at(void),transform_at(void *,float),row_at(Grid *,void *,int),end_at(void);
void draw_vector_grid_rows(Grid *o,void *drawing,void *transform,void *first,void *second) {int i;float position;origin.x=0.0f;origin.y=0.0f;origin.z=0.0f;active_points=o->points;active_width=o->width;context_a=first;context_b=second;begin_at();position=o->first;for(i=0;i<o->height;++i) {active_index=0;reset_at();transform_at(transform,position);row_at(o,drawing,0);position+=o->step;}end_at();}
