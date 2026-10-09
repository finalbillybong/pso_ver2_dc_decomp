typedef struct Vertex {float x,y,z;unsigned int color;} Vertex;
typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;int count;Vertex vertices[16];unsigned int first_color,second_color;} View;
typedef char check_vertex[sizeof(Vertex)==16&&(unsigned long)&((Vertex *)0)->color==12?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_count[(unsigned long)&((View *)0)->count==32?1:-1];
typedef char check_vertices[(unsigned long)&((View *)0)->vertices==36?1:-1];
typedef char check_first_color[(unsigned long)&((View *)0)->first_color==292?1:-1];
typedef char check_second_color[(unsigned long)&((View *)0)->second_color==296?1:-1];
void set_colored_trail_colors(View *o,unsigned int first,unsigned int second) {o->first_color=first;o->second_color=second;}
