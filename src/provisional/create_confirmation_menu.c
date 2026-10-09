typedef struct Pair { float x,y; } Pair;
typedef struct Resources { char unknown0[4]; char *first,*second; } Resources;
typedef struct Context { char unknown0[80]; Resources *resources; } Context;
typedef char check_layout[sizeof(Pair)==8 && sizeof(Resources)==12 && sizeof(Context)==84 && (unsigned long)&((Context *)0)->resources==80 && (unsigned long)&((Resources *)0)->first==4 && (unsigned long)&((Resources *)0)->second==8 ? 1:-1];
extern Pair configuration;
extern Context *context;
extern void *create(Pair *,int);
extern void add(void *,char *,int,int),width(void *,float),select(void *,int),activate(void *);
void *create_confirmation_menu(void) {
    Pair p=configuration;
    void *menu=create(&p,2);
    add(menu,context->resources->first,6,0);
    add(menu,context->resources->second,6,1);
    width(menu,442.0f);select(menu,1);activate(menu);
    return menu;
}
