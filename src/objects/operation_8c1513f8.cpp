typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da6dc S_g8c4da6dc;
typedef struct Arg0_184 Arg0_184;
class Object;
typedef struct Block_p0_324 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_324;
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
    virtual int v41();
    virtual int v42();
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
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x30];
    Vector3 f78;
    char unknown84[0x100];
    Arg0_184 *f184;
    char unknown188[0x182];
    short f30a;
    char unknown30c[0x18];
    Block_p0_324 f324;
    char unknown330[0x60];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    short f3a8;
    short f3aa;
    short f3ac;
} ObjectData;
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern int g_8c418244;
extern int g_8c4d9b70;
extern int g_8c4da6d8;
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c1516d4(Object *);
extern "C" void operation_8c151678(void *);
extern "C" void operation_8c027090(int);
extern "C" void operation_8c102cd0(void *, int, int, int);
extern "C" int call_8c12b944(void);
extern "C" void call_8c0344f0(void *, int, int, int);
extern "C" int call_8c18e768(int, int);
extern "C" void operation_8c1513f8(Object *o)
{
    int v14;
    int v32;
    int v31;
    int v33;
    int v46;
    short v39;
    int v38;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        operation_8c1516d4(o);
        return;
    }
    t2 = o->v42();
    if (t2 != 0) {
        o->v71();
    } else {
        t3 = o->v41();
        if (t3 != 0) {
            o->v70();
        }
    }
    if (((ObjectData *)o)->f30a != ((ObjectData *)o)->f390) {
        if (((ObjectData *)o)->f398 != -1) {
            ((ObjectData *)o)->f398 = -1;
            operation_8c151678((void *)o);
        }
        ((ObjectData *)o)->f30a = ((ObjectData *)o)->f390;
        ((ObjectData *)o)->f398 = 0;
    }
    operation_8c151678((void *)o);
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    if (((ObjectData *)o)->f184 != 0) {
        ((ObjectData *)o)->f324.f04 += ((ObjectData *)o)->f184->f10 * 0.5f;
    }
    v14 = (int)0x800;
    if (((((ObjectData *)o)->f34 & v14)) == 0) {
        *(Vector3 *)&((ObjectData *)o)->f78 = *(Vector3 *)&((ObjectData *)o)->f324;
        operation_8c027090((int)o);
        operation_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    }
    if (((((ObjectData *)o)->f34 & 0x800)) == 0 && !((short)-- *(short *)((char *)o + 0x3ac) > 0)) {
        ((ObjectData *)o)->f3ac = 3;
        if ((short)++ *(short *)((char *)o + 0x3aa) >= 8) {
            int pm6;
            ((ObjectData *)o)->f3aa = 0;
            pm6 = 0x10000;
            if (((((ObjectData *)o)->f3a4 & pm6)) != 0) {
                ((ObjectData *)o)->f3a4 &= -0x10001;
            } else {
                t4 = call_8c12b944();
                if (!(((float)t4 / 32768.0f) > 0.1f)) {
                    ((ObjectData *)o)->f3a4 |= 0x10000;
                }
            }
        }
    }
    v31 = (int)g_8c418244;
    v32 = (int)g_8c4da6d8;
    if (v32 != v31) {
        g_8c4da6d8 = (int)v31;
        v33 = (int)0;
        while (4 > v33) {
            call_8c0344f0((void *)(*(S_g8c4da6dc **)((char *)0x8c4da6dc + (v33 << 2))), 0, 0x20, 0);
            v33 = (int)(v33 + 1);
        }
    }
    v38 = (int)0;
    v46 = (int)g_8c4d9b70;
    if (v46 >= 0) {
        t5 = call_8c18e768(v46, 4);
        v39 = (short)((ObjectData *)o)->f3a8;
        if (v39 >= (t5 << 2) && ((t5 << 2) + 4) > v39) {
            v38 = (int)1;
        }
    }
    if (v38 != 0) {
        ((ObjectData *)o)->f34 &= -0x4040001;
    } else {
        ((ObjectData *)o)->f34 |= 0x4040000;
    }
    o->v64();
}
