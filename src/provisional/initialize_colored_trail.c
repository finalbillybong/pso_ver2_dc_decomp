typedef struct Vertex {float x,y,z;unsigned int color;} Vertex;
typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;int count;Vertex vertices[16];unsigned int first_color,second_color;} View;
typedef char check_vertex[sizeof(Vertex)==16&&(unsigned long)&((Vertex *)0)->color==12?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_count[(unsigned long)&((View *)0)->count==32?1:-1];
typedef char check_vertices[(unsigned long)&((View *)0)->vertices==36?1:-1];
typedef char check_first_color[(unsigned long)&((View *)0)->first_color==292?1:-1];
typedef char check_second_color[(unsigned long)&((View *)0)->second_color==296?1:-1];
extern void base_at(View *,void *),colors_at(View *,unsigned int,unsigned int);extern void *object_name;
static inline void initialize_base(View *o,void *parent) {base_at(o,parent);o->dispatch=(void *)0x8c269edc;o->name=object_name;o->size=36;o->count=0;}
View *initialize_colored_trail(View *o,void *parent,unsigned int first,unsigned int second) {View **home=&o;initialize_base(o,parent);o->dispatch=(void *)0x8c269eb8;colors_at(o,first,second);{Vertex *v=o->vertices;int i;for(i=0;i<8;++i) {v[0].color=o->first_color;v[1].color=o->second_color;v+=2;}}return o;}
