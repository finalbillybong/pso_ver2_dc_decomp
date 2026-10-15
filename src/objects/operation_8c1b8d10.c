typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3e0 Arg0_3e0;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0x2e];
    unsigned short f3c2;
    char unknown3c4[0x1c];
    Arg0_3e0 *f3e0;
};
extern int call_8c18e8a0(void *, int);
extern void call_8c191654(int, int, int);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c1b8d10(Object *o)
{
    int t1;
    if (*(int *)0x8c418248 != (o->f3c2 & 0xffff) || o->f390 == 0x10) {
        o->f3e0 = (Arg0_3e0 *)0;
        return;
    }
    t1 = call_8c18e8a0((void *)(o->f3e0), 0x1e);
    if (t1 == 0) {
        call_8c191654(3, 1, 2);
    }
    if (!((int)(o->f3e0 = (Arg0_3e0 *)((int)o->f3e0 + -1)) > 0)) {
        call_8c05fbf8(0x30033, 0, 0, 0);
        o->f3e0 = (Arg0_3e0 *)0x96;
    }
}
