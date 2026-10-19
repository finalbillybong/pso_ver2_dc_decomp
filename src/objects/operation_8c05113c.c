typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2f8];
    short f330;
    char unknown332[0x24];
    short f356;
    short f358;
    short f35a;
};
extern void call_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, void *, float);
extern void refresh_follow_effect_8c052180(void *);
void operation_8c05113c(Object *o)
{
    void *v1;
    float v2;
    short *pf1;
    call_8c01c5f0(o);
    if (((o->f34 & 0x800000)) == 0) {
        v1 = (void *)0;
        v2 = (float)0.0f;
        operation_8c04a43c((void *)o, (void *)v1, v2);
    }
    refresh_follow_effect_8c052180((void *)o);
    pf1 = (short *)((char *)o + 0x358);
    if (!(((*pf1)--) >= 0)) {
        o->f34 &= -0x101;
        o->f358 = o->f356;
        o->f35a = o->f330;
    }
}
