typedef struct Pair { float x,y; } Pair;
typedef struct Menu { char unknown0[84]; float height; char unknown88[32]; Pair position; char unknown128[16]; void *secondary,*label; } Menu;
typedef char check_layout[sizeof(Pair)==8 && sizeof(Menu)==152 && (unsigned long)&((Menu *)0)->height==84 && (unsigned long)&((Menu *)0)->position==120 && (unsigned long)&((Menu *)0)->label==148 && (unsigned long)&((Menu *)0)->secondary==144 ? 1:-1];
extern int position_label(void *,Pair *,float *);
void position_menu_label_8c1cdbc8(Menu *o) {
    float offset[2];
    if(o->label) {
        offset[0]=0.0f;
        offset[1]=o->height-26.0f;
        if(o->secondary) offset[1]-=2.0f;
        position_label(o->label,&o->position,offset);
    }
}
