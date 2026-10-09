typedef struct Item {char unknown0[2];short flags;} Item;
typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;int capacity,count;Item **first,**second;} View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_capacity[(unsigned long)&((View *)0)->capacity==32?1:-1];
typedef char check_count[(unsigned long)&((View *)0)->count==36?1:-1];
typedef char check_first[(unsigned long)&((View *)0)->first==40?1:-1];
typedef char check_second[(unsigned long)&((View *)0)->second==44?1:-1];
typedef char check_item_flags[(unsigned long)&((Item *)0)->flags==2?1:-1];
extern void release_at(void *),base_at(View *,int),free_at(void *,void *);extern void *heap;
View *destroy_paired_array_owner(View *o,int release) {if(o) {o->dispatch=(void *)0x8c269e50;release_at(o->second);release_at(o->first);base_at(o,0);if((short)release>0) free_at(heap,o);}return o;}
