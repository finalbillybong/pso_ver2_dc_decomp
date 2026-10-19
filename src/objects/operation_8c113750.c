typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x14];
    int f34;
    char unknown38[0x58];
    Arg0_90 *f90;
    char unknown94[0x5c];
    float ff0;
    char unknownf4[0x28];
    short f11c;
    char unknown11e[0x2];
    float f120;
    char unknown124[0x1c];
    float f140;
};
extern int g_8c30ff90;
extern void operation_8c112e74(void *);
extern void initialize_context_blend_8c1f1430(void *);
extern void call_8c112f40(Object *, int);
extern int call_8c18e8a0(void *, int);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
extern void call_8c1f156c(void *);
Object *operation_8c113750(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    (void)home;
    operation_8c112e74((void *)o);
    o->dispatch = (void *)0x8c269cb4;
    initialize_context_blend_8c1f1430((void *)(((char *)o + 0x124)));
    o->tag = (int)(g_8c30ff90);
    o->size = 0x144;
    call_8c112f40(o, a2);
    if (!((int)(o->f90) >= 0)) {
        o->f90 = (Arg0_90 *)0;
    }
    {
        Object *base = o;
        t1 = call_8c18e8a0((void *)(base->f90), 4);
        base->f11c = *(short *)((char *)0x8c285d88 + (t1 << 1)) & 0xffff;
    }
    o->ff0 = 2.0f;
    o->f120 = 0.0f;
    copy_actor_records((void *)o, (void *)((void *)0x8c30ff64), 1);
    o->f34 |= 0x40000000;
    attach_and_insert_object((void *)o);
    call_8c1f156c((void *)(((char *)o + 0x124)));
    o->f140 = 290.0f;
    return o;
}
