typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c026058 S_c8c026058;
typedef struct S_c8c026104 S_c8c026104;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x3b8];
    int f3b8;
    char unknown3bc[0x128];
    int f4e4;
};
struct S_c8c026058 {
    int f00;
};
struct S_vv4 {
    int f00;
};
struct S_c8c026104 {
    char unknown0[0x1];
    unsigned char f01;
};
extern S_c8c026058 *operation_8c026058(void *);
extern S_c8c026104 *select_member_8c026104(void *, int);
static inline unsigned short elem_f01(S_c8c026104 *p, int i) { return p[i].f01; }
int operation_8c0262a0(Object *o)
{
    S_vv4 *v4;
    int v2;
    int v1;
    S_c8c026104 *t1;
    S_c8c026058 *t2;
    if (o->f3b8 != 0) {
        t2 = operation_8c026058((void *)(((char *)o + 0x418)));
        v1 = (int)(((t2->f00 & 1)) != 0);
        if (v1 != 0) {
            v2 = (int)(o->f4e4 == 0);
            if (v2 != 0) {
                v4 = (S_vv4 *)((char *)o + 0x4c0);
                goto L_8c0262e2;
            }
            v4 = (S_vv4 *)&o->f4e4;
        } else {
            v4 = (S_vv4 *)((char *)o + 0x4c0);
        }
L_8c0262e2:;
        t1 = select_member_8c026104((void *)v4, (int)(v4->f00));
        if (elem_f01(t1, 0) != 0) {
            return 1;
        }
    }
    return 0;
}
