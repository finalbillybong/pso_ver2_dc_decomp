/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c163428
 * function: operation_8c163428
 * language: c++
 * reference size: 784 bytes
 * compiled size: 782 bytes (-0.3%)
 * differing lines: 2 of 346 reference instruction lines
 * differing bytes: 17
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -2 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
class Object {
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
typedef struct ObjectData {
    char unknown0[0x308];
    short f308;
} ObjectData;
typedef struct Req {
    unsigned char f00;
    unsigned char f01;
    unsigned char f02;
    char unknown3[0xd];
    int f10;
} Req;
typedef struct Rec {
    char unknown0[0x4];
    short f04;
    char unknown6[0x4];
    unsigned short f0a;
    unsigned short f0c;
    unsigned short f0e;
    short f10;
} Rec;
typedef struct Flags {
    char unknown0[0x20];
    int f20;
} Flags;
typedef struct Stats {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    short f10;
    short f12;
    short f14;
} Stats;
extern "C" Rec *operation_8c1c7658(void *);
extern "C" int call_8c16337c(Object *, short);
extern "C" void operation_8c029a48(void *, Stats *);
static inline int is_dead(Object *o)
{
    return ((ObjectData *)o)->f308 == 3;
}
extern "C" int operation_8c163428(Object *a0, Req *a1, int *a2)
{
    Object *o;
    Stats st;
    int flags;
    Rec *t;
    int k;
    int r;
    int c1;
    int c2;
    o = a0;
    if (o == 0 || a1 == 0) {
        if (a2 != 0) {
            *a2 |= 0x20;
        }
        return 0;
    }
    k = ((ObjectData *)o)->f308 == 3;
    if (k != 0) {
        if (a2 != 0) {
            *a2 = 0;
        }
        return 1;
    }
    if (*(int *)0x8c4dc800 != 0) {
        k = 0;
        switch ((unsigned char)a1->f00) {
        case 0:
            k = 1;
            break;
        case 1:
            switch (a1->f01) {
            case 1:
                k = 2;
                break;
            case 2:
                k = 3;
                break;
            case 3:
                k = 4;
                break;
            }
            break;
        case 2:
            k = 5;
            break;
        }
        if (k != 0) {
            if (*(Flags **)0x8c513360 != 0) {
                r = ((*(Flags **)0x8c513360)->f20 & 1 << k) != 0;
            } else {
                r = 0;
            }
            if (r == 1) {
                return 0;
            }
        }
    }
    flags = 0;
    switch ((unsigned char)a1->f00) {
    case 0:
        t = operation_8c1c7658(a1);
        if (t != 0) {
            if (call_8c16337c(o, t->f04) == 0) {
                flags |= 1;
            }
            st.f0a = 0;
            st.f08 = 0;
            st.f06 = 0;
            st.f04 = 0;
            st.f02 = 0;
            st.f00 = 0;
            st.f14 = 0;
            st.f12 = 0;
            st.f10 = 0;
            st.f0e = 0;
            st.f0c = 0;
            operation_8c029a48(o, &st);
            if (st.f00 < t->f0a) {
                flags |= 2;
            }
            if (st.f06 < t->f0e) {
                flags |= 4;
            }
            if (st.f04 < t->f0c) {
                flags |= 8;
            }
        } else {
            flags |= 0x20;
        }
        break;
    case 1:
        if (a1->f01 != 3) {
            t = operation_8c1c7658(a1);
            if (t != 0) {
                if (call_8c16337c(o, t->f0a) == 0) {
                    flags |= 1;
                }
                if (*((unsigned char *)t + 0xc) > o->v17()) {
                    flags |= 0x10;
                }
            } else {
                flags |= 0x20;
            }
            break;
        }
        if (call_8c16337c(o, 0xd7) == 0) {
            break;
        }
        t = operation_8c1c7658(a1);
        if (t != 0) {
            switch (t->f04) {
            case 1:
            case 5:
            case 0x10:
            case 0x12:
            case 0x15:
                flags |= 1;
                break;
            }
        } else {
            flags |= 0x20;
        }
        break;
    case 2:
        t = operation_8c1c7658(a1);
        if (t != 0) {
            if (call_8c16337c(o, t->f10) == 0) {
                flags |= 1;
            }
        } else {
            flags |= 0x20;
        }
        break;
    case 3:
        c1 = call_8c16337c(o, 0xd7);
        c2 = call_8c16337c(o, 0xfc);
        switch (a1->f01) {
        case 2:
            if (c1 == 1) {
                flags |= 1;
            }
            if (c2 == 0 && a1->f02 > 0xe) {
                flags |= 1;
            }
            break;
        case 8:
            if (c1 == 1) {
                flags |= 1;
            }
            break;
        }
        break;
    case 4:
        if (a1->f10 > 0xf423f) {
            flags |= 0x20;
        }
        break;
    }
    if (a2 != 0) {
        *a2 = flags;
    }
    if (flags == 0) {
        return 1;
    }
    return 0;
}
