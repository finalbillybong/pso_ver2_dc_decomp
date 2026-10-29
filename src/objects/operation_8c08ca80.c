typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0bb998 S_c8c0bb998;
typedef struct Object Object;
typedef struct S_vv22 S_vv22;
typedef struct S_vv22_58 S_vv22_58;
typedef struct S_vv22_5c S_vv22_5c;
typedef struct S_vv22_s20 S_vv22_s20;
typedef struct S_vv28 S_vv28;
typedef struct S_vv30 S_vv30;
typedef struct S_vv31 S_vv31;
struct Object {
    char unknown0[0x40];
    int f40;
};
struct S_vv22 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x1c];
    int f40;
    char unknown44[0x4];
    int f48;
    char unknown4c[0xc];
    S_vv22_58 *f58;
    S_c8c0bb998 *f5c;
};
struct S_vv22_58 {
    short f00;
};
struct S_c8c0bb998 {
    int f00;
};
struct S_vv28 {
    int f00;
    int f04;
    int f08;
};
struct S_vv22_s20 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_vv31 {
    int f00;
    int f04;
    int f08;
};
struct S_vv30 {
    int f00;
    int f04;
    int f08;
};
struct S_vv22_5c {
    int f00;
};
extern S_c8c0bb998 *forward_scene_record(void *, int);
extern int call_8c08db98(S_vv22 *, int);
typedef struct Blk12 { int a; int b; int c; } Blk12;
void operation_8c08ca80(Object *o, int a1)
{
    int v24;
    int v21;
    int v17;
    S_c8c0bb998 *t1;
    int t2;
    v24 = (int)o->f40;
    v17 = -1;
    for (;;) {
        v24 = v24 + a1;
        v21 = ((S_vv22 *)o)->f58->f00 + v17;
        if (v24 > v21) {
            v24 = 0;
        }
        if (v24 < 0) {
            v24 = v21;
        }
        t1 = forward_scene_record((void *)((S_vv22 *)o), v24);
        if (t1 != 0 && (int)t1->f00 != v17) {
            break;
        }
    }
    ((S_vv22 *)o)->f5c = t1;
    *(Blk12 *)((char *)((S_vv22 *)o) + 0x20) = *(Blk12 *)((char *)((S_vv22 *)o)->f5c + 0x4);
    *(Blk12 *)((char *)((S_vv22 *)o) + 0xb4) = *(Blk12 *)((char *)((S_vv22 *)o)->f5c + 0x4);
    t2 = call_8c08db98(((S_vv22 *)o), (int)((S_vv22 *)o)->f5c->f00);
    ((S_vv22 *)o)->f48 = (int)(t2);
    ((S_vv22 *)o)->f40 = (int)(v24);
}
