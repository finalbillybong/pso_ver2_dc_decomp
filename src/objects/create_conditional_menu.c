typedef struct Menu { char unknown0[128]; unsigned short flags; } Menu;
typedef struct Resources { char unknown0[500]; const char *title; char unknown504[248]; const char *first,*second; } Resources;
typedef struct Context { char unknown0[44]; Resources *resources; } Context;
typedef char check_layout[sizeof(Menu)==130 && sizeof(Resources)==760 && sizeof(Context)==48 && (unsigned long)&((Menu *)0)->flags==128 && (unsigned long)&((Resources *)0)->title==500 && (unsigned long)&((Resources *)0)->first==752 && (unsigned long)&((Resources *)0)->second==756 && (unsigned long)&((Context *)0)->resources==44 ? 1:-1];
extern Context *context;
extern char configuration[];
extern int current_area(void);
extern void add_colored(Menu *,const char *,int,int,unsigned int);
extern Menu *create(void *,int,const char *);
extern void add(Menu *,const char *,int,int),position(Menu *,float),refresh(Menu *);
Menu *create_conditional_menu(void) {
    Menu *menu=create(configuration,2,context->resources->title);
    add(menu,context->resources->first,6,29);
    if(current_area()==15) add(menu,context->resources->second,6,33);
    else add_colored(menu,context->resources->second,22,33,0xff686868);
    { unsigned int flags=menu->flags;menu->flags=flags|16; }
    position(menu,167.0f);
    refresh(menu);
    return menu;
}
