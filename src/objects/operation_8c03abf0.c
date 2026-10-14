typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    Arg0_dc *fdc;
    char unknowne0[0xc];
    int fec;
    char unknownf0[0x228];
    float f318;
    char unknown31c[0x4];
    float f320;
    char unknown324[0xc];
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x30];
    Arg0_38c *f38c;
    char unknown390[0x14];
    int f3a4;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern void call_8c01c5f0(Object *);
extern int check_range_8c01cf68(void *, float);
extern int call_8c24e644(int, void *);
extern void call_8c05fbf8(int, void *, int, int);
extern void update_last_effect(int);
extern void call_8c04a43c(Object *, int, float);
extern void refresh_follow_effect_8c052180(void *);
void operation_8c03abf0(Object *o)
{
    int t1;
    int t2;
    call_8c01c5f0(o);
    t1 = check_range_8c01cf68((void *)o, 0.0f);
    if (t1 != 0) {
        t2 = call_8c24e644(0x30007, (void *)(o->f38c));
        call_8c05fbf8(t2, (void *)(((char *)o + 0x3c)), 0, 0);
        update_last_effect(-0x300);
    }
    o->f320 = 0.0f;
    o->f318 = 0.0f;
    call_8c04a43c(o, 0, 0.0f);
    refresh_follow_effect_8c052180((void *)o);
    if (o->fec != 8) {
        o->f34 &= -0x4000601;
        o->fdc->f18 &= -0x8000001;
        o->f35a = o->f330;
        o->f3a4 = 0;
    }
}
