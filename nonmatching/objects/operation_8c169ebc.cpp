/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c169ebc
 * function: operation_8c169ebc
 * language: c++
 * reference size: 344 bytes
 * compiled size: 344 bytes (+0.0%)
 * differing lines: 4 of 154 reference instruction lines
 * differing bytes: 4
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
typedef struct S_g8c4db3a0 S_g8c4db3a0;
typedef struct S_g8c4db3a0_0 S_g8c4db3a0_0;
typedef struct Object Object;
typedef struct S_vv15_0 S_vv15_0;
typedef struct S_vv26 S_vv26;
typedef struct S_vv26_20 S_vv26_20;
typedef struct S_vv26_c S_vv26_c;
typedef struct S_vv36_0 S_vv36_0;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_20 S_vv4_20;
typedef struct S_vv4_c S_vv4_c;
class S_vv13;
class S_vv34;
struct Object {
    char unknown0[0x14];
    int f14;
};
struct S_vv4 {
    int f00;
    char unknown4[0x8];
    S_vv4_c *f0c;
    char unknown10[0x4];
    int f14;
    char unknown18[0x8];
    S_vv4_20 *f20;
};
struct S_vv26 {
    int f00;
    char unknown4[0x8];
    S_vv26_c *f0c;
    char unknown10[0x10];
    S_vv26_20 *f20;
};
class S_vv13 {
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
typedef struct S_vv13Data {

} S_vv13Data;
class S_vv34 {
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
typedef struct S_vv34Data {

} S_vv34Data;
extern "C" int hierarchy_is_active(void *);
extern "C" void operation_8c16aad8(void *, int, void *, int);
extern "C" void call_8c169ebc(S_vv26 *);
extern "C" void operation_8c169ebc(Object *o)
{
    int v3;
    S_vv4 *v4;
    int v5;
    int v6;
    int v12;
    S_vv13 *v13;
    int v25;
    unsigned char v14;
    S_vv26 *v26;
    char *v15;
    int v28;
    char *v36;
    int v27;
    int v1;
    int v33;
    S_vv34 *v34;
    unsigned char v35;
    int v2;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    v1 = (int)0x134;
    v3 = (int)o->f14;
    v4 = (S_vv4 *)v3;
    v2 = (int)0xbc8;
    while (v4 != 0) {
        v5 = (int)((int)v4->f00 == *(int *)0x8c317ab0);
        v6 = (int)0;
        if (v5 != 0) {
            t1 = hierarchy_is_active((void *)v4);
            if (t1 != 0) {
                v6 = (int)1;
            }
        }
        if (v6 != 0) {
            t2 = hierarchy_is_active((void *)(v4->f20));
            if (t2 == 0) {
                v13 = (S_vv13 *)0;
            } else {
                v12 = (int)v4->f20;
                v13 = (S_vv13 *)v12;
            }
            if (v13 != 0) {
                v14 = (unsigned char)*(unsigned char *)0x8c4db3d8;
                if (*(unsigned char *)((char *)((char *)v13 + 0x0) + (v1)) == v14) {
                    if (v14 == 3) {
                        v15 = (char *)*(int *)0x8c4db3a0;
                        t3 = v13->v34();
                        operation_8c16aad8((void *)(*(S_vv15_0 **)((char *)((char *)v15 + 0x0) + (v2))), (int)(v15), (void *)v4, t3);
                    } else {
                        operation_8c16aad8((void *)(*(S_g8c4db3a0_0 **)((char *)((char *)*(S_g8c4db3a0 **)0x8c4db3a0 + 0x0) + (v2))), (int)(*(S_g8c4db3a0 **)0x8c4db3a0), (void *)v4, 1);
                    }
                }
            }
        }
        v25 = (int)v4->f14;
        v26 = (S_vv26 *)v25;
        while (v26 != 0) {
            v27 = (int)((int)v26->f00 == *(int *)0x8c317ab0);
            v28 = (int)0;
            if (v27 != 0) {
                t4 = hierarchy_is_active((void *)v26);
                if (t4 != 0) {
                    v28 = (int)1;
                }
            }
            if (v28 != 0) {
                t5 = hierarchy_is_active((void *)(v26->f20));
                if (t5 == 0) {
                    v34 = (S_vv34 *)0;
                } else {
                    v33 = (int)v26->f20;
                    v34 = (S_vv34 *)v33;
                }
                if (v34 != 0) {
                    v35 = (unsigned char)*(unsigned char *)0x8c4db3d8;
                    if (*(unsigned char *)((char *)((char *)v34 + 0x0) + (v1)) == v35) {
                        if (v35 == 3) {
                            v36 = (char *)*(int *)0x8c4db3a0;
                            t6 = v34->v34();
                            operation_8c16aad8((void *)(*(S_vv36_0 **)((char *)((char *)v36 + 0x0) + (v2))), (int)(v36), (void *)v26, t6);
                            v28 = (int)v36;
                        } else {
                            operation_8c16aad8((void *)(*(S_g8c4db3a0_0 **)((char *)((char *)*(S_g8c4db3a0 **)0x8c4db3a0 + 0x0) + (v2))), (int)(*(S_g8c4db3a0 **)0x8c4db3a0), (void *)v26, 1);
                        }
                    }
                }
            }
            call_8c169ebc(v26);
            v26 = (S_vv26 *)v26->f0c;
        }
        v4 = (S_vv4 *)v4->f0c;
    }
}
