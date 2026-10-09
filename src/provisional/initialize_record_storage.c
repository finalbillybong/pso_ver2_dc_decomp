typedef struct Entry { float value; int flags; float x,y,z; } Entry;
typedef struct View { void *name; char unknown4[20]; void *vtable; unsigned short unknown28,size; int count,first,second; void *buffer; Entry *entries; int mode; float factor; } View;
typedef char check_layout[sizeof(Entry)==20 && sizeof(View)==60 && (unsigned long)&((Entry *)0)->flags==4 && (unsigned long)&((Entry *)0)->x==8 && (unsigned long)&((Entry *)0)->y==12 && (unsigned long)&((Entry *)0)->z==16 && (unsigned long)&((View *)0)->vtable==24 && (unsigned long)&((View *)0)->size==30 && (unsigned long)&((View *)0)->count==32 && (unsigned long)&((View *)0)->first==36 && (unsigned long)&((View *)0)->second==40 && (unsigned long)&((View *)0)->buffer==44 && (unsigned long)&((View *)0)->entries==48 && (unsigned long)&((View *)0)->mode==52 && (unsigned long)&((View *)0)->factor==56 ? 1:-1];
extern void *object_name,*heap;
extern char object_vtable[];
extern void base_at(View *,void *),release_at(void *),destroy_base_at(View *,int),free_at(void *,void *);
extern void *allocate_at(unsigned int);
View *initialize_record_storage(View *o,void *parent,int count) {
    View **home=&o;
    int i;
    base_at(o,parent);
    o->vtable=object_vtable;
    o->name=object_name;
    o->size=60;
    o->count=count;
    o->first=0;
    o->second=0;
    o->buffer=allocate_at((unsigned int)o->count<<5);
    o->entries=allocate_at(o->count*20);
    for(i=0;i<o->count;++i) {
        int offset=i*20;
        *(float *)((char *)&o->entries->value+offset)=0.0f;
        *(int *)((char *)&o->entries->flags+offset)=0;
        *(float *)((char *)&o->entries->x+offset)=0.0f;
        *(float *)((char *)&o->entries->y+offset)=0.0f;
        *(float *)((char *)&o->entries->z+offset)=0.0f;
    }
    o->mode=48;
    o->factor=0.85f;
    return o;
}
