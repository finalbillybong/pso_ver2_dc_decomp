typedef struct Vector {float x,y,z;} Vector;typedef struct Grid {Vector *points;int width,height;float first,last,step;} Grid;typedef char check_grid[sizeof(Grid)==24&&sizeof(Vector)==12?1:-1];
typedef char check_points[(unsigned long)&((Grid *)0)->points==0?1:-1];
typedef char check_width[(unsigned long)&((Grid *)0)->width==4?1:-1];
typedef char check_height[(unsigned long)&((Grid *)0)->height==8?1:-1];
typedef char check_first[(unsigned long)&((Grid *)0)->first==12?1:-1];
typedef char check_last[(unsigned long)&((Grid *)0)->last==16?1:-1];
typedef char check_step[(unsigned long)&((Grid *)0)->step==20?1:-1];
extern float first_at(float),last_at(float);extern void *allocate_at(unsigned int);
Grid *initialize_vector_grid(Grid *o,int width,float first,float last,float step) {int count,i;o->step=step;o->width=width;o->first=first_at(first/o->step);o->last=last_at(last/o->step);o->height=(int)(o->last-o->first+1.0f);o->first*=o->step;{float step=o->step;o->last=o->last*step;}count=o->height*o->width;o->points=allocate_at(count*sizeof(Vector));for(i=0;i<count;++i) {*(float *)((char *)&o->points->x+i*sizeof(Vector))=0.0f;*(float *)((char *)&o->points->y+i*sizeof(Vector))=0.0f;*(float *)((char *)&o->points->z+i*sizeof(Vector))=0.0f;}return o;}
