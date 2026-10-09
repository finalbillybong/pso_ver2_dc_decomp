typedef struct Menu { char unknown0[128]; unsigned short flags; } Menu;
typedef struct Resources { char unknown0[512]; const char *title; char unknown516[136]; const char *item; } Resources;
typedef struct Context { char unknown0[44]; Resources *resources; } Context;
typedef char check_layout[sizeof(Menu)==130 && sizeof(Resources)==656 && sizeof(Context)==48 && (unsigned long)&((Menu *)0)->flags==128 && (unsigned long)&((Resources *)0)->title==512 && (unsigned long)&((Resources *)0)->item==652 && (unsigned long)&((Context *)0)->resources==44 ? 1:-1];
extern Context *context;
extern char configuration[];
extern Menu *create(void *,int,const char *);
extern void add(Menu *,const char *,int,int),position(Menu *,float,float);
Menu *create_single_entry_menu(void) {
    Menu *menu=create(configuration,1,context->resources->title);
    add(menu,context->resources->item,0,0);
    { unsigned int value=menu->flags; menu->flags=value|64; }
    { unsigned int value=menu->flags; menu->flags=value|128; }
    position(menu,191.0f,68.0f);
    return menu;
}
