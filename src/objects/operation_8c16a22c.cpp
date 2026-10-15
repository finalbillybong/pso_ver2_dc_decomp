typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_14 Arg0_14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_14 S_vv1_14;
typedef struct S_vv1_20 S_vv1_20;
typedef struct S_vv1_c S_vv1_c;
typedef struct S_vv85 S_vv85;
typedef struct S_vv85_20 S_vv85_20;
typedef struct S_vv85_c S_vv85_c;
class S_vv108;
class S_vv24;
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
struct S_vv85 {
    int f00;
    char unknown4[0x8];
    S_vv85_c *f0c;
    char unknown10[0x10];
    S_vv85_20 *f20;
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
};
typedef struct S_vv24Data {

} S_vv24Data;
class S_vv108 {
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
};
typedef struct S_vv108Data {

} S_vv108Data;
extern "C" int hierarchy_is_active(void *);
extern "C" void call_8c16a22c(S_vv85 *);
extern "C" void operation_8c16a22c(Object *o)
{
    S_vv1 *v1;
    int v2;
    int v3;
    S_vv85 *v85;
    S_vv24 *v24;
    int v86;
    int v87;
    S_vv108 *v108;
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
                t3 = hierarchy_is_active((void *)v24);
                if (t3 != 0) {
                    v24->v27();
                }
            }
        }
        v85 = (S_vv85 *)v1->f14;
        while (v85 != 0) {
            v86 = (int)((int)v85->f00 == *(int *)0x8c317ab0);
            v87 = (int)0;
            if (v86 != 0) {
                t4 = hierarchy_is_active((void *)v85);
                if (t4 != 0) {
                    v87 = (int)1;
                }
            }
            v108 = (S_vv108 *)v87;
            if (v87 != 0) {
                t5 = hierarchy_is_active((void *)(v85->f20));
                if (t5 == 0) {
                    v108 = (S_vv108 *)0;
                } else {
                    v108 = (S_vv108 *)v85->f20;
                }
                if (v108 != 0) {
                    t6 = hierarchy_is_active((void *)v108);
                    if (t6 != 0) {
                        v108->v27();
                    }
                }
            }
            call_8c16a22c(v85);
            v85 = (S_vv85 *)v85->f0c;
        }
        v1 = (S_vv1 *)v1->f0c;
    }
}
