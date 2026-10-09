struct Vector {float x,y,z;};struct Base {char unknown0[24];virtual void unused0();virtual void unused1();virtual void unused2();virtual void unused3();virtual void unused4();virtual void unused5();virtual void discard();};
struct Vertex {float x,y,z;float u,v;unsigned int color;};
struct View:Base {char unknown28[4];int count;Vertex vertices[16];};
typedef char check_base[sizeof(Base)==28?1:-1];typedef char check_vertex[sizeof(Vertex)==24&&sizeof(Vector)==12?1:-1];typedef char check_count[(unsigned long)&((View *)0)->count==32?1:-1];typedef char check_vertices[(unsigned long)&((View *)0)->vertices==36?1:-1];
extern "C" void append_textured_trail_pair(View *o,Vector *first,Vector *second) {if(o->count>=16) o->discard();Vertex *v=(Vertex *)((char *)o+o->count*48+36);v[0].x=first->x;v[0].y=first->y;v[0].z=first->z;v[0].color=0xffffffff;v[1].x=second->x;v[1].y=second->y;v[1].z=second->z;v[1].color=0xffffffff;o->count++;}
