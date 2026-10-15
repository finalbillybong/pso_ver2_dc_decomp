typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4db3bc S_g8c4db3bc;
typedef struct Object Object;
typedef struct Arg0_14 Arg0_14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_14 S_vv1_14;
typedef struct S_vv1_20 S_vv1_20;
typedef struct S_vv1_c S_vv1_c;
typedef struct S_vv67 S_vv67;
typedef struct S_vv67_20 S_vv67_20;
typedef struct S_vv67_c S_vv67_c;
class S_vv24;
class S_vv90;
struct Object {
    char unknown0[0x14];
    Arg0_14 *f14;
};
struct S_vv1 {
    int f00;
    char unknown4[0x8];
    S_vv1_c *f0c;
    char unknown10[0x4];
    S_vv1_14 *f14;
    char unknown18[0x8];
    S_vv1_20 *f20;
};
struct Frame {
    char unknown0[0x14];
    int f14;
    char unknown18[0x10];
};
struct S_vv67 {
    int f00;
    char unknown4[0x8];
    S_vv67_c *f0c;
    char unknown10[0x10];
    S_vv67_20 *f20;
};
class S_vv24 {
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
typedef struct S_vv24Data {

} S_vv24Data;
class S_vv90 {
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
    virtual void v31(Frame *);
};
typedef struct S_vv90Data {

} S_vv90Data;
extern "C" int hierarchy_is_active(void *);
extern "C" int operation_8c163898(void *, void *);
extern "C" void call_8c169824(S_vv67 *);
extern "C" void operation_8c169824(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int v2;
    int v3;
    S_vv24 *v24;
    S_vv67 *v67;
    int v68;
    int v69;
    S_vv90 *v90;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    v1 = (S_vv1 *)o->f14;
    while (v1 != 0) {
        v2 = (int)((int)v1->f00 == *(int *)0x8c317ab0);
        v3 = (int)0;
        if (v2 != 0) {
            t1 = hierarchy_is_active((void *)v1);
            if (t1 != 0) {
                v3 = (int)1;
            }
        }
        if (v3 != 0) {
            t2 = hierarchy_is_active((void *)(v1->f20));
            if (t2 == 0) {
                v24 = (S_vv24 *)0;
            } else {
                v24 = (S_vv24 *)v1->f20;
            }
            if (v24 != 0) {
                v24->v31(&(&frame)->f14);
                t3 = operation_8c163898((void *)(&(&frame)->f14), (void *)(*(S_g8c4db3bc **)0x8c4db3bc));
                if (t3 != 0) {
                    *(int *)0x8c4db3b4 += 1;
                }
            }
        }
        v67 = (S_vv67 *)v1->f14;
        while (v67 != 0) {
            v68 = (int)((int)v67->f00 == *(int *)0x8c317ab0);
            v69 = (int)0;
            if (v68 != 0) {
                t4 = hierarchy_is_active((void *)v67);
                if (t4 != 0) {
                    v69 = (int)1;
                }
            }
            if (v69 != 0) {
                t5 = hierarchy_is_active((void *)(v67->f20));
                if (t5 == 0) {
                    v90 = (S_vv90 *)0;
                } else {
                    v90 = (S_vv90 *)v67->f20;
                }
                if (v90 != 0) {
                    v90->v31((&frame));
                    t6 = operation_8c163898((void *)(&frame), (void *)(*(S_g8c4db3bc **)0x8c4db3bc));
                    if (t6 != 0) {
                        *(int *)0x8c4db3b4 += 1;
                    }
                }
            }
            call_8c169824(v67);
            v67 = (S_vv67 *)v67->f0c;
        }
        v1 = (S_vv1 *)v1->f0c;
    }
}
