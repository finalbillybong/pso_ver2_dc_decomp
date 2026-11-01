/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1529d0
 * function: operation_8c1529d0
 * language: c++
 * reference size: 1704 bytes
 * compiled size: 1708 bytes (+0.2%)
 * differing lines: 172 of 579 reference instruction lines
 * differing bytes: 1277
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4da87c S_g8c4da87c;
typedef struct Arg0_494 Arg0_494;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv12 S_vv12;
typedef struct S_vv29 S_vv29;
class Object;
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
    virtual void v76(int, void *);
};
typedef struct ObjectData {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x238];
    int f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x2];
    short f358;
    char unknown35a[0x36];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0xc];
    short f3b4;
    short f3b6;
    char unknown3b8[0xdc];
    Arg0_494 *f494;
} ObjectData;
struct Frame {
    Vector3 f00;
    int f0c;
    char unknown10[0x8];
    int f18;
    char unknown1c[0x8];
};
struct S_vv12 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c4da87c {
    char unknown0[0x2c];
    int f2c;
};
struct S_vv29 {
    char unknown0[0x4];
    short f04;
};
extern Vector3 g_8c316004;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4d9b9c;
extern S_g8c4da87c *g_8c4da87c;
extern "C" int lookup_low_id(int);
extern "C" void call_8c1549b0(Object *);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void call_8c0c2dc8(Object *, int, int, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" void apply_actor_matrix_frame(void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void call_8c154bb0(Object *);
extern "C" void call_8c154aec(Object *);
extern "C" int create_effect_769c(void *, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be280(int, Frame *, void *);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c0a7608(void *, void *);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void TObjVoloptPillar_ctor_8c15a900(void *, void *, int);
extern "C" void release_slots_8c154abc(void *);
extern "C" void operation_8c1529d0(Object *o)
{
    Frame frame;
    S_vv12 *v12;
    int v20;
    char *v21;
    int v18;
    int v19;
    S_vv29 *v29;
    int t1;
    int t2;
    int t3;
    int t4;
    if (((((ObjectData *)o)->f3a4 & 0x20000)) != 0) {
        ((ObjectData *)o)->f390 = 0;
    }
    t1 = lookup_low_id((int)(((ObjectData *)o)->f354 & 0xffff));
    ((ObjectData *)o)->f334 = (int)t1;
    switch (((ObjectData *)o)->f398) {
    case 0:
        ((ObjectData *)o)->ff0 = 0;
        ((ObjectData *)o)->f3b4 = 0;
    case 1:
        ((ObjectData *)o)->f358 = 0x5a;
        ((ObjectData *)o)->f398 = 2;
        call_8c1549b0(o);
    case 2:
        if (((ObjectData *)o)->f334 == 0) {
            o->v66();
            return;
        }
        call_8c05fd7c(0x30016, o, (void *)(((char *)o + 0x3c)), 0, 0);
        call_8c0c2dc8(o, (int)((int)((ObjectData *)o)->f334 + 0x3c), 0x566, -0x4000);
        call_8c05fd7c(0x3000e, o, (void *)(((char *)o + 0x3c)), 0, 0);
        operation_8c01c5f0(o);
        apply_actor_matrix_frame((void *)o);
        o->v76(0x3c, ((char *)o + 0x3f4));
        ((ObjectData *)o)->f358 -= 1;
        if (!(((ObjectData *)o)->f358 > 0)) {
            ((ObjectData *)o)->ff0 = 2;
            play_se_8c05fbf8(0x30017, (void *)(((char *)o + 0x3c)), 0, 0);
            ((ObjectData *)o)->f398 = 3;
        }
        call_8c154bb0(o);
        call_8c154aec(o);
        return;
    case 3:
        if (((ObjectData *)o)->f334 == 0) {
            o->v66();
            return;
        }
        call_8c05fd7c(0x30016, o, (void *)(((char *)o + 0x3c)), 0, 0);
        call_8c0c2dc8(o, (int)((int)((ObjectData *)o)->f334 + 0x3c), 0x566, -0x4000);
        call_8c05fd7c(0x3000e, o, (void *)(((char *)o + 0x3c)), 0, 0);
        operation_8c01c5f0(o);
        apply_actor_matrix_frame((void *)o);
        o->v76(0x3c, ((char *)o + 0x3f4));
        if (!(33.0f > ((ObjectData *)o)->ff8)) {
            apply_actor_matrix_frame((void *)o);
            o->v76(0x39, &(&frame)->f18);
            t2 = create_effect_769c((void *)(&(&frame)->f18), 0x1a0);
            ((ObjectData *)o)->f494 = (Arg0_494 *)(int)t2;
            ((ObjectData *)o)->f358 = 0x1e;
            ((ObjectData *)o)->f398 = 4;
        }
        call_8c154bb0(o);
        call_8c154aec(o);
        t3 = check_range_8c01cf68((void *)o, 15.0f);
        if (t3 == 0) {
            return;
        }
        play_se_8c05fbf8(0x30018, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 4:
        if (((ObjectData *)o)->f334 == 0) {
            o->v66();
            return;
        }
        call_8c0c2dc8(o, (int)((int)((ObjectData *)o)->f334 + 0x3c), 0x566, -0x4000);
        call_8c05fd7c(0x30016, o, (void *)(((char *)o + 0x3c)), 0, 0);
        apply_actor_matrix_frame((void *)o);
        o->v76(0x3c, ((char *)o + 0x3f4));
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c316004;
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3be280(0, (Frame *)((&frame)), (void *)(&(&frame)->f0c));
        call_8c3bdf60((void *)(&(&frame)->f0c), (void *)(((char *)o + 0x3c)));
        njPopMatrixEx_8c38ad10();
        if (((ObjectData *)o)->f494 != 0) {
            call_8c0a7608((void *)(((ObjectData *)o)->f494), (void *)(&(&frame)->f0c));
        }
        call_8c05fd7c(0x3001a, o, (void *)(((char *)o + 0x3c)), 0, 0);
        if (!((short)--((ObjectData *)o)->f358 > 0)) {
            if (((ObjectData *)o)->f494 != 0) {
                v12 = (S_vv12 *)((ObjectData *)o)->f494;
                v12->f04 |= 1;
                ((ObjectData *)o)->f494 = (Arg0_494 *)0;
            }
            ((ObjectData *)o)->f3b6 = 0;
            ((ObjectData *)o)->f398 = 5;
        }
        call_8c154bb0(o);
        call_8c154aec(o);
        return;
    case 5:
        if (((ObjectData *)o)->f334 == 0) {
            o->v66();
            return;
        }
        ((ObjectData *)o)->f358 = g_8c4da87c->f2c;
        call_8c154bb0(o);
        v18 = (int)0x3c4;
        v19 = (int)0x3b8;
        v20 = (int)0;
        goto L_8c152eb4;
        v21 = (char *)v20;
        do {
            t4 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xf8);
            if (t4 != 0) {
                TObjVoloptPillar_ctor_8c15a900((void *)t4, (void *)((int)o + (int)(v21) * 0xc + v18), (int)o);
            }
            v20 = (int)(v21 + 1);
L_8c152eb4:;
            v21 = (char *)v20;
        } while (*(short *)((char *)((char *)o + 0x0) + (v19)) > v20);
        play_se_8c05fbf8(0x30022, (void *)(((char *)o + 0x3c)), 0, 0);
        ((ObjectData *)o)->f398 = 6;
        call_8c1549b0(o);
    case 6:
        call_8c05fd7c(0x30016, o, (void *)(((char *)o + 0x3c)), 0, 0);
        if ((short)--*(short *)((char *)o + 0x358) > 0) {
            return;
        }
        release_slots_8c154abc((void *)o);
        if (g_8c4d9b9c != 0) {
            ((ObjectData *)o)->f358 = *(short *)((char *)0x8c4da868 + (((ObjectData *)o)->f3b6 << 1));
        } else {
            ((ObjectData *)o)->f358 = 0x14;
        }
        ((ObjectData *)o)->f398 = 7;
        return;
    case 7:
        if ((short)--*(short *)((char *)o + 0x358) > 0) {
            return;
        }
        if (g_8c4d9b9c != 0) {
            ((ObjectData *)o)->f358 = 0;
        } else {
            ((ObjectData *)o)->f358 = 5;
        }
        ((ObjectData *)o)->ff0 = 0;
        ((ObjectData *)o)->f398 = 8;
        play_se_8c05fbf8(0x30017, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 8:
        operation_8c01c5f0(o);
        if ((short)--((ObjectData *)o)->f358 > 0) {
            return;
        }
        if (3 > (short)++((ObjectData *)o)->f3b6) {
            ((ObjectData *)o)->f398 = 5;
            return;
        }
        if (2 > (short)++((ObjectData *)o)->f3b4) {
            ((ObjectData *)o)->f398 = 1;
            return;
        }
        o->v66();
        return;
    case -1:
        release_slots_8c154abc((void *)o);
        if (((ObjectData *)o)->f494 != 0) {
            v29 = (S_vv29 *)((ObjectData *)o)->f494;
            v29->f04 |= 1;
            ((ObjectData *)o)->f494 = (Arg0_494 *)0;
        }
        return;
    }
}
