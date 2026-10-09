typedef struct Menu { char unknown0[128]; unsigned short flags; } Menu;
typedef struct Child { char unknown0[34]; unsigned short flags; } Child;
typedef struct Hud { char unknown0[32]; unsigned short flags; char unknown34[50]; Child *child; } Hud;
typedef struct Object { char unknown0[228]; float threshold; Menu *menu; char unknown236[20]; int counter; char unknown260[8]; short request,unknown270,state; char unknown274[122]; int pending; } Object;
typedef struct Context { char unknown0[44]; char **resources; } Context;
typedef struct Effect { char unknown0[4]; unsigned short flags; } Effect;
typedef char check_layout[sizeof(Menu)==130 && sizeof(Child)==36 && sizeof(Hud)==88 && sizeof(Object)==400 && sizeof(Context)==48 && sizeof(Effect)==6 && (unsigned long)&((Menu *)0)->flags==128 && (unsigned long)&((Child *)0)->flags==34 && (unsigned long)&((Hud *)0)->flags==32 && (unsigned long)&((Hud *)0)->child==84 && (unsigned long)&((Object *)0)->threshold==228 && (unsigned long)&((Object *)0)->menu==232 && (unsigned long)&((Object *)0)->counter==256 && (unsigned long)&((Object *)0)->request==268 && (unsigned long)&((Object *)0)->state==272 && (unsigned long)&((Object *)0)->pending==396 && (unsigned long)&((Context *)0)->resources==44 && (unsigned long)&((Effect *)0)->flags==4 ? 1:-1];
extern Context *context;
extern Hud *hud;
extern Effect *effect;
extern void *threshold_active(Object *,float);
extern Menu *create(float *,int);
extern void add(Menu *,char *,int,int,int),finish(Menu *),activate(Menu *),destroy(Menu *);
static inline void enable_hud(void) {
    { Hud *p=hud; if(p) p->flags|=32; }
    { Hud *p=hud; if(p) { Child *q=p->child; if(q) q->flags|=8; } }
    { Hud *p=hud; if(p) { p->flags|=1; if(effect) effect->flags|=16; } }
}
static inline void disable_hud(void) {
    { Hud *p=hud; if(p) p->flags&=~32; }
    { Hud *p=hud; if(p) { Child *q=p->child; if(q) q->flags&=~8; } }
    { Hud *p=hud; if(p) { p->flags&=~1; if(effect) effect->flags&=~16; } }
}
void update_overlay_menu(Object *o) {
    float configuration[2];
    switch(o->state) {
    case 0:o->state=1;o->counter=0;break;
    case 1:
        if(threshold_active(o,o->threshold)) {
            if(!o->menu) {
                configuration[0]=228.0f;configuration[1]=224.0f;
                o->menu=create(configuration,7);
                { Menu *menu=o->menu; if(menu) {
                    add(menu,context->resources[159],0,0,-1);
                    { unsigned int flags=o->menu->flags; o->menu->flags=flags|64; }
                    finish(o->menu);activate(o->menu);
                } }
                enable_hud();
            }
        } else {
            if(o->menu) { destroy(o->menu);o->menu=0; }
            disable_hud();
        }
        if(!o->pending) o->request=0;
        break;
    case -1:
        if(o->menu) { destroy(o->menu);o->menu=0; }
        disable_hud();
        break;
    }
}
