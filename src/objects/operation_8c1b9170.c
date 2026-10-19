typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_520 Arg0_520;
typedef struct Arg0_524 Arg0_524;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0xc];
    int f3a0;
    char unknown3a4[0x48];
    int f3ec;
    float f3f0;
    char unknown3f4[0x8];
    int f3fc;
    char unknown400[0x120];
    Arg0_520 *f520;
    Arg0_524 *f524;
    int f528;
};
extern void call_8c11895c(void *);
void operation_8c1b9170(Object *o)
{
    int v1;
    call_8c11895c((void *)(o->f520));
    call_8c11895c((void *)(o->f524));
    v1 = (int)(((int)o->f390 + -4 & 1) + 3);
    if (v1 != -1) {
        o->f3ec = (int)(v1);
        o->f3f0 = 0.0f;
        o->f3fc = (int)(*(int *)((char *)0x8c327a88 + (v1 * 0x14)));
        v1 = (int)(v1 * 0x14);
    }
    o->f528 = 0;
    o->f3a0 = 0x31;
}
