typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469ca0 S_g8c469ca0;
typedef struct S_g8c469ca0_42c S_g8c469ca0_42c;
typedef struct Object Object;
typedef struct Arg0_8c Arg0_8c;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x50];
    Arg0_8c *f8c;
};
struct S_g8c469ca0 {
    char unknown0[0x42c];
    S_g8c469ca0_42c *f42c;
};
extern char g_8c2ffaa0[];
extern void call_8c1ab2c8(Object *);
extern int call_8c18e8a0(void *, int);
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c08601c(Object *o)
{
    int t1;
    call_8c1ab2c8(o);
    t1 = call_8c18e8a0((void *)(o->f8c), 2);
    o->f8c = (Arg0_8c *)t1;
    o->f38 = (int)(*(int *)((char *)((char *)(*(S_g8c469ca0 **)0x8c469ca0)->f42c + 0x8) + (*(short *)((char *)0x8c284f78 + ((int)(o->f8c) << 1)) << 4)));
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001f, (void *)((g_8c2ffaa0 + 0x5e)));
    call_8c38c5b6(-0xf0f10);
}
