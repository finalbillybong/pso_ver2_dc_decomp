typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;char unknown32[8];void *transform;char unknown44[8];unsigned int flags;void *resource;char unknown60[208];} View;typedef struct Resource {char unknown0[8];void *model,*transform;} Resource;typedef struct Owner {char unknown0[1068];Resource *resource;} Owner;
typedef char check_sizes[sizeof(View)==268?1:-1];
typedef char check_View_name[(unsigned long)&((View *)0)->name==0?1:-1];
typedef char check_View_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_View_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_View_transform[(unsigned long)&((View *)0)->transform==40?1:-1];
typedef char check_View_flags[(unsigned long)&((View *)0)->flags==52?1:-1];
typedef char check_View_resource[(unsigned long)&((View *)0)->resource==56?1:-1];
typedef char check_Owner_resource[(unsigned long)&((Owner *)0)->resource==1068?1:-1];
typedef char check_Resource_model[(unsigned long)&((Resource *)0)->model==8?1:-1];
typedef char check_Resource_transform[(unsigned long)&((Resource *)0)->transform==12?1:-1];
extern void *heap,*parent,*object_name;extern Owner *owner;extern char descriptor[];extern void *allocate_at(void *,unsigned int);extern void base_at(View *,void *,void *),set_at(View *,void *,int),finish_at(View *);
static inline void initialize(View *o,void *parameter) {View **home=&o;base_at(o,parent,parameter);o->dispatch=(void *)0x8c269fcc;o->name=object_name;o->size=268;o->resource=owner->resource->model;o->transform=owner->resource->transform;set_at(o,descriptor,1);o->flags|=0x40000000;finish_at(o);}
View *create_derived_grid_view(void *parameter) {View *o=allocate_at(heap,268);if(o) initialize(o,parameter);return o;}
