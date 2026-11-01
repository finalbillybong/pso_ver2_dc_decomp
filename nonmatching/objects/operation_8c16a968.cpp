/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16a968
 * function: operation_8c16a968
 * language: c++
 * reference size: 260 bytes
 * compiled size: 260 bytes (+0.0%)
 * differing lines: 4 of 105 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db3a0 S_g8c4db3a0;
typedef struct S_g8c4db3a0_0 S_g8c4db3a0_0;
typedef struct Object Object;
typedef struct Arg0_1ac Arg0_1ac;
typedef struct S_vv16_0 S_vv16_0;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_20 S_vv5_20;
class S_vv14;
struct Object {
    char unknown0[0x1ac];
    Arg0_1ac *f1ac;
};
struct Arg0_1ac {
    char unknown0[0x14];
    int f14;
};
struct S_vv5 {
    int f00;
    char unknown4[0x8];
    int f0c;
    char unknown10[0x10];
    S_vv5_20 *f20;
};
class S_vv14 {
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
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual int v34();
};
typedef struct S_vv14Data {

} S_vv14Data;
extern int g_8c317ab0;
extern S_g8c4db3a0 *g_8c4db3a0;
extern unsigned char g_8c4db3d8;
extern unsigned char g_8c4db3d9;
extern "C" int hierarchy_is_active(void *);
extern "C" void operation_8c16aad8(void *, int, void *, int);
extern "C" void call_8c169ebc(S_vv5 *);
extern "C" void operation_8c16a968(Object *o, int a1, int a2, int a3)
{
    int v4;
    S_vv5 *v5;
    int v6;
    int v34;
    int v13;
    S_vv14 *v14;
    int v7;
    unsigned char v15;
    char *v16;
    int v1;
    int v2;
    int v3;
    int t1;
    int t2;
    int t3;
    g_8c4db3a0 = (S_g8c4db3a0 *)a1;
    g_8c4db3d8 = a2;
    g_8c4db3d9 = a3;
    v1 = (int)0x134;
    v2 = (int)0x136;
    v3 = (int)0xbc8;
    v4 = (int)o->f1ac->f14;
    v34 = (int)v4;
    goto L_8c16aa28;
    v5 = (S_vv5 *)v4;
L_8c16a98e:;
    v6 = (int)(v5->f00 == g_8c317ab0);
    v7 = (int)0;
    if (v6 != 0) {
        t1 = hierarchy_is_active((void *)v5);
        if (t1 != 0) {
            v7 = (int)1;
        }
    }
    if (v7 != 0) {
        t2 = hierarchy_is_active((void *)(v5->f20));
        if (t2 == 0) {
            v14 = (S_vv14 *)0;
        } else {
            v13 = (int)v5->f20;
            v14 = (S_vv14 *)v13;
        }
        if (v14 != 0) {
            v15 = (unsigned char)g_8c4db3d8;
            if (*(unsigned char *)((char *)((char *)v14 + 0x0) + (v1)) == v15 && *(unsigned char *)((char *)((char *)v14 + 0x0) + (v2)) == g_8c4db3d9) {
                if (v15 == 3) {
                    v16 = (char *)g_8c4db3a0;
                    t3 = v14->v34();
                    operation_8c16aad8((void *)(*(S_vv16_0 **)((char *)((char *)v16 + 0x0) + (v3))), (int)(v16), (void *)v5, t3);
                    v7 = (int)v16;
                } else {
                    operation_8c16aad8((void *)(*(S_g8c4db3a0_0 **)((char *)((char *)g_8c4db3a0 + 0x0) + (v3))), (int)g_8c4db3a0, (void *)v5, 1);
                }
            }
        }
    }
    call_8c169ebc(v5);
    v34 = (int)v5->f0c;
L_8c16aa28:;
    v5 = (S_vv5 *)v34;
    if (v34 != 0) {
        goto L_8c16a98e;
    }
}
