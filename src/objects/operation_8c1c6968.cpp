typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0541b4 S_c8c0541b4;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
class S_c8c0744dc;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
    Arg0_28 *f28;
    unsigned short f2c;
    short f2e;
    short f30;
    char unknown32[0x2];
    float f34;
    int f38;
};
struct S_c8c0541b4 {
    char unknown0[0xdc];
    int fdc;
};
class S_c8c0744dc {
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
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58(int, S_c8c0541b4 *, void *, float, int);
};
typedef struct S_c8c0744dcData {

} S_c8c0744dcData;
extern "C" char g_8c328d24[];
extern "C" S_c8c0541b4 *operation_8c0541b4(short, short);
extern "C" float squared_distance_xz(void *, void *);
extern "C" int lookup_low_id(int);
extern "C" S_c8c0744dc *find_record_8c0744dc(int);
extern "C" int allocate_block(void *, unsigned int);
extern "C" void call_8c0edfd0(int, int, int, int, void *);
extern "C" void operation_8c1c6968(Object *o)
{
    int v1;
    int t3;
    float t2;
    S_c8c0541b4 *t1;
    S_c8c0744dc *t4;
    float t5;
    float t6;
    int t7;
    t1 = operation_8c0541b4(o->f2e, o->f30);
    if (t1 != 0) {
        v1 = (int)(t1->fdc + o->f30 * 0x2c + 0x1c);
        t2 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)v1);
        if (64.0f > t2) {
            t3 = lookup_low_id((int)(o->f2c));
            t4 = find_record_8c0744dc((int)(o->f28));
            if (t3 == 0) {
                goto L_8c1c6a32;
            }
            if (t4 == 0) {
                goto L_8c1c6a32;
            }
            t4->v58(t3, t1, o->f24, o->f34, o->f30);
        } else {
            t5 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x48)));
            t6 = squared_distance_xz((void *)v1, (void *)(((char *)o + 0x48)));
            if (t5 > t6) {
                t7 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x50);
                if (t7 != 0) {
                    call_8c0edfd0(t7, v1, -0x10000, 0x14, (void *)((g_8c328d24 + 0xe)));
                }
            }
        }
    }
L_8c1c6a32:;
    o->f38 = 1;
}
