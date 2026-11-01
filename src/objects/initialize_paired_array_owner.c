typedef struct Item {char unknown0[2];short flags;} Item;
typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;int capacity,count;Item **first,**second;} View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_capacity[(unsigned long)&((View *)0)->capacity==32?1:-1];
typedef char check_count[(unsigned long)&((View *)0)->count==36?1:-1];
typedef char check_first[(unsigned long)&((View *)0)->first==40?1:-1];
typedef char check_second[(unsigned long)&((View *)0)->second==44?1:-1];
typedef char check_item_flags[(unsigned long)&((Item *)0)->flags==2?1:-1];
extern void TObject_ctor_8c0330e4(View *,void *);extern void *operator_new_8c18de4c(unsigned int);extern void *object_name;
View *TEnemyTaskList_ctor_8c114ad8(View *o,void *parent,int capacity) {View **home=&o;int i;View *current;TObject_ctor_8c0330e4(o,parent);o->dispatch=(void *)0x8c269e50;o->name=object_name;o->size=48;o->capacity=capacity;o->count=0;o->first=(Item **)operator_new_8c18de4c(((unsigned int)o->capacity<<2));o->second=(Item **)operator_new_8c18de4c(((unsigned int)o->capacity<<2));for(i=0;i<(current=o)->capacity;++i) {*(Item **)((char *)current->first+((unsigned int)i<<2))=0;*(Item **)((char *)o->second+((unsigned int)i<<2))=0;}return o;}
