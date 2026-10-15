typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c324d68 S_g8c324d68;
typedef struct Object Object;
typedef struct Arg0_88 Arg0_88;
struct Object {
    char unknown0[0x6c];
    float f6c;
    char unknown70[0x18];
    Arg0_88 *f88;
    char unknown8c[0x10];
    float f9c;
    int fa0;
};
extern char g_8c324d84[];
extern int call_8c18e8a0(void *, int);
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
extern void call_8c1a9e9c(Object *);
void operation_8c1a9de4(Object *o)
{
    int t1;
    o->f9c = o->f6c;
    t1 = call_8c18e8a0((void *)(o->f88), 5);
    o->fa0 = (int)(t1);
    if (!(o->fa0 >= 0)) {
        o->fa0 = 0;
    }
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001a, (void *)((g_8c324d84 + 0x3f)));
    call_8c38cf80(0x13001e, (void *)((g_8c324d84 + 0x4c)), *(S_g8c324d68 **)((char *)0x8c324d68 + (o->fa0 << 2)));
    call_8c38c5b6(-0xf0f10);
    call_8c1a9e9c(o);
}
