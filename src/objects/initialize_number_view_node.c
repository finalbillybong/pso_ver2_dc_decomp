typedef struct Node {unsigned int flags;void *dispatch;float x,y;char unknown16[8];float scale;int style,value;} Node;typedef struct Parameters {int unknown0;float x,y,scale;int style;unsigned int flags;int value;} Parameters;typedef char check_size[sizeof(Node)==36&&sizeof(Parameters)==28?1:-1];
typedef char check_Node_flags[(unsigned long)&((Node *)0)->flags==0?1:-1];
typedef char check_Node_dispatch[(unsigned long)&((Node *)0)->dispatch==4?1:-1];
typedef char check_Node_x[(unsigned long)&((Node *)0)->x==8?1:-1];
typedef char check_Node_y[(unsigned long)&((Node *)0)->y==12?1:-1];
typedef char check_Node_scale[(unsigned long)&((Node *)0)->scale==24?1:-1];
typedef char check_Node_style[(unsigned long)&((Node *)0)->style==28?1:-1];
typedef char check_Node_value[(unsigned long)&((Node *)0)->value==32?1:-1];
typedef char check_Parameters_x[(unsigned long)&((Parameters *)0)->x==4?1:-1];
typedef char check_Parameters_y[(unsigned long)&((Parameters *)0)->y==8?1:-1];
typedef char check_Parameters_scale[(unsigned long)&((Parameters *)0)->scale==12?1:-1];
typedef char check_Parameters_style[(unsigned long)&((Parameters *)0)->style==16?1:-1];
typedef char check_Parameters_flags[(unsigned long)&((Parameters *)0)->flags==20?1:-1];
typedef char check_Parameters_value[(unsigned long)&((Parameters *)0)->value==24?1:-1];
extern void base_at(Node *);Node *initialize_number_view_node(Node *o,Parameters *p) {base_at(o);o->dispatch=(void *)0x8c267794;o->x=p->x;o->y=p->y;o->scale=p->scale;o->flags=p->flags;o->style=p->style;o->value=p->value;return o;}
