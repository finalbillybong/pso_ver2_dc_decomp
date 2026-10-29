typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1a714c S_c8c1a714c;
typedef struct Object Object;
typedef struct Arg0_184 Arg0_184;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x184];
    Arg0_184 *f184;
    char unknown188[0x228];
    int f3b0;
    char unknown3b4[0x461];
    char f815;
};
struct S_vv1 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    float f10;
    float f14;
    int f18;
    int f1c;
    int f20;
};
struct Arg1 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    float f10;
    float f14;
    int f18;
    int f1c;
    int f20;
};
struct S_c8c1a714c {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
};
extern S_c8c1a714c *operation_8c1a714c(char);
extern int operation_8c1a7260(char, int);
void operation_8c02c390(Object *o, Arg1 *a1)
{
    S_vv1 *v1;
    short v2;
    short v3;
    short v67;
    short v10;
    short v68;
    short v17;
    short v72;
    short v27;
    short v69;
    short v31;
    short v70;
    short v38;
    short v71;
    short v45;
    short v52;
    int v56;
    int v63;
    int v66;
    int t1;
    S_c8c1a714c *t2;
    v1 = (S_vv1 *)o->f184;
    t2 = operation_8c1a714c(o->f815);
    v2 = (short)v1->f00;
    if (!((short)v2 >= 0)) {
        a1->f00 = 1;
        o->f3b0 |= 8;
    } else {
        v3 = (short)t2->f00;
        if ((short)v2 > (short)v3) {
            a1->f00 = v3;
            o->f3b0 |= 8;
        } else {
            a1->f00 = v2;
        }
    }
    v67 = (short)v1->f02;
    if (!(v67 >= 0)) {
        a1->f02 = 1;
        o->f3b0 |= 8;
    } else {
        v10 = (short)t2->f02;
        if (v67 > (short)v10) {
            a1->f02 = v10;
            o->f3b0 |= 8;
        } else {
            a1->f02 = v67;
        }
    }
    v68 = (short)v1->f04;
    if (!(v68 >= 0)) {
        a1->f04 = 1;
        o->f3b0 |= 8;
    } else {
        v17 = (short)t2->f04;
        if (v68 > (short)v17) {
            a1->f04 = v17;
            o->f3b0 |= 8;
        } else {
            a1->f04 = v68;
        }
    }
    if (!(v1->f06 >= 0)) {
        a1->f06 = 1;
        o->f3b0 |= 8;
    }
    v72 = (short)v1->f06;
    v27 = (short)t2->f06;
    if (v72 > (short)v27) {
        a1->f06 = v27;
        o->f3b0 |= 8;
    } else {
        a1->f06 = v72;
    }
    v69 = (short)v1->f08;
    if (!(v69 >= 0)) {
        a1->f08 = 1;
        o->f3b0 |= 8;
    } else {
        v31 = (short)t2->f08;
        if (v69 > (short)v31) {
            a1->f08 = v31;
            o->f3b0 |= 8;
        } else {
            a1->f08 = v69;
        }
    }
    v70 = (short)v1->f0a;
    if (!(v70 >= 0)) {
        a1->f0a = 1;
        o->f3b0 |= 8;
    } else {
        v38 = (short)t2->f0a;
        if (v70 > (short)v38) {
            a1->f0a = v38;
            o->f3b0 |= 8;
        } else {
            a1->f0a = v70;
        }
    }
    v71 = (short)v1->f0c;
    if (!(v71 >= 0)) {
        a1->f0c = 1;
        o->f3b0 |= 8;
    } else {
        v45 = (short)t2->f0c;
        if (v71 > (short)v45) {
            a1->f0c = v45;
            o->f3b0 |= 8;
        } else {
            a1->f0c = v71;
        }
    }
    v52 = (short)v1->f0e;
    if (!((short)v52 >= 0)) {
        a1->f0e = 1;
        o->f3b0 |= 8;
    } else {
        a1->f0e = v52;
    }
    a1->f10 = v1->f10;
    a1->f14 = v1->f14;
    v56 = (int)v1->f18;
    if (!(v56 >= 0)) {
        a1->f18 = 0;
        o->f3b0 |= 2;
    } else {
        if (v56 > 0xc7) {
            a1->f18 = 0xc7;
            o->f3b0 |= 2;
        } else {
            a1->f18 = (int)(v56);
        }
    }
    v63 = (int)v1->f1c;
    t1 = operation_8c1a7260(o->f815, 0xc7);
    if (!(v63 >= 0)) {
        a1->f1c = 0;
        o->f3b0 |= 4;
    } else {
        if (v63 > t1) {
            a1->f1c = (int)(t1);
            o->f3b0 |= 4;
        } else {
            a1->f1c = (int)(v63);
        }
    }
    v66 = (int)v1->f20;
    if (!(v66 >= 0)) {
        a1->f20 = 0;
        o->f3b0 |= 0x20;
        return;
    }
    if (v66 > 0xf423f) {
        a1->f20 = 0xf423f;
        o->f3b0 |= 0x20;
        return;
    }
    a1->f20 = (int)(v66);
}
