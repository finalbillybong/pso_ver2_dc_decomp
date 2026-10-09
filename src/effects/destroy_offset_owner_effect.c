typedef struct Vector { float x,y,z; } Vector;
typedef struct Actor { char unknown0[60]; Vector position; } Actor;
typedef struct Camera { char unknown0[144]; Vector position; } Camera;
typedef struct Child { void *name; unsigned short flags; } Child;
typedef struct Effect { void *name; unsigned short flags; char unknown6[18]; void *vtable; unsigned short unknown28,size; int frames; Actor *owner; Child *child; } Effect;
typedef char check_layout[sizeof(Vector)==12 && sizeof(Actor)==72 && sizeof(Camera)==156 && sizeof(Child)==8 && sizeof(Effect)==44 && (unsigned long)&((Actor *)0)->position==60 && (unsigned long)&((Camera *)0)->position==144 && (unsigned long)&((Child *)0)->flags==4 && (unsigned long)&((Effect *)0)->flags==4 && (unsigned long)&((Effect *)0)->vtable==24 && (unsigned long)&((Effect *)0)->size==30 && (unsigned long)&((Effect *)0)->frames==32 && (unsigned long)&((Effect *)0)->owner==36 && (unsigned long)&((Effect *)0)->child==40 ? 1:-1];
extern char effect_vtable[];
extern void *object_name,*heap;
extern Camera *camera;
extern void base_at(Effect *,void *),base_destroy_at(Effect *,int),release_at(void *,void *),subtract_at(Vector *,Vector *),set_position_at(Child *,Vector *);
extern int valid_at(Actor *);
extern float normalize_at(Vector *);
extern Child *spawn_at(Vector *,int,int);
Effect *destroy_offset_owner_effect(Effect *o,short mode) {
    if(o) {
        o->vtable=effect_vtable;
        if(o->child) { o->child->flags|=1; o->child=0; }
        base_destroy_at(o,0);
        if(mode>0) release_at(heap,o);
    }
    return o;
}
