typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct Arg2_20 Arg2_20;
class S_vv2;
struct Arg2 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg2_20 *f20;
};
class S_vv2 {
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
    virtual void v35(int);
};
typedef struct S_vv2Data {
    char unknown0[0xec];
    int fec;
} S_vv2Data;
struct Object {
    char unknown0[0x20];
    short f20;
};
extern "C" int hierarchy_is_active(void *);
extern "C" void release_child_slot_8c022624(void *, void *);
extern "C" void operation_8c16aad8(Object *o, int a1, Arg2 *a2, int a3)
{
    int v1;
    S_vv2 *v2;
    int v5;
    int t1;
    int t2;
    t1 = hierarchy_is_active((void *)(a2->f20));
    if (t1 == 0) {
        v2 = (S_vv2 *)0;
    } else {
        v1 = (int)a2->f20;
        v2 = (S_vv2 *)v1;
    }
    if (v2 != 0 && a3 >= 0) {
        t2 = v2->v34();
        if ((t2 - a3) > 0) {
            v2->v35(a3);
            return;
        }
        v5 = (int)0;
        if (((((S_vv2Data *)v2)->fec & 4)) != 0 && ((((S_vv2Data *)v2)->fec & 8)) != 0) {
            v5 = (int)1;
        }
        if (v5 != 0) {
            release_child_slot_8c022624((void *)a1, (void *)v2);
        }
        o->f20 -= 1;
        v2->v27();
        a2->f04 |= 1;
    }
}
