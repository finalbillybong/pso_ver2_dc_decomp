typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block44 {
    int words[11];
} Block44;
typedef struct Object Object;
class S_c8c021ef8;
class S_c8c03b55c;
typedef struct Block_p0_4 {
    int f00;
    char unknown4[0x28];
} Block_p0_4;
struct Object {
    char unknown0[0x2];
    short f02;
    Block_p0_4 f04;
};
class S_c8c021ef8 {
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
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual int v78();
};
typedef struct S_c8c021ef8Data {
    char unknown0[0x784];
    Block44 f784;
} S_c8c021ef8Data;
class S_c8c03b55c {
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
    virtual int v28(S_c8c021ef8 *);
};
typedef struct S_c8c03b55cData {

} S_c8c03b55cData;
extern int g_8c418248;
extern int g_8c4627c8;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int call_8c02a6d4(S_c8c021ef8 *);
extern "C" int object_ready(void *);
extern "C" S_c8c03b55c *call_8c03b55c(void *, int);
extern "C" int operation_8c02a764(int, int);
extern "C" void operation_8c1eb024(Object *o)
{
    int v1;
    unsigned short v2;
    int v7;
    int v8;
    int v;
    int flag;
    S_c8c021ef8 *t1;
    S_c8c03b55c *t4;
    Object *self = o;
    int pm5;
    v7 = 0;
    v2 = (unsigned short)self->f02;
    v1 = (int)g_8c4627c8;
    if (!(v1 != 0) && (int)v2 == g_8c418248) {
        v7 = 1;
    }
    v8 = (0 == v7);
    if (0 != v8) {
        S_c8c021ef8 *t1;
        t1 = lookup_low_id((int)((int)v2));
        if (!(call_8c02a6d4(t1) == 0)) {
            int pm6;
            pm6 = object_ready((void *)t1);
            pm5 = pm6;
            if (pm5 != 0) {
                flag = 0;
                v = self->f04.f00;
                if (v >= 0 && 0xa >= v) {
                    flag = 1;
                }
                if (flag != 0) {
                    *(Block44 *)&((S_c8c021ef8Data *)t1)->f784 = *(Block44 *)&self->f04;
                    t4 = call_8c03b55c((void *)(((char *)t1 + 0xbcc)), 6);
                    if (t4 != 0) {
                        t4->v28(t1);
                        return;
                    }
                    if (t1->v78() != 0) {
                        operation_8c02a764((int)t1, 0x10000);
                        return;
                    }
                    operation_8c02a764((int)t1, 0x1000c);
                }
            }
        }
    }
}
