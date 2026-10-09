typedef struct Menu { char unknown0[128]; unsigned short flags; } Menu;
typedef struct Resources { char unknown0[500]; const char *title; char unknown504[256]; const char *first,*second; char unknown768[32]; const char *third; } Resources;
typedef struct Context { char unknown0[44]; Resources *resources; } Context;
typedef char check_layout[sizeof(Menu)==130 && sizeof(Resources)==804 && sizeof(Context)==48 && (unsigned long)&((Menu *)0)->flags==128 && (unsigned long)&((Resources *)0)->title==500 && (unsigned long)&((Resources *)0)->first==760 && (unsigned long)&((Resources *)0)->second==764 && (unsigned long)&((Resources *)0)->third==800 && (unsigned long)&((Context *)0)->resources==44 ? 1:-1];
extern Context *context;
extern char configuration[];
extern Menu *create(void *,int,const char *);
extern void add(Menu *,const char *,int,int),position(Menu *,float),refresh(Menu *);
Menu *create_three_choice_menu(void) {
    Menu *menu=create(configuration,3,context->resources->title);
    add(menu,context->resources->first,6,15);
    { const char *label=context->resources->second; add(menu,label,6,17); }
    { const char *label=context->resources->third; add(menu,label,6,23); }
    { unsigned int flags=menu->flags;menu->flags=flags|16; }
    position(menu,206.0f);
    refresh(menu);
    return menu;
}
