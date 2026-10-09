typedef struct Menu { char unknown0[128]; unsigned short flags; } Menu;
typedef struct Child { char unknown0[34]; unsigned short flags; } Child;
typedef struct Hud { char unknown0[32]; unsigned short flags; char unknown34[50]; Child *child; } Hud;
typedef struct Object { char unknown0[232]; Menu *menu; char unknown236[168]; Menu *roster,*panel; } Object;
typedef struct Context { char unknown0[44]; char **resources; } Context;
typedef struct Effect { char unknown0[4]; unsigned short flags; } Effect;
typedef char check_layout[sizeof(Object)==412 && sizeof(Hud)==88 && sizeof(Child)==36 && sizeof(Effect)==6 && (unsigned long)&((Object *)0)->menu==232 && (unsigned long)&((Object *)0)->roster==404 && (unsigned long)&((Object *)0)->panel==408 && (unsigned long)&((Hud *)0)->flags==32 && (unsigned long)&((Hud *)0)->child==84 && (unsigned long)&((Child *)0)->flags==34 && (unsigned long)&((Effect *)0)->flags==4 ? 1:-1];
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
void clear_overlay_elements(Object *o) {
    if(o->panel) {destroy(o->panel);o->panel=0;}
    if(o->menu) {destroy(o->menu);o->menu=0;}
    if(o->roster) {destroy(o->roster);o->roster=0;}
    disable_hud();
}
