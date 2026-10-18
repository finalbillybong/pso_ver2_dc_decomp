typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x424];
    int f424;
    int f428;
};
struct Frame {
    int f00;
};
extern void call_8c1334f0(int, int, int, int, Frame *);
extern int call_8c3be010(int);
int operation_8c03ec84(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    char *v2;
    int v1;
    int t1;
    v2 = (char *)o->f424;
    if (v2 != 0) {
        v1 = (int)o->f428;
        v1 += (int)v2;
        call_8c1334f0(a1, a2, a3, v1, (Frame *)((&frame)));
        frame.f00 = ((unsigned int)frame.f00 >> 2 >> 2 >> 1) + 1 << 5;
        o->f428 += frame.f00;
        return (int)(v1);
    }
    t1 = call_8c3be010(a1);
    return (int)(t1);
}
