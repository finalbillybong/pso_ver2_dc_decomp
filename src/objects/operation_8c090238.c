typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0bb998 S_c8c0bb998;
typedef struct Object Object;
typedef struct Arg0_58 Arg0_58;
typedef struct Arg0_5c Arg0_5c;
typedef struct Arg0_5c_0 Arg0_5c_0;
struct Object {
    char unknown0[0x40];
    int f40;
    char unknown44[0x4];
    int f48;
    Vector3 f4c;
    Arg0_58 *f58;
    S_c8c0bb998 *f5c;
};
struct Arg0_58 {
    short f00;
};
struct S_c8c0bb998 {
    int f00;
    Vector3 f04;
};
struct Arg0_5c {
    Arg0_5c_0 *f00;
    Vector3 f04;
};
extern S_c8c0bb998 *forward_scene_record(void *, int);
extern int call_8c090198(Object *, void *);
void operation_8c090238(Object *o, int a1)
{
    int v1;
    S_c8c0bb998 *t1;
    int t2;
    v1 = (int)0;
    while (o->f58->f00 > v1) {
        t1 = forward_scene_record((void *)o, v1);
        if (t1->f00 == a1) {
            goto L_8c090268;
        }
        v1 = (int)(v1 + 1);
    }
L_8c090268:;
    if (!(v1 > (o->f58->f00 + -1))) {
        o->f5c = t1;
        o->f4c = o->f5c->f04;
        t2 = call_8c090198(o, (void *)(o->f5c->f00));
        o->f48 = t2;
        o->f40 = v1;
    }
}
