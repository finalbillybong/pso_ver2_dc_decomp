typedef struct Vertex {float x,y,z;unsigned int color;} Vertex;
typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;int count;Vertex vertices[16];unsigned int first_color,second_color;} View;
typedef char check_vertex[sizeof(Vertex)==16&&(unsigned long)&((Vertex *)0)->color==12?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_count[(unsigned long)&((View *)0)->count==32?1:-1];
typedef char check_vertices[(unsigned long)&((View *)0)->vertices==36?1:-1];
typedef char check_first_color[(unsigned long)&((View *)0)->first_color==292?1:-1];
typedef char check_second_color[(unsigned long)&((View *)0)->second_color==296?1:-1];
extern void prepare_at(void),draw_at(Vertex *,int,int);void draw_colored_trail(View *o) {if(o->count>1) {prepare_at();draw_at(o->vertices,(int)((unsigned int)o->count<<1),1);}}
