typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x18];
    Vector3 f324;
};
struct Frame {
    Vector3 f00;
};
struct Arg2 {
    char unknown0[0x1c];
    Vector3 f1c;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c31cf44[];
extern int call_8c045f04(Object *, int, float);
extern float call_8c04745c(Object *, int, float);
extern int allocate_block(void *, unsigned int);
extern void call_8c0edfd0(int, Frame *, int, int, void *);
float operation_8c1a1134(Object *o, int a1, Arg2 *a2)
{
    Frame frame;
    int t1;
    float t2;
    int t3;
    if (o->f30a != 0) {
        t1 = call_8c045f04(o, a1, 1.0f);
        if (t1 != 0) {
            t2 = call_8c04745c(o, a1, 1.0f);
            return t2;
        }
        if (a2 != 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&a2->f1c;
        } else {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f324;
        }
        t3 = allocate_block(g_8c4d97e0, (unsigned int)0x50);
        if (t3 != 0) {
            call_8c0edfd0(t3, (Frame *)((&frame)), -0x10000, 0x14, (void *)((g_8c31cf44 + 0x3c)));
        }
    }
    return 0.0f;
}
