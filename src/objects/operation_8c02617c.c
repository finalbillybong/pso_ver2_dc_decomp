typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c026058 S_c8c026058;
typedef struct Object Object;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_0 S_vv8_0;
struct S_c8c026058 {
    int f00;
};
struct Object {
    char unknown0[0x4e4];
    int f4e4;
};
struct S_vv8 {
    S_vv8_0 *f00;
};
extern S_c8c026058 *call_8c026058(void *);
extern int select_member_8c026104(void *, int);
int operation_8c02617c(Object *o, int a1)
{
    int v1;
    int v2;
    int v5;
    S_vv8 *v8;
    int v9;
    S_c8c026058 *t1;
    int t2;
    t1 = call_8c026058((void *)(((char *)o + 0x418)));
    v1 = (int)(((t1->f00 & 1)) != 0);
    if (v1 != 0) {
        v2 = (int)(o->f4e4 == 0);
        if (v2 != 0) {
            v8 = (S_vv8 *)((char *)o + 0x4c0);
            goto L_8c0261bc;
        }
        v5 = (int)&o->f4e4;
    } else {
        v5 = (int)((char *)o + 0x4c0);
    }
    v8 = (S_vv8 *)v5;
L_8c0261bc:;
    t2 = select_member_8c026104((void *)v8, (int)(v8->f00));
    v9 = (int)(((*(short *)((char *)t2 + (a1 << 2) + 0x2) & 1)) != 0);
    return (int)(v9);
}
