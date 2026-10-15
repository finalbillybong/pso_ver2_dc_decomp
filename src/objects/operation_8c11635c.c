typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_548 Arg0_548;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x508];
    int f540;
    int f544;
    Arg0_548 *f548;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_L8c41cba0 g_8c41cba0;
extern void call_8c122494(void *, void *);
extern void call_8c1221b4(void);
void operation_8c11635c(Object *o)
{
    char *v7;
    if (o->f540 == 0) {
        if (o->f544 == 0) {
            if (((*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c)) & 4)) == 0) {
                return;
            }
            o->f544 = 1;
            return;
        }
        v7 = (char *)*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c));
        if ((((int)(v7) & 4)) != 0) {
            o->f544 = 0;
            call_8c122494((void *)(o->f548), (void *)(((char *)o + 0x3c)));
            call_8c1221b4();
            return;
        }
        if ((((int)(v7) & 0x400)) != 0) {
            o->f544 = 0;
        }
    }
}
