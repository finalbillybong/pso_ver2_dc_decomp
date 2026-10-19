typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_bc8 Arg0_bc8;
typedef struct Arg0_bc8_1ac Arg0_bc8_1ac;
typedef struct Arg0_bc8_1b0 Arg0_bc8_1b0;
class S_c8c169508;
class Arg1;
class Arg1 {
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
    virtual void v32();
    virtual void v33();
    virtual int v34();
};
typedef struct Arg1Data {
    char unknown0[0x134];
    unsigned char f134;
    char unknown135[0x1];
    unsigned char f136;
} Arg1Data;
struct Frame {
    char unknown0[0x14];
    int f14;
    char unknown18[0x10];
};
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0xba6];
    Arg0_bc8 *fbc8;
};
struct Arg0_bc8 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x18a];
    Arg0_bc8_1ac *f1ac;
    Arg0_bc8_1b0 *f1b0;
};
class S_c8c169508 {
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
    virtual void v34();
    virtual void v35();
    virtual void v36(int);
};
typedef struct S_c8c169508Data {

} S_c8c169508Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" int query_state_8c074980(void *);
extern "C" void call_8c04a99c(Object *, int);
extern "C" void call_8c02c048(Object *, int);
extern "C" void operation_8c02a764(int, int);
extern "C" int operation_8c02303c(void *, void *);
extern "C" int allocate_block(void *, unsigned int);
extern "C" void initialize_tag_8c1694cc(void *, void *);
extern "C" int call_8c074538(int, int);
extern "C" int find_node_8c16a3c0(void *, int);
extern "C" S_c8c169508 *operation_8c169508(void *);
extern "C" void operation_8c169504(void *, int);
extern "C" void operation_8c07484c(void *, int);
extern "C" void reparent_hierarchy_node(void *, void *);
extern "C" void operation_8c0745b4(void *, short);
extern "C" int operation_8c0230e4(Object *o, Arg1 *a1)
{
    Frame frame;
    unsigned char v2;
    int v9;
    int v1;
    int t4;
    int t1;
    int t2;
    int t3;
    int t6;
    int t5;
    int t7;
    int t10;
    int v3;
    S_c8c169508 *t9;
    int t8;
    if (a1 == 0) {
        return 0;
    }
    if (((Arg1Data *)a1)->f134 == 4) {
        t1 = query_state_8c074980((void *)a1);
        call_8c04a99c(o, t1);
        t2 = query_state_8c074980((void *)a1);
        call_8c02c048(o, t2);
        a1->v27();
        operation_8c02a764((int)o, 0x50002);
        return 0;
    }
    a1->v31((&frame));
    t3 = operation_8c02303c((void *)o, (void *)(&frame));
    if (t3 == 0) {
        return 0;
    }
    v1 = (int)0;
    v2 = (unsigned char)((Arg1Data *)a1)->f134;
    switch (v2) {
    case 0:
    case 1:
    case 2:
        t4 = allocate_block(g_8c4d97e0, (unsigned int)0x24);
        v1 = (int)t4;
        if (t4 != 0) {
            initialize_tag_8c1694cc((void *)t4, (void *)(o->fbc8->f1ac));
        }
        break;
    case 3:
        t5 = call_8c074538(v2, (int)(((Arg1Data *)a1)->f136));
        if (t5 != 0) {
            a1->v31(&(&frame)->f14);
            t6 = find_node_8c16a3c0((void *)(o->fbc8), (int)(&(&frame)->f14));
            if (t6 == 0) {
                t7 = allocate_block(g_8c4d97e0, (unsigned int)0x24);
                v1 = (int)t7;
                if (t7 != 0) {
                    initialize_tag_8c1694cc((void *)t7, (void *)(o->fbc8->f1ac));
                }
                break;
            }
            t8 = a1->v34();
            v3 = (int)t8;
            if (t8 == 0) {
                v3 = (int)1;
            }
            t9 = operation_8c169508((void *)t6);
            if (t9 != 0) {
                t9->v36(v3);
            }
            a1->v27();
            operation_8c02a764((int)o, 0x50002);
            return 0;
        }
        t10 = allocate_block(g_8c4d97e0, (unsigned int)0x24);
        v1 = (int)t10;
        if (t10 != 0) {
            initialize_tag_8c1694cc((void *)t10, (void *)(o->fbc8->f1ac));
        }
        break;
    }
    if (v1 != 0) {
        operation_8c169504((void *)v1, (int)a1);
        o->fbc8->f20 += 1;
        operation_8c07484c((void *)a1, 1);
        reparent_hierarchy_node((void *)a1, (void *)(o->fbc8->f1b0));
        operation_8c0745b4((void *)a1, o->f20);
        return (int)(v1);
    }
    return 0;
}
