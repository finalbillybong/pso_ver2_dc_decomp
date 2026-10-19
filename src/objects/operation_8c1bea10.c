typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c327fbc S_g8c327fbc;
typedef struct Object Object;
struct Object {
    char unknown0[0x90];
    int f90;
};
extern char g_8c327fc4[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c1bea10(Object *o)
{
    int v1;
    int v2;
    int v4;
    v1 = (int)o->f90;
    if (!(v1 >= 0)) {
        v4 = (int)0;
    } else {
        v2 = (int)v1;
        if (v1 >= 2) {
            v2 = (int)1;
        }
        v4 = (int)v2;
    }
    o->f90 = (int)(v4);
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001a, (void *)((g_8c327fc4 + 0x40)));
    call_8c38cf80(0x13001b, (void *)((g_8c327fc4 + 0x4d)));
    call_8c38cf80(0x13001c, (void *)((g_8c327fc4 + 0x5a)));
    call_8c38cf80(0x13001e, (void *)((g_8c327fc4 + 0x67)));
    call_8c38cf80(0x13001f, (void *)((g_8c327fc4 + 0x74)));
    call_8c38cf80(0x130020, (void *)((g_8c327fc4 + 0x82)), *(S_g8c327fbc **)((char *)0x8c327fbc + (o->f90 << 2)));
    call_8c38c5b6(-0xf0f10);
}
