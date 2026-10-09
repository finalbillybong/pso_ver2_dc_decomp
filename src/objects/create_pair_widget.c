typedef struct Pair {float x,y;} Pair;
typedef struct Context {char unknown0[88]; const char **text;} Context;
typedef char check_layout[sizeof(Pair)==8 && sizeof(Context)==92 && (unsigned long)&((Context *)0)->text==88 ? 1:-1];
extern Pair origin,extent;
extern Context *context;
extern void *create(Pair *,Pair *);
extern int add(void *,const char *,int);
void *create_pair_widget(void) {
    Pair p=origin;
    Pair size=extent;
    void *widget=create(&p,&size);
    add(widget,*context->text,1);
    return widget;
}
