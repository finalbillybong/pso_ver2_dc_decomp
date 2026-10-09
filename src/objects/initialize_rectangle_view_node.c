typedef struct Node {unsigned int flags;void *dispatch;float x,y,width,height;} Node;typedef struct Parameters {int unknown0;float x,y,width,height;} Parameters;typedef char check_sizes[sizeof(Node)==24&&sizeof(Parameters)==20?1:-1];
typedef char check_Node_dispatch[(unsigned long)&((Node *)0)->dispatch==4?1:-1];
typedef char check_Node_x[(unsigned long)&((Node *)0)->x==8?1:-1];
typedef char check_Node_y[(unsigned long)&((Node *)0)->y==12?1:-1];
typedef char check_Node_width[(unsigned long)&((Node *)0)->width==16?1:-1];
typedef char check_Node_height[(unsigned long)&((Node *)0)->height==20?1:-1];
typedef char check_Parameters_x[(unsigned long)&((Parameters *)0)->x==4?1:-1];
typedef char check_Parameters_y[(unsigned long)&((Parameters *)0)->y==8?1:-1];
typedef char check_Parameters_width[(unsigned long)&((Parameters *)0)->width==12?1:-1];
typedef char check_Parameters_height[(unsigned long)&((Parameters *)0)->height==16?1:-1];
extern void base_at(Node *);Node *initialize_rectangle_view_node(Node *o,Parameters *p) {base_at(o);o->dispatch=(void *)0x8c26a05c;o->x=p->x;o->y=p->y;o->width=p->width;o->height=p->height;return o;}
