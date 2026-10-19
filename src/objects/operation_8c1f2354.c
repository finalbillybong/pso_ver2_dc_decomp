typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
    char unknown34[0x34];
    int f68;
    char unknown6c[0x4];
    int f70;
    char unknown74[0x10];
    float f84;
};
extern int g_8c4689e8;
extern void *g_8c4699f8;
extern void *g_8c4699fc;
extern int g_8c46f560;
extern Block16 g_8c46f564;
extern Object *g_8c4e3160;
extern int g_8c4e3164;
extern int g_8c575570;
extern Block16 g_8c5755ac;
extern void apply_resource_3827d8(void *);
extern void call_8c38ae68(void);
extern void operation_8c1f246c(void *);
extern void call_8c3af5ee(void *);
extern void call_8c3addea(void *, void *, float);
extern void operation_8c0746c8(int);
extern void call_8c38ad10(void);
extern void call_8c391cc4(void);
void operation_8c1f2354(Object *o)
{
    if (o->f28 != 0) {
        g_8c4e3160 = o;
        apply_resource_3827d8((void *)(o->f30));
        call_8c38ae68();
        operation_8c1f246c((void *)o);
        g_8c4e3164 = 0;
        o->f70 = 0;
        if (o->f2c != 0) {
            call_8c3af5ee((void *)((void *)0x8c1f26e8));
            call_8c3addea((void *)(o->f28), (void *)(o->f2c), o->f84);
            call_8c3af5ee((void *)0);
        } else {
            g_8c4699fc = (void *)0x8c1f26e8;
            g_8c4689e8 = 0;
            g_8c4699f8 = (void *)0x8c3aa702;
            operation_8c0746c8((int)(o->f28));
            g_8c4699fc = (void *)0;
        }
        g_8c4e3164 = 0;
        call_8c38ad10();
        g_8c4e3160 = (Object *)0;
        if (((o->f68 & 0x20)) != 0) {
            call_8c391cc4();
            *(Block16 *)&g_8c5755ac = *(Block16 *)&g_8c46f564;
            g_8c575570 = (int)(g_8c46f560);
            o->f68 &= -0x21;
        }
    }
}
