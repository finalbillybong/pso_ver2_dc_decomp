/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c050ed0
 * function: operation_8c050ed0
 * language: c++
 * reference size: 572 bytes
 * compiled size: 572 bytes (+0.0%)
 * differing lines: 84 of 241 reference instruction lines
 * differing bytes: 43
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct Arg0_64 Arg0_64;
class Object;
class Arg0_334;
typedef struct Block_p0_3c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3c;
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
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    Vector3 f48;
    char unknown54[0x10];
    Arg0_64 *f64;
    char unknown68[0x84];
    int fec;
    char unknownf0[0x21c];
    short f30c;
    char unknown30e[0xa];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x10];
    Arg0_334 *f334;
    char unknown338[0x20];
    short f358;
    char unknown35a[0x12];
    Arg0_36c *f36c;
} ObjectData;
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
    Arg0_36c_8 *f08;
};
class Arg0_334 {
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
    virtual int v22(Object *, float);
    virtual void v23();
    virtual void v24(Object *, float);
    virtual void v25();
    virtual void v26();
    virtual void v27(Object *, float);
};
typedef struct Arg0_334Data {

} Arg0_334Data;
extern "C" void operation_8c01c5f0(void *);
extern "C" void call_8c043f28(Object *, void *);
extern "C" void operation_8c04a43c(void *, float, void *);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void call_8c044410(Object *, void *, float);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void refresh_follow_effect_8c052180(void *);
extern "C" void operation_8c050ed0(Object *o)
{
    int t1;
    int t2;
    int t3;
    operation_8c01c5f0((void *)o);
    switch (((ObjectData *)o)->f30c) {
    case 0:
        call_8c043f28(o, (void *)(((ObjectData *)o)->f36c->f08));
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        t1 = check_range_8c01cf68((void *)o, 11.0f);
        if (t1 == 0) {
            goto L_8c0510a6;
        }
        call_8c044410(o, (void *)(((ObjectData *)o)->f64), ((ObjectData *)o)->f36c->f04);
        ((ObjectData *)o)->f31c = 0.0f;
        ((ObjectData *)o)->f30c = 1;
        break;
    case 1:
        *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
        ((ObjectData *)o)->f3c.f00 = ((ObjectData *)o)->f318 + ((ObjectData *)o)->f3c.f00;
        ((ObjectData *)o)->f318 *= 0.95f;
        ((ObjectData *)o)->f320 *= 0.95f;
        ((ObjectData *)o)->f3c.f08 = ((ObjectData *)o)->f320 + ((ObjectData *)o)->f3c.f08;
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        t2 = check_range_8c01cf68((void *)o, 14.0f);
        if (t2 == 0) {
            goto L_8c0510a6;
        }
        if (((ObjectData *)o)->f334 != 0) {
            t3 = ((ObjectData *)o)->f334->v22(o, 1.0f);
            if (t3 != 0) {
                ((ObjectData *)o)->f334->v24(o, 1.0f);
                ((ObjectData *)o)->f334->v27(o, 3.0f);
            }
        }
        play_se_8c05fbf8(0x3000d, (void *)(((char *)o + 0x3c)), 0, 0);
        ((ObjectData *)o)->f30c = 2;
        ((ObjectData *)o)->f358 = 0x1e;
        break;
    case 2:
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        *(short *)((char *)o + 0x358) -= 1;
        if (((ObjectData *)o)->f358 >= 0) {
            goto L_8c0510a6;
        }
        ((ObjectData *)o)->f30c = 3;
        break;
    case 3:
        *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
        ((ObjectData *)o)->f3c.f00 = ((ObjectData *)o)->f318 + ((ObjectData *)o)->f3c.f00;
        ((ObjectData *)o)->f3c.f08 = ((ObjectData *)o)->f320 + ((ObjectData *)o)->f3c.f08;
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        if (((ObjectData *)o)->fec != 4) {
            ((ObjectData *)o)->f320 = 0.0f;
            ((ObjectData *)o)->f31c = 0.0f;
            ((ObjectData *)o)->f318 = 0.0f;
            ((ObjectData *)o)->f34 &= -0x200001;
            o->v67();
            ((ObjectData *)o)->f358 = 0;
        }
    }
L_8c0510a6:;
    refresh_follow_effect_8c052180((void *)o);
}
