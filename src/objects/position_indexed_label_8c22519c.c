typedef struct Pair {float x,y;} Pair;
typedef struct Object {char unknown0[84]; float height; char unknown88[32]; Pair position; char unknown128[3]; signed char index; char unknown132[24]; void *label;} Object;
typedef char check_layout[sizeof(Pair)==8 && sizeof(Object)==160 && (unsigned long)&((Object *)0)->height==84 && (unsigned long)&((Object *)0)->position==120 && (unsigned long)&((Object *)0)->index==131 && (unsigned long)&((Object *)0)->label==156 ? 1:-1];
extern int position(void *,Pair *,Pair *);
void position_indexed_label_8c22519c(Object *o) {
    Pair delta;
    o->position.y+=(o->index*40.0f+9.0f+16.0f-80.0f)-o->position.y;
    delta.x=0.0f;
    delta.y=o->height-13.0f-15.0f;
    position(o->label,&o->position,&delta);
}
