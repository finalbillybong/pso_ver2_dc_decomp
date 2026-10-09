typedef struct Vector { float x,y,z; } Vector;
typedef struct Entry { unsigned short first,second; int value; } Entry;
typedef struct Parent { char unknown0[32]; short id; } Parent;
typedef struct Transform { char unknown0[12]; float height; } Transform;
typedef struct Child { char unknown0[220]; Transform *transform; } Child;
typedef struct Object { void *resource; char unknown4[20]; void *dispatch; unsigned short unknown28,size; Parent *parent; Vector position; char unknown48[80]; float height; char unknown132[56]; short kind,subkind; int tier; short parent_id; char unknown198[50]; Child *child; int count; Entry entries[11]; int state; } Object;
typedef char check_layout[sizeof(Vector)==12 && sizeof(Entry)==8 && sizeof(Object)==348 && sizeof(Parent)==34 && sizeof(Transform)==16 && sizeof(Child)==224 && (unsigned long)&((Object *)0)->dispatch==24 && (unsigned long)&((Object *)0)->size==30 && (unsigned long)&((Object *)0)->parent==32 && (unsigned long)&((Object *)0)->position==36 && (unsigned long)&((Object *)0)->height==128 && (unsigned long)&((Object *)0)->kind==188 && (unsigned long)&((Object *)0)->tier==192 && (unsigned long)&((Object *)0)->parent_id==196 && (unsigned long)&((Object *)0)->child==248 && (unsigned long)&((Object *)0)->count==252 && (unsigned long)&((Object *)0)->entries==256 && (unsigned long)&((Object *)0)->state==344 && (unsigned long)&((Parent *)0)->id==32 && (unsigned long)&((Transform *)0)->height==12 && (unsigned long)&((Child *)0)->transform==220 ? 1:-1];
extern char dispatch[];
extern void *resource;
extern Object *base(Object *,Parent *,Vector *,int);
extern void construct_array(void *,void *(*)(void *,int),void *(*)(void *,int),unsigned int,unsigned int);
extern void *construct_entry(void *,int);
extern void configure(Object *),emit_control(int,int,int);
extern int emit(unsigned int,void *,int,unsigned int);
extern void *spawn(Vector *,int);
Object *initialize_tiered_effect(Object *o,Parent *parent,Vector *position,int kind) {
    Object **home=&o;
    base(o,parent,position,kind);
    o->dispatch=dispatch;
    construct_array(o->entries,construct_entry,0,8,11);
    o->count=0;o->resource=resource;o->size=348;o->state=0;
    configure(o);
    if(o->child) o->child->transform->height=o->height+5.0f;
    { Object *owner=o; owner->tier=owner->kind/5; }
    switch(o->tier) {
    case 0: {
        int handle=emit(0x20016,&o->position,0,0);
        if(handle>=0) emit_control(handle,256,0);
        if(o->kind>=2) {Vector p=o->position;p.y+=0.3f;spawn(&p,463);}
        break;
    }
    case 1: {
        Vector p;
        emit(0x20016,&o->position,0,0);
        p=o->position;p.y+=0.3f;spawn(&p,463);
        break;
    }
    case 2: {
        Vector p;
        int handle=emit(0x20016,&o->position,0,0);
        if(handle>=0) emit_control(handle,-256,0);
        p=o->position;p.y+=0.3f;spawn(&p,474);
        break;
    }
    }
    if(o->parent) o->parent_id=o->parent->id;
    return o;
}
