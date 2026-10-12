typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0xf0];
    int f12c;
};
extern int g_8c4689e8;
extern void *g_8c4699f8;
extern int g_8c4699fc;
extern void call_8c0746c8(void *);
extern void restore_child_blend(void);
void operation_8c074678(Object *o, int a1)
{
    g_8c4699fc = o->f12c;
    g_8c4689e8 = a1;
    g_8c4699f8 = (void *)0x8c3aa702;
    call_8c0746c8(o->f38);
    g_8c4699f8 = 0;
    g_8c4689e8 = 0;
    g_8c4699fc = 0;
    restore_child_blend();
}
