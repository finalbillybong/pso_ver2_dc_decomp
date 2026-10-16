typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_c S_vv5_c;
struct Object {
    char unknown0[0x34];
    int f34;
};
struct S_vv5 {
    char unknown0[0xc];
    S_vv5_c *f0c;
    char unknown10[0x24];
    int f34;
};
extern int call_8c0dc5c0(S_vv5 *, int, int);
S_vv5 *operation_8c0dc510(Object *o, int a1, int a2, S_vv5 *a3)
{
    int v1;
    int v2;
    int v3;
    int v4;
    int v6;
    int v7;
    int t1;
    v1 = (int)0x100;
    if (((o->f34 & v1)) == 0) {
        return 0;
    }
    v2 = (int)0x400;
    if (((o->f34 & v2)) != 0) {
        return 0;
    }
    v3 = !(o->f34 & 1);
    if (v3 != 0) {
        return 0;
    }
    v4 = (int)0x200;
    while (a3 != 0) {
        v6 = (int)a3->f34;
        if (((v6 & v1)) != 0 && ((v6 & v2)) == 0) {
            v7 = !(v6 & 1);
            if (v7 == 0 && a3 != (void *)o) {
                if (((o->f34 & v4)) != 0 && ((v6 & v4)) != 0) {
                    goto L_8c0dc596;
                }
                t1 = call_8c0dc5c0(a3, a1, a2);
                if (t1 != 0) {
                    return a3;
                }
            }
        }
L_8c0dc596:;
        a3 = (S_vv5 *)a3->f0c;
    }
    return 0;
}
