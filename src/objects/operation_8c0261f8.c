typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c026058 S_c8c026058;
typedef struct Object Object;
typedef struct S_vv28 S_vv28;
typedef struct S_vv28_0 S_vv28_0;
struct S_c8c026058 {
    int f00;
};
struct Object {
    char unknown0[0x4e4];
    int f4e4;
};
struct S_vv28 {
    S_vv28_0 *f00;
};
extern int player_flag13_8c02935c(void);
extern int call_8c0262a0(Object *);
extern S_c8c026058 *call_8c026058(void *);
extern int select_member_8c026104(void *, int);
int operation_8c0261f8(Object *o, int a1)
{
    int v21;
    int v22;
    int v25;
    S_vv28 *v28;
    int v29;
    int t1;
    int t2;
    S_c8c026058 *t3;
    int t4;
    if (a1 == 1) {
        t1 = player_flag13_8c02935c();
        if (t1 != 0) {
            return 1;
        }
        t2 = call_8c0262a0(o);
        if (t2 != 0) {
            return 1;
        }
    }
    t3 = call_8c026058((void *)(((char *)o + 0x418)));
    v21 = (int)(((t3->f00 & 1)) != 0);
    if (v21 != 0) {
        v22 = (int)(o->f4e4 == 0);
        if (v22 != 0) {
            v28 = (S_vv28 *)((char *)o + 0x4c0);
            goto L_8c02625c;
        }
        v25 = (int)&o->f4e4;
    } else {
        v25 = (int)((char *)o + 0x4c0);
    }
    v28 = (S_vv28 *)v25;
L_8c02625c:;
    t4 = select_member_8c026104((void *)v28, (int)(v28->f00));
    v29 = (int)(((*(short *)((char *)t4 + (a1 << 2) + 0x2) & 1)) != 0);
    return (int)(v29);
}
