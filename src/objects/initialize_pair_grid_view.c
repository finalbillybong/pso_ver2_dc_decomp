typedef struct Pair {void *first;unsigned int second;} Pair;typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;char unknown32[20];unsigned int flags;char unknown56[44];unsigned int field100;char unknown104[24];unsigned int field128,field132,field136;float field140;Pair *pairs;float field148;unsigned int field152,capacity;} View;
typedef char check_size[sizeof(View)==160&&sizeof(Pair)==8?1:-1];
typedef char check_name[(unsigned long)&((View *)0)->name==0?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_flags[(unsigned long)&((View *)0)->flags==52?1:-1];
typedef char check_field100[(unsigned long)&((View *)0)->field100==100?1:-1];
typedef char check_field128[(unsigned long)&((View *)0)->field128==128?1:-1];
typedef char check_field132[(unsigned long)&((View *)0)->field132==132?1:-1];
typedef char check_field136[(unsigned long)&((View *)0)->field136==136?1:-1];
typedef char check_field140[(unsigned long)&((View *)0)->field140==140?1:-1];
typedef char check_pairs[(unsigned long)&((View *)0)->pairs==144?1:-1];
typedef char check_field148[(unsigned long)&((View *)0)->field148==148?1:-1];
typedef char check_field152[(unsigned long)&((View *)0)->field152==152?1:-1];
typedef char check_capacity[(unsigned long)&((View *)0)->capacity==156?1:-1];
extern char parameters[];extern void *object_name;extern void base_at(View *,void *);extern void *allocate_at(unsigned int);
View *initialize_pair_grid_view(View *o,unsigned int capacity) {View **home=&o;base_at(o,parameters);o->dispatch=(void *)0x8c269f1c;o->name=object_name;o->size=160;o->field128=0;o->field132=0;o->field152=0;o->capacity=capacity;o->field136=180;o->field148=0.0f;o->field140=0.0f;o->pairs=allocate_at(capacity<<3);{Pair *p=o->pairs;unsigned int i;for(i=0;i<capacity;++i) {p->first=0;p->second=0;++p;}}return o;}
