typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct S_vv24 S_vv24;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x3a8];
    unsigned short f3a8;
    char unknown3aa[0x2];
    Arg0_3ac *f3ac;
    char unknown3b0[0x24];
    int f3d4;
    int f3d8;
};
struct S_vv4 {
    char unknown0[0x34];
    int f34;
};
struct S_vv24 {
    char unknown0[0x34];
    int f34;
};
extern int hierarchy_is_active(void *);
extern int operation_8c0113bc(int, int);
int operation_8c05c1f0(Object *o)
{
    S_vv4 *v4;
    S_vv24 *v24;
    int v1;
    int pm5;
    int t2;
    int v3;
    int v17;
    int pm4;
    int pm9;
    int t1;
    int v5;
    int pm7;
    int pm8;
    if (o->f3d4 >= o->f3d8) {
        v1 = 1;
        o->f3d4 = 0;
    } else {
        o->f3d4 += 1;
        v1 = (int)0;
    }
    if (v1 != 0) {
        v3 = (int)0;
        v4 = (S_vv4 *)o->f3ac;
        v5 = (int)0;
        if (v4 != 0) {
            t1 = hierarchy_is_active((void *)v4);
            if (t1 != 0) {
                v5 = (int)1;
            }
        }
        if (v5 != 0 && ((v4->f34 & 0x2040800)) == 0) {
            v3 = (int)1;
        }
        if (v3 != 0) {
            t1 = (int)v4;
            pm4 = t1 + 0x324;
            t1 = (int)((0x324 + (char *)o));
            t2 = operation_8c0113bc(t1, (pm4));
            if (!(0 != t2)) {
                pm9 = 1;
                pm5 = pm9;
                v17 = pm5;
                goto L_8c05c264;
            }
        }
        v17 = (int)0;
    L_8c05c264:
        ;
        if (v17 != 0) {
            return 1;
        }
    } else {
        int v23;
        int v25;
        v23 = 0;
        pm8 = (int)(char)0;
        v24 = (S_vv24 *)o->f3ac;
        v1 = pm8;
        v25 = v1;
        if (v24 != 0) {
            int t3;
            t3 = hierarchy_is_active((void *)v24);
            if (t3 != 0) {
                v25 = (int)1;
            }
        }
        if (v25 != 0 && ((v24->f34 & 0x2040800)) == 0) {
            v23 = (int)1;
        }
        if (0 != v23) {
            pm7 = 1;
            return pm7;
        }
        v5 = (int)v23;
        v3 = (int)v25;
    }
    o->f3ac = (Arg0_3ac *)0;
    o->f3a8 = 0xffff;
    return 0;
}
