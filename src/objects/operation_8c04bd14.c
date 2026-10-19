typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg1 Arg1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv4 S_vv4;
typedef struct S_vv6 S_vv6;
struct Frame {
    int f00;
    int f04;
    int f08;
};
struct Object {
    Arg0_0 *tag;
    int f04;
    char unknown8[0x8];
    int f10;
};
struct S_vv2 {
    short f00;
};
struct Arg1 {
    short f00;
};
struct S_vv4 {
    unsigned short f00;
};
struct S_vv6 {
    short f00;
};
extern int call_8c04bdf8(Object *, short, void *, void *, Frame *);
int operation_8c04bd14(Object *o, Arg1 *a1)
{
    Frame frame;
    S_vv2 *v2;
    int v5;
    short v8;
    int v3;
    S_vv6 *v6;
    int t1;
    int t2;
    int t3;
    (&frame)->f00 = 0;
    (&frame)->f04 = 0;
    (&frame)->f08 = 0;
    v2 = (S_vv2 *)o->tag;
    v3 = (int)o->f04;
    while (v3 > 0) {
        t1 = call_8c04bdf8(o, v2->f00, (void *)(&(&frame)->f08), (void *)(&(&frame)->f04), (Frame *)((&frame)));
        if (t1 != 0) {
            v2->f00 = 0;
            a1->f00 = 0;
            o->f04 -= v3;
            o->f10 -= v3;
            return 1;
        }
        v2 = (S_vv2 *)((char *)v2 + 2);
        v3 = (int)(v3 + -1);
    }
    while ((unsigned short)(v8 = a1->f00) != 0) {
        t2 = call_8c04bdf8(o, v8, (void *)(&(&frame)->f08), (void *)(&(&frame)->f04), (Frame *)((&frame)));
        if (t2 != 0) {
            a1->f00 = 0;
            *(short *)((char *)((char *)o->tag + 0x0) + (o->f04 << 1)) = 0;
            o->f10 = (int)(o->f04);
            return 1;
        }
        a1 = (Arg1 *)((char *)a1 + 2);
    }
    v3 = (int)o->f04;
    v6 = (S_vv6 *)&*(int *)((char *)((char *)o->tag + 0x0) + (v3 << 1));
    v5 = (int)((int)o->f10 - v3);
    while (v5 > 0) {
        t3 = call_8c04bdf8(o, v6->f00, (void *)(&(&frame)->f08), (void *)(&(&frame)->f04), (Frame *)((&frame)));
        if (t3 != 0) {
            v6->f00 = 0;
            o->f10 -= v5;
            return 1;
        }
        v6 = (S_vv6 *)((char *)v6 + 2);
        v5 = (int)(v5 + -1);
    }
    return 0;
}
