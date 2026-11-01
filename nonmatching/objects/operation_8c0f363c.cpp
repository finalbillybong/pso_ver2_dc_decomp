/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f363c
 * function: operation_8c0f363c
 * language: c++
 * reference size: 324 bytes
 * compiled size: 324 bytes (+0.0%)
 * differing lines: 42 of 133 reference instruction lines
 * differing bytes: 58
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467880 S_g8c467880;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg1 Arg1;
typedef struct S_vv28 S_vv28;
typedef struct S_vv8 S_vv8;
class Object;
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
    virtual void v17(S_vv8 *, Arg1 *);
};
typedef struct ObjectData {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0x4];
    int fe4;
} ObjectData;
struct Arg1 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct S_vv8 {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    int fdc;
    int fe0;
};
struct S_vv28 {
    int f00;
};
extern "C" void clear_words_8c053d64(void);
extern "C" void operation_8c052548(void *);
extern "C" void operation_8c0525b4(void *);
extern "C" int operation_8c0f3990(void *);
extern "C" int operation_8c0f3970(void *, int);
extern "C" void operation_8c0f3954(void *, int);
extern "C" int operation_8c0f363c(Object *o, Arg1 *a1, int a2)
{
    int v1;
    S_vv8 *v8;
    int v6;
    int v13;
    int v17;
    int v18;
    S_vv28 *v28;
    int v3;
    int v9;
    v3 = v1 = 0;
    if (((ObjectData *)o)->fe4 == 0) {
        return v1;
    }
    clear_words_8c053d64();
    if (((a1->f04 & 1)) != 0) {
        operation_8c052548((void *)o);
        v3 |= 0x100000;
    }
    if (((a1->f04 & 2)) != 0) {
        operation_8c0525b4((void *)o);
        v3 |= 0x200000;
    }
    if (((((ObjectData *)o)->fdc->f18 & v3)) != 0) {
        for (v6 = 0; 0x10 > v6; v6++) {
            v8 = (S_vv8 *)*(S_g8c467880 **)((char *)0x8c467880 + (v6 << 2));
            if (v8 == 0) {
                break;
            }
            if ((int)(v8) == ((ObjectData *)o)->fe4) {
                continue;
            }
            v9 = !(v8->f34 & 0x4000000);
            if (v9 != 0) {
                v3 = 1;
                if (a2 != 0) {
                    if (operation_8c0f3990((void *)a2) != 0 && operation_8c0f3970((void *)a2, (int)v8) == 0) {
                        operation_8c0f3954((void *)a2, (int)v8);
                        v13 = v3;
                    } else {
                        v13 = 0;
                    }
                    if (v13 == 0) {
                        v3 = 0;
                    }
                }
                if (v3 != 0) {
                    o->v17(v8, a1);
                    v1 = 1;
                } else {
                    v17 = (int)v8->fe0;
                    for (v18 = 0; v17 > v18; v18++) {
                        v28 = (S_vv28 *)(v8->fdc + 0x18 + v18 * 0x2c);
                        v13 = -0x8000001;
                        v28->f00 &= v13;
                    }
                }
            }
        }
    }
    return v1;
}
