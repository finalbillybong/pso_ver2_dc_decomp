typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_40c Arg0_40c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
class Object;
typedef struct Block_p0_3ac {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3ac;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
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
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual int v108();
};
typedef struct ObjectData {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x18];
    int f60;
    char unknown64[0x4];
    int f68;
    char unknown6c[0x2b8];
    float f324;
    float f328;
    float f32c;
    char unknown330[0x78];
    int f3a8;
    Block_p0_3ac f3ac;
    char unknown3b8[0xc];
    int f3c4;
    char unknown3c8[0x44];
    Arg0_40c *f40c;
    char unknown410[0x10];
    float f420;
    float f424;
    float f428;
} ObjectData;
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    int f00;
};
struct S_vv3 {
    float f00;
};
struct S_vv4 {
    float f00;
};
struct Arg0_40c {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct Frame {
    Block_frame_0 f00;
};
extern "C" void operation_8c059ea4(void *, int);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" int active_unflagged_8c05b2dc(void *);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void call_8c37f6f0(Frame *, void *);
extern "C" float normalize_vector_checked(void *);
extern "C" void operation_8c166964(Object *o, int a1)
{
    Frame frame;
    S_vv2 *v2;
    S_vv1 *v1;
    S_vv3 *v3;
    S_vv4 *v4;
    float v22;
    int t1;
    float t2;
    int t3;
    int lim;
    v1 = (S_vv1 *)((char *)o + 0x3e4);
    v2 = (S_vv2 *)((char *)o + 0x3e8);
    v3 = (S_vv3 *)((char *)o + 0x3f8);
    v4 = (S_vv4 *)((char *)o + 0x3fc);
    switch (a1) {
    case 5:
        break;
    case 4:
        o->v101();
        ((ObjectData *)o)->f3a8 &= -8;
        ((ObjectData *)o)->f3c4 = 0;
        ((ObjectData *)o)->f60 = 0x4000;
        ((ObjectData *)o)->f68 = 0;
        v1->f00 = 1;
        v2->f00 = 0;
        v3->f00 = 8.0f;
        v4->f00 = 0.0f;
        return;
    case 3:
        if (v1->f00 != 3) {
            return;
        }
        operation_8c059ea4((void *)o, 2);
        return;
    case 0:
        switch (v1->f00) {
        case 0:
            v2->f00 += 1;
            if (v2->f00 >= 0xf) {
                v1->f00 = 1;
                call_8c05fbf8(0x30004, (void *)(((char *)o + 0x324)), 0, 0);
            }
            ((ObjectData *)o)->f324 = ((ObjectData *)o)->f420 * v3->f00 + ((ObjectData *)o)->f324;
            ((ObjectData *)o)->f32c = ((ObjectData *)o)->f428 * v3->f00 + ((ObjectData *)o)->f32c;
            break;
        case 1:
            *(int *)((char *)o + 0x3c4) += 0x400;
            lim = 0x38e3;
            if (((ObjectData *)o)->f3c4 >= lim) {
                ((ObjectData *)o)->f3c4 = lim;
                v1->f00 = 2;
            }
            ((ObjectData *)o)->f324 = ((ObjectData *)o)->f420 * v3->f00 + ((ObjectData *)o)->f324;
            ((ObjectData *)o)->f32c = ((ObjectData *)o)->f428 * v3->f00 + ((ObjectData *)o)->f32c;
            break;
        case 2:
            ((ObjectData *)o)->f60 -= 0x600;
            if (!(((ObjectData *)o)->f60 >= 0)) {
                ((ObjectData *)o)->f60 = 0;
            }
            ((ObjectData *)o)->f68 = (int)((float)((ObjectData *)o)->f68 + 2560.0f);
            v3->f00 -= 0.2f;
            if (!(v3->f00 > 3.0f)) {
                v3->f00 = 3.0f;
            }
            t1 = active_unflagged_8c05b2dc((void *)(((ObjectData *)o)->f40c));
            if (t1 != 0) {
                *(Vector3 *)&((ObjectData *)o)->f3ac = *(Vector3 *)&((ObjectData *)o)->f40c->f3c;
                call_8c3bdf60((void *)(((char *)o + 0x3ac)), (void *)(((char *)o + 0x414)));
                ((ObjectData *)o)->f3ac.f04 += 17.0f;
            }
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3ac;
            call_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x324)));
            t2 = normalize_vector_checked((void *)(&frame));
            if (!(t2 > 4.5f)) {
                v1->f00 = 3;
            }
            v4->f00 += 0.05f;
            if (v4->f00 > 3.0f) {
                v4->f00 = 3.0f;
            }
            v22 = (float)(v4->f00 / v3->f00);
            ((ObjectData *)o)->f420 = (&frame)->f00.f00 * v22 + ((ObjectData *)o)->f420;
            ((ObjectData *)o)->f424 = (&frame)->f00.f04 * v22 + ((ObjectData *)o)->f424;
            ((ObjectData *)o)->f428 = (&frame)->f00.f08 * v22 + ((ObjectData *)o)->f428;
            normalize_vector_checked((void *)(((char *)o + 0x420)));
            ((ObjectData *)o)->f324 = ((ObjectData *)o)->f420 * v3->f00 + ((ObjectData *)o)->f324;
            ((ObjectData *)o)->f328 = ((ObjectData *)o)->f424 * v3->f00 + ((ObjectData *)o)->f328;
            ((ObjectData *)o)->f32c = ((ObjectData *)o)->f428 * v3->f00 + ((ObjectData *)o)->f32c;
        }
        ((ObjectData *)o)->f3c = ((ObjectData *)o)->f324;
        ((ObjectData *)o)->f44 = ((ObjectData *)o)->f32c;
        t3 = o->v108();
        if (t3 == 0) {
            ((ObjectData *)o)->f3a8 &= -3;
            return;
        }
        ((ObjectData *)o)->f3a8 |= 2;
    }
}
