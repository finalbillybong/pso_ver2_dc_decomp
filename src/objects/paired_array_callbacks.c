typedef struct Item {char unknown0[2];short flags;} Item;
typedef struct View {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;int capacity,count;Item **first,**second;} View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_capacity[(unsigned long)&((View *)0)->capacity==32?1:-1];
typedef char check_count[(unsigned long)&((View *)0)->count==36?1:-1];
typedef char check_first[(unsigned long)&((View *)0)->first==40?1:-1];
typedef char check_second[(unsigned long)&((View *)0)->second==44?1:-1];
typedef char check_item_flags[(unsigned long)&((Item *)0)->flags==2?1:-1];
int paired_array_has_active_item(View *o) {int i;int count=o->count;for(i=0;i<count;++i) {Item *item=*(Item **)((char *)o->second+((unsigned int)i<<2));if(item&&((short)item->flags&8)==0) return 1;}return 0;}
void paired_array_idle_callback(void) {}
