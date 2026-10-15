typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469ba0 S_g8c469ba0;
typedef struct Object Object;
typedef struct Arg0_f0 Arg0_f0;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x30];
    float f6c;
    char unknown70[0x80];
    Arg0_f0 *ff0;
};
extern char g_8c2fec68[];
extern void call_8c1ab2c8(Object *);
extern int call_8c18e8a0(void *, int);
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c080994(Object *o)
{
    int t1;
    call_8c1ab2c8(o);
    o->ff0 = (Arg0_f0 *)(int)o->f6c;
    t1 = call_8c18e8a0((void *)(o->ff0), 2);
    o->ff0 = (Arg0_f0 *)t1;
    o->f38 = (int)(*(int *)((char *)((char *)*(S_g8c469ba0 **)0x8c469ba0 + 0x4) + ((int)(o->ff0) << 2)));
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001a, (void *)((g_8c2fec68 + 0x2e)));
    call_8c38c5b6(-0xf0f10);
}
