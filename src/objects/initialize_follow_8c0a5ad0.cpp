class Follow {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void refresh();
};
typedef struct Data {
    char unknown0[0x20];
    char *target;
    short target_id;
    char unknown26[0x16];
    int mode;
    char unknown40[0x30];
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    int g;
    int h;
    int i;
    int j;
    int k;
    float l;
    int m;
} Data;
extern "C" void initialize_follow_base(Follow *);
extern "C" char *lookup_low_id(int);
extern "C" Follow *initialize_follow_8c0a5ad0(Follow *o)
{
    Follow **self = &o;
    char *t;
    (void)self;
    initialize_follow_base(o);
    *(void **)((char *)o + 0x18) = (void *)0x8c265c54;
    ((Data *)o)->i = 0;
    ((Data *)o)->g = 0;
    ((Data *)o)->h = 0;
    ((Data *)o)->a = 0.0f;
    ((Data *)o)->b = 0.0f;
    ((Data *)o)->c = 0.0f;
    ((Data *)o)->d = 0.0f;
    ((Data *)o)->e = 0.0f;
    ((Data *)o)->f = 0.0f;
    ((Data *)o)->mode = 5;
    ((Data *)o)->target = t = lookup_low_id(*(int *)0x8c418248);
    if (t != 0) {
        ((Data *)o)->target_id = *(short *)(t + 0x20);
    }
    o->refresh();
    ((Data *)o)->j = 0;
    ((Data *)o)->k = 0;
    ((Data *)o)->m = 0;
    ((Data *)o)->l = 0.0f;
    return o;
}
