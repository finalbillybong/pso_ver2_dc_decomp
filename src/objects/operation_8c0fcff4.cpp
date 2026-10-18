typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c467880 S_g8c467880;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_x68272 S_x68272;
class Object;
class S_vv19;
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
    virtual void v24(int, float);
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
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
};
typedef struct ObjectData {
    char unknown0[0x32];
    short f32;
    char unknown34[0x5c];
    int f90;
    char unknown94[0x48];
    Arg0_dc *fdc;
    char unknowne0[0x22a];
    short f30a;
    char unknown30c[0x28];
    S_c8c021ef8 *f334;
    char unknown338[0x1c];
    int f354;
    char unknown358[0x4];
    float f35c;
    float f360;
    char unknown364[0x8];
    unsigned short f36c;
    char unknown36e[0x12];
    int f380;
    char unknown384[0x8];
    int f38c;
} ObjectData;
struct S_c8c021ef8 {
    char unknown0[0x32];
    short f32;
    char unknown34[0x2d4];
    short f308;
    char unknown30a[0x46];
    int f350;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
struct S_x68272 {
    Block8 f00;
};
class S_vv19 {
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
    virtual float v25(Object *, int, Block8);
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct S_vv19Data {

} S_vv19Data;
extern S_g8c418248 *g_8c418248;
extern "C" int operation_8c03d338(void);
extern "C" void call_8c027090(Object *);
extern "C" int call_8c04a52c(Object *, int, float);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" float squared_distance_xz(void *, void *);
extern "C" void operation_8c05426c(void *, int, int);
extern "C" void clear_words_8c053d64(void);
extern "C" void call_8c0521a0(Object *);
extern "C" void call_8c05228c(Object *);
extern "C" void operation_8c05428c(void *, int, int);
extern "C" void operation_8c0fcff4(Object *o)
{
    int v3;
    S_vv19 *v19;
    float v20;
    int v10;
    S_c8c021ef8 *t4;
    int v18;
    int v4;
    int t1;
    int t2;
    S_c8c021ef8 *t3;
    int v17;
    float t5;
    int t6;
    S_c8c021ef8 *t7;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        o->v99();
        return;
    }
    o->v86();
    if (((ObjectData *)o)->f30a != 0) {
        if (((ObjectData *)o)->f30a != 2) {
            if (((ObjectData *)o)->f30a == 3) {
                goto L_8c0fd15e;
            }
            if (((ObjectData *)o)->f30a == 4) {
                goto L_8c0fd1da;
            }
            return;
        }
        if (((ObjectData *)o)->f38c == 1) {
            call_8c027090(o);
        }
        o->v88();
        t2 = call_8c04a52c(o, 0, ((ObjectData *)o)->f35c);
        ((ObjectData *)o)->f36c = t2;
        if ((((ObjectData *)o)->f36c & 0xffff) == 0xffff) {
            return;
        }
        t3 = lookup_low_id((int)(((ObjectData *)o)->f36c & 0xffff));
        ((ObjectData *)o)->f334 = (S_c8c021ef8 *)t3;
        o->v97();
        return;
    }
    t4 = lookup_low_id((int)g_8c418248);
    if (t4 != 0) {
        v3 = (int)(t4->f308 == 1);
        if (v3 != 0) {
            v4 = (int)(((t4->f350 & 0x100000)) != 0);
            if (v4 != 0) {
                t5 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)(((char *)t4 + 0x3c)));
                if (t5 > 40000.0f && t4->f32 != ((ObjectData *)o)->f32) {
                    return;
                }
                o->v96();
                return;
            }
        }
    }
    t6 = call_8c04a52c(o, 0, ((ObjectData *)o)->f35c);
    ((ObjectData *)o)->f36c = t6;
    if ((((ObjectData *)o)->f36c & 0xffff) == 0xffff) {
        return;
    }
    t7 = lookup_low_id((int)(((ObjectData *)o)->f36c & 0xffff));
    ((ObjectData *)o)->f334 = (S_c8c021ef8 *)t7;
    o->v97();
    return;
L_8c0fd15e:;
    v10 = (int)((ObjectData *)o)->f90;
    ((ObjectData *)o)->f90 = v10 + -1;
    if (!(v10 >= 0)) {
        ((ObjectData *)o)->f30a = 4;
    }
    if (((ObjectData *)o)->f354 != 1) {
        if (((ObjectData *)o)->f354 == 2) {
            goto L_8c0fd1a2;
        }
        o->v89();
    } else {
        o->v90();
        goto L_8c0fd1b0;
L_8c0fd1a2:;
        o->v91();
    }
L_8c0fd1b0:;
    o->v87();
    ((ObjectData *)o)->f380 += 0x666;
    if (((ObjectData *)o)->f38c == 1) {
        call_8c027090(o);
        return;
L_8c0fd1da:;
        operation_8c05426c((void *)o, 0, 2);
        ((ObjectData *)o)->fdc->f0c = ((ObjectData *)o)->f360;
        clear_words_8c053d64();
        call_8c0521a0(o);
        call_8c05228c(o);
        v18 = (int)0;
        v17 = (int)0x364;
        while (0x10 > v18) {
            v19 = (S_vv19 *)*(S_g8c467880 **)((char *)0x8c467880 + (v18 << 2));
            if (v19 != 0) {
                v20 = v19->v25(o, 0, *(Block8 *)&((S_x68272 *)((int)o + v17))->f00);
                if (5 > *(int *)((char *)((char *)o + 0x0) + (v17))) {
                    v19->v27(o, v20 * 0.1f);
                }
            }
            v18 = (int)(v18 + 1);
        }
        ((ObjectData *)o)->f30a = 6;
        operation_8c05428c((void *)o, 0, 1);
        o->v24(0, 1.0f);
    }
}
