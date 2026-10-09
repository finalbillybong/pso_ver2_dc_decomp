typedef struct Pair { float x,y; } Pair;
typedef struct Menu { char unknown0[128]; unsigned short flags; } Menu;
typedef struct Object { char unknown0[36]; int state; char unknown40[4]; Menu *menu; } Object;
typedef struct Resources { char unknown0[16]; char *first; char unknown20[4]; char *second; } Resources;
typedef struct Context { Resources *resources; } Context;
typedef char check_layout[sizeof(Pair)==8 && sizeof(Menu)==130 && sizeof(Object)==48 && sizeof(Resources)==28 && sizeof(Context)==4 && (unsigned long)&((Menu *)0)->flags==128 && (unsigned long)&((Object *)0)->state==36 && (unsigned long)&((Object *)0)->menu==44 && (unsigned long)&((Resources *)0)->first==16 && (unsigned long)&((Resources *)0)->second==24 ? 1:-1];
extern Pair configuration;
extern Context *context;
extern Menu *create(Pair *,int);
extern void add(Menu *,char *,int,int),finish(Menu *),activate(Menu *),destroy(Menu *),request(int,int);
extern int selection(Menu *);
static inline unsigned short flags(Menu *p) { return p->flags; }
void update_two_choice_transition(Object *o) {
    Pair config;
    if(!o->menu) {
        config=configuration;o->menu=create(&config,2);
        add(o->menu,context->resources->first,6,0);
        add(o->menu,context->resources->second,6,1);
        finish(o->menu);activate(o->menu);
        { Menu *menu=o->menu; unsigned int f=menu->flags; menu->flags=f|1; }
    }
    { Menu *menu=o->menu;
      if(menu && (flags(menu)&2)) {
        switch(selection(menu)) {
        case 0:o->state=3;destroy(o->menu);o->menu=0;return;
        case 1:o->state=4;destroy(o->menu);o->menu=0;return;
        }
      }
    }
    { Menu *menu=o->menu;
      if(menu && (flags(menu)&4)) {
        request(43,1);o->state=9;destroy(o->menu);o->menu=0;
      }
    }
}
