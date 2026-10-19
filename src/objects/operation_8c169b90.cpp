typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db3a4 S_g8c4db3a4;
typedef struct Object Object;
typedef struct S_vv29 S_vv29;
typedef struct S_vv29_20 S_vv29_20;
typedef struct S_vv29_c S_vv29_c;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_20 S_vv3_20;
typedef struct S_vv3_c S_vv3_c;
class S_vv12;
class S_vv37;
struct Object {
    char unknown0[0x14];
    int f14;
};
struct S_vv3 {
    int f00;
    char unknown4[0x8];
    S_vv3_c *f0c;
    char unknown10[0x4];
    int f14;
    char unknown18[0x8];
    S_vv3_20 *f20;
};
class S_vv12 {
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
    virtual void v31(void *);
};
typedef struct S_vv12Data {
    char unknown0[0xe8];
    int fe8;
    int fec;
} S_vv12Data;
struct S_g8c4db3a4 {
    char unknown0[0x4];
    int f04;
};
struct S_vv29 {
    int f00;
    char unknown4[0x8];
    S_vv29_c *f0c;
    char unknown10[0x10];
    S_vv29_20 *f20;
};
class S_vv37 {
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
    virtual void v31(void *);
};
typedef struct S_vv37Data {
    char unknown0[0xe8];
    int fe8;
    int fec;
} S_vv37Data;
extern int g_8c317ab0;
extern S_g8c4db3a4 *g_8c4db3a4;
extern int g_8c4db3b4;
extern "C" int hierarchy_is_active(void *);
extern "C" void call_8c169b90(S_vv29 *);
extern "C" void operation_8c169b90(Object *o)
{
    int v1;
    int v2;
    int v4;
    S_vv3 *v3;
    int v11;
    S_vv12 *v12;
    int v15;
    int v28;
    S_vv29 *v29;
    int v30;
    int v5;
    int v36;
    S_vv37 *v37;
    int v40;
    int t1;
    int t2;
    int t3;
    int t4;
    v2 = (int)o->f14;
    v3 = (S_vv3 *)v2;
    v1 = (int)0x134;
    while (v3 != 0) {
        v4 = (int)(v3->f00 == g_8c317ab0);
        v5 = (int)0;
        if (v4 != 0) {
            t1 = hierarchy_is_active((void *)v3);
            if (t1 != 0) {
                v5 = (int)1;
            }
        }
        if (v5 != 0) {
            t2 = hierarchy_is_active((void *)(v3->f20));
            if (t2 == 0) {
                v12 = (S_vv12 *)0;
            } else {
                v11 = (int)v3->f20;
                v12 = (S_vv12 *)v11;
            }
            if (v12 != 0) {
                v15 = (int)0;
                if (((((S_vv12Data *)v12)->fec & 4)) != 0 && ((((S_vv12Data *)v12)->fec & 8)) != 0) {
                    v15 = (int)1;
                }
                if (v15 != 0 && (*(unsigned char *)((char *)((char *)v12 + 0x0) + (v1))) == 0) {
                    v12->v31(((char *)g_8c4db3a4 + 0x8));
                    g_8c4db3a4->f04 = (int)(((S_vv12Data *)v12)->fe8);
                    g_8c4db3a4 = (S_g8c4db3a4 *)((int)g_8c4db3a4 + 0x1c);
                    g_8c4db3b4 += 1;
                }
            }
        }
        v28 = (int)v3->f14;
        v29 = (S_vv29 *)v28;
        while (v29 != 0) {
            v30 = (int)(v29->f00 == g_8c317ab0);
            v5 = (int)0;
            if (v30 != 0) {
                t3 = hierarchy_is_active((void *)v29);
                if (t3 != 0) {
                    v5 = (int)1;
                }
            }
            v37 = (S_vv37 *)v5;
            if (v5 != 0) {
                t4 = hierarchy_is_active((void *)(v29->f20));
                if (t4 == 0) {
                    v37 = (S_vv37 *)0;
                } else {
                    v36 = (int)v29->f20;
                    v37 = (S_vv37 *)v36;
                }
                if (v37 != 0) {
                    v40 = (int)0;
                    if (((((S_vv37Data *)v37)->fec & 4)) != 0 && ((((S_vv37Data *)v37)->fec & 8)) != 0) {
                        v40 = (int)1;
                    }
                    if (v40 != 0 && (*(unsigned char *)((char *)((char *)v37 + 0x0) + (v1))) == 0) {
                        v37->v31(((char *)g_8c4db3a4 + 0x8));
                        g_8c4db3a4->f04 = (int)(((S_vv37Data *)v37)->fe8);
                        g_8c4db3a4 = (S_g8c4db3a4 *)((int)g_8c4db3a4 + 0x1c);
                        g_8c4db3b4 += 1;
                    }
                }
            }
            call_8c169b90(v29);
            v29 = (S_vv29 *)v29->f0c;
        }
        v3 = (S_vv3 *)v3->f0c;
    }
}
