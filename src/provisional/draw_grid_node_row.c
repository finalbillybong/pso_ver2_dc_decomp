typedef struct Vector {float x,y,z;} Vector;typedef struct Grid {Vector *points;int width,height;float first,last,step;} Grid;typedef char check_grid[sizeof(Grid)==24&&sizeof(Vector)==12?1:-1];
typedef char check_points[(unsigned long)&((Grid *)0)->points==0?1:-1];
typedef char check_width[(unsigned long)&((Grid *)0)->width==4?1:-1];
typedef char check_height[(unsigned long)&((Grid *)0)->height==8?1:-1];
typedef char check_first[(unsigned long)&((Grid *)0)->first==12?1:-1];
typedef char check_last[(unsigned long)&((Grid *)0)->last==16?1:-1];
typedef char check_step[(unsigned long)&((Grid *)0)->step==20?1:-1];
typedef struct Node {unsigned int flags;char unknown4[40];struct Node *child,*sibling;} Node;typedef char check_node[(unsigned long)&((Node *)0)->child==44&&(unsigned long)&((Node *)0)->sibling==48?1:-1];extern Vector origin,*active_points,*offset_base;extern int active_index,active_width,*selector_base;extern void begin_at(void),end_at(void),transform_at(int,Node *,int),point_at(int,Vector *,Vector *);
int draw_grid_node_row(Grid *o,Node *node,int index) {do {unsigned int flags;begin_at();transform_at(0,node,0);flags=node->flags;while(*(int *)((char *)selector_base+((unsigned int)active_index<<2))==index) {if(!offset_base) point_at(0,&origin,active_points);else point_at(0,&offset_base[active_index],active_points);++active_points;++active_index;}++index;if(!(flags&16)) index=draw_grid_node_row(o,node->child,index);end_at();node=node->sibling;}while(node&&active_index<active_width);return index;}
