typedef struct Vector { float x,y,z; } Vector;
typedef struct Owner { char unknown0[804]; Vector position; char unknown816[32]; unsigned int flags; } Owner;
typedef struct Effect { void *link; unsigned short flags; char unknown6[18]; void *vtable; unsigned int unknown28; Owner *owner; Vector position; int frames,handle; } Effect;
typedef char check_layout[sizeof(Vector)==12 && sizeof(Owner)==852 && sizeof(Effect)==56 && (unsigned long)&((Owner *)0)->position==804 && (unsigned long)&((Owner *)0)->flags==848 && (unsigned long)&((Effect *)0)->flags==4 && (unsigned long)&((Effect *)0)->vtable==24 && (unsigned long)&((Effect *)0)->owner==32 && (unsigned long)&((Effect *)0)->position==36 && (unsigned long)&((Effect *)0)->frames==48 && (unsigned long)&((Effect *)0)->handle==52 ? 1:-1];
extern char effect_vtable[];
extern void *heap;
extern unsigned int effect_ids[];
extern void base_at(Effect *,void *),base_destroy_at(Effect *,int),release_at(void *,void *),stop_at(int),emit_at(Vector *,unsigned int);
extern int start_at(unsigned int,Vector *,int,int);
void update_timed_owner_effect_8c1330b8(Effect *o) {
    int active;
    int i;
    ++o->frames;
    if(o->frames%10==0) {
        for(i=0;i<2;++i) emit_at(&o->position,*(unsigned int *)((char *)effect_ids+((unsigned int)i<<2)));
    }
    active=(o->owner->flags&128)?1:0;
    if(!active) o->flags|=1;
    else if(o->frames>=180) o->flags|=1;
}
