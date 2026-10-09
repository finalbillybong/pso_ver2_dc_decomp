typedef struct Pair {float x,y;} Pair;
typedef struct Object {char unknown0[84]; float height; char unknown88[32]; Pair position; char unknown128; signed char index; char unknown130[10]; void *label;} Object;
typedef char check_layout[sizeof(Pair)==8 && sizeof(Object)==144 && (unsigned long)&((Object *)0)->height==84 && (unsigned long)&((Object *)0)->position==120 && (unsigned long)&((Object *)0)->index==129 && (unsigned long)&((Object *)0)->label==140 ? 1:-1];
extern int position(void *,Pair *,Pair *);
void position_indexed_label(Object *o) {
    Pair delta;
    o->position.y+=(o->index*51.0f+6.0f+27.0f-80.0f)-o->position.y;
    delta.x=0.0f;
    delta.y=o->height-13.0f-15.0f;
    position(o->label,&o->position,&delta);
}
