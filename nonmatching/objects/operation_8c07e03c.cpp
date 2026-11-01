/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07e03c
 * function: operation_8c07e03c
 * language: c++
 * reference size: 1888 bytes
 * compiled size: 1880 bytes (-0.4%)
 * differing lines: 340 of 737 reference instruction lines
 * differing bytes: 1172
 * provenance: generator draft (mode ccastext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0x98];
    int f1d8;
    char unknown1dc[0xa];
    short f1e6;
    char unknown1e8[0x21];
    unsigned char f209;
    unsigned char f20a;
    unsigned char f20b;
    unsigned char f20c;
    char unknown20d[0x7];
    float f214;
    int f218;
    char unknown21c[0x4];
    short f220;
    short f222;
    int f224;
};
class Arg0_13c {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual int v17();
};
typedef struct Arg0_13cData {
    char unknown0[0x198];
    short f198;
    char unknown19a[0x196];
    short f330;
    char unknown332[0x126];
    float f458;
} Arg0_13cData;
extern int g_8c510ba0;
extern "C" void operation_8c07e03c(Object *o)
{
    short v2;
    int v1;
    short v3;
    short v149;
    short v34;
    float v40;
    int v56;
    unsigned char v57;
    int v60;
    unsigned char v61;
    int v64;
    unsigned char v65;
    int v68;
    unsigned char v69;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t8;
    int t10;
    int t12;
    int t14;
    int t15;
    int t16;
    int t17;
    if (((o->f1d8 & 1)) == 0) {
        return;
    }
    v1 = (int)0;
    v2 = (short)((Arg0_13cData *)o->f13c)->f330;
    v3 = (short)((Arg0_13cData *)o->f13c)->f198;
    t1 = ((int (*)(void))0x8c01c25c)();
    if (t1 == 0xf) {
        if ((short)v2 == 0) {
            if (((o->f224 & 2)) != 0) {
                goto L_8c07e0c2;
            }
            o->f224 |= 2;
            v1 = (int)(v1 | 2);
        } else {
            if (((o->f224 & 2)) != 0) {
                o->f224 &= -3;
            }
        }
    }
L_8c07e0c2:;
    if ((short)v2 > 0) {
        t2 = ((int (*)(int, int))0x8c18e768)((short)v3, (short)v2);
        if (t2 > 0xa) {
            if (((o->f224 & 1)) != 0) {
                goto L_8c07e112;
            }
            o->f224 |= 1;
            v1 = (int)(v1 | 1);
        } else {
            if (((o->f224 & 1)) != 0) {
                o->f224 = (unsigned int)o->f224 >> 1 << 1;
            }
        }
    }
L_8c07e112:;
    v149 = (short)o->f1e6;
    if (0x1e > v149) {
        if (((o->f224 & 4)) != 0) {
            goto L_8c07e17e;
        }
        o->f224 |= 4;
        v1 = (int)(v1 | 4);
    } else {
        if (v149 > 0x64) {
            if (((o->f224 & 8)) != 0) {
                goto L_8c07e17e;
            }
            o->f224 |= 8;
            v1 = (int)(v1 | 8);
        } else {
            o->f224 &= -0xd;
        }
    }
L_8c07e17e:;
    t3 = o->f13c->v17();
    if (t3 > o->f220) {
        t4 = o->f13c->v17();
        o->f220 = t4;
        v1 = (int)(v1 | 0x20);
    }
    t5 = ((int (*)(void))0x8c032b10)();
    if (o->f222 != t5) {
        o->f222 = t5;
        v34 = (short)o->f222;
        if (v34 >= 0xb && 0xe >= v34) {
            v1 = (int)(v1 | 0x80);
        }
    }
    v40 = (float)((Arg0_13cData *)o->f13c)->f458;
    if ((float)(int)v40 == 100.0f && ((o->f224 & 0x40)) == 0) {
        o->f224 |= 0x40;
        v1 = (int)(v1 | 0x40);
    } else {
        if (100.0f > (float)(int)v40 && ((o->f224 & 0x40)) != 0) {
            o->f224 &= -0x41;
        }
    }
    if (((o->f224 & 0x10)) != 0) {
        o->f224 &= -0x11;
        v1 = (int)(v1 | 0x10);
    }
    ((void (*)(int))0x8c12b944)(0x224);
    if ((((char)v1 & 0x40)) != 0) {
        t6 = ((int (*)(Object *, int))0x8c07f810)(o, 0);
        if (t6 == 0) {
            return;
        }
        v56 = (int)(g_8c510ba0 != 0);
        v57 = (unsigned char)o->f209;
        if (v56 != 0 && (unsigned int)1 >= (unsigned int)(v57 + -6)) {
            return;
        }
        if (v57 != 1) {
            if (((o->f1d8 & 0x10)) == 0 || o->f214 > 0.0f || (((int (*)(Object *, int))0x8c07fac0)(o, v57)) == 0) {
                return;
            }
            ((void (*)(Object *, int))0x8c074ac4)(o, v57);
            return;
        }
        ((void (*)(Object *))0x8c07da28)(o);
        o->f1d8 &= 0xf0;
        o->f1d8 |= v57;
        o->f214 = 30.0f;
        o->f218 = 0;
        ((void (*)(Object *))0x8c07f5d8)(o);
        ((void (*)(Object *, int))0x8c07f06c)(o, 1);
        return;
    }
    if ((((char)v1 & 1)) != 0) {
        t8 = ((int (*)(Object *, int))0x8c07f810)(o, 1);
        if (t8 == 0) {
            return;
        }
        v60 = (int)(g_8c510ba0 != 0);
        v61 = (unsigned char)o->f20a;
        if (v60 != 0 && (unsigned int)1 >= (unsigned int)(v61 + -6)) {
            return;
        }
        if (v61 != 1) {
            if (((o->f1d8 & 0x10)) == 0 || o->f214 > 0.0f || (((int (*)(Object *, int))0x8c07fac0)(o, v61)) == 0) {
                return;
            }
            ((void (*)(Object *, int))0x8c074ac4)(o, v61);
            return;
        }
        ((void (*)(Object *))0x8c07da28)(o);
        o->f1d8 &= 0xf0;
        o->f1d8 |= v61;
        o->f214 = 30.0f;
        o->f218 = 0;
        ((void (*)(Object *))0x8c07f5d8)(o);
        ((void (*)(Object *, int))0x8c07f06c)(o, 1);
        return;
    }
    if ((((char)v1 & 2)) != 0) {
        t10 = ((int (*)(Object *, int))0x8c07f810)(o, 2);
        if (t10 == 0) {
            return;
        }
        v64 = (int)(g_8c510ba0 != 0);
        v65 = (unsigned char)o->f20b;
        if (v64 != 0 && (unsigned int)1 >= (unsigned int)(v65 + -6)) {
            return;
        }
        if (v65 != 1) {
            if (((o->f1d8 & 0x10)) == 0 || o->f214 > 0.0f || (((int (*)(Object *, int))0x8c07fac0)(o, v65)) == 0) {
                return;
            }
            ((void (*)(Object *, int))0x8c074ac4)(o, v65);
            return;
        }
        ((void (*)(Object *))0x8c07da28)(o);
        o->f1d8 &= 0xf0;
        o->f1d8 |= v65;
        o->f214 = 30.0f;
        o->f218 = 0;
        ((void (*)(Object *))0x8c07f5d8)(o);
        ((void (*)(Object *, int))0x8c07f06c)(o, 1);
        return;
    }
    if ((((char)v1 & 0x80)) != 0) {
        t12 = ((int (*)(Object *, int))0x8c07f810)(o, 3);
        if (t12 == 0) {
            return;
        }
        v68 = (int)(g_8c510ba0 != 0);
        v69 = (unsigned char)o->f20c;
        if (v68 != 0 && (unsigned int)1 >= (unsigned int)(v69 + -6)) {
            return;
        }
        if (v69 != 1) {
            if (((o->f1d8 & 0x10)) == 0 || o->f214 > 0.0f || (((int (*)(Object *, int))0x8c07fac0)(o, v69)) == 0) {
                return;
            }
            ((void (*)(Object *, int))0x8c074ac4)(o, v69);
            return;
        }
        ((void (*)(Object *))0x8c07da28)(o);
        o->f1d8 &= 0xf0;
        o->f1d8 |= v69;
        o->f214 = 30.0f;
        o->f218 = 0;
        ((void (*)(Object *))0x8c07f5d8)(o);
        ((void (*)(Object *, int))0x8c07f06c)(o, 1);
        return;
    }
    if ((((char)v1 & 0x20)) != 0) {
        if (((o->f1d8 & 0x10)) == 0) {
            return;
        }
        if (o->f214 > 0.0f) {
            return;
        }
        t14 = ((int (*)(Object *, int))0x8c07fac0)(o, 2);
        if (t14 == 0) {
            return;
        }
        ((void (*)(Object *, int))0x8c074ac4)(o, 2);
        return;
    }
    if ((((char)v1 & 0x10)) != 0) {
        if (((o->f1d8 & 0x10)) == 0) {
            return;
        }
        if (o->f214 > 0.0f) {
            return;
        }
        t15 = ((int (*)(Object *, int))0x8c07fac0)(o, 3);
        if (t15 == 0) {
            return;
        }
        ((void (*)(Object *, int))0x8c074ac4)(o, 3);
        return;
    }
    if ((((char)v1 & 4)) != 0) {
        if (((o->f1d8 & 0x10)) == 0) {
            return;
        }
        if (o->f214 > 0.0f) {
            return;
        }
        t16 = ((int (*)(Object *, int))0x8c07fac0)(o, 5);
        if (t16 == 0) {
            return;
        }
        ((void (*)(Object *, int))0x8c074ac4)(o, 5);
        return;
    }
    if ((((char)v1 & 8)) != 0 && ((o->f1d8 & 0x10)) != 0 && !(o->f214 > 0.0f)) {
        t17 = ((int (*)(Object *, int))0x8c07fac0)(o, 4);
        if (t17 != 0) {
            ((void (*)(Object *, int))0x8c074ac4)(o, 4);
        }
    }
}
