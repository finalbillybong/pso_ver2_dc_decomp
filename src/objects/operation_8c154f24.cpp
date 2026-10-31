typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4da87c S_g8c4da87c;
typedef struct S_g8c4dab04 S_g8c4dab04;
typedef struct Arg0_494 Arg0_494;
typedef struct Arg0_4dc Arg0_4dc;
typedef struct Arg0_528 Arg0_528;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv123 S_vv123;
typedef struct S_vv9 S_vv9;
class Object;
typedef struct Block_p0_3f4 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3f4;
typedef struct Block_frame_0 {
    char unknown0[0x8];
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
    virtual void v76(int, void *);
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x25c];
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
    char unknown3b8[0x3c];
    Block_p0_3f4 f3f4;
    char unknown400[0x94];
    Arg0_494 *f494;
    char unknown498[0x44];
    Arg0_4dc *f4dc;
    int f4e0;
    char unknown4e4[0x40];
    float f524;
    Arg0_528 *f528;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
    int f18;
    char unknown1c[0x8];
    int f24;
    char unknown28[0x8];
};
struct S_vv9 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c4dab04 {
    char unknown0[0x1c];
    int f1c;
};
struct S_g8c4da87c {
    char unknown0[0x2c];
    int f2c;
};
struct S_vv123 {
    char unknown0[0x4];
    short f04;
};
extern Vector3 g_8c316034;
extern Vector3 g_8c316040;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4da87c *g_8c4da87c;
extern S_g8c4dab04 *g_8c4dab04;
extern "C" void call_8c01c5f0(Object *);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" void apply_actor_matrix_frame(void *);
extern "C" int create_effect_769c(void *, int);
extern "C" int check_range_8c01cf68(void *, float);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" void call_8c38ade4(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3be280(int, void *, void *);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void call_8c38ad10(void);
extern "C" void call_8c0a7608(void *, void *);
extern "C" void call_8c1549b0(Object *);
extern "C" float call_8c37eb0c(void *);
extern "C" int lookup_low_id(int);
extern "C" float distance_xz(void *, void *);
extern "C" void call_8c15558c(Object *);
extern "C" int allocate_block(void *, unsigned int);
extern "C" void operation_8c15a900(void *, void *, int);
extern "C" void release_slots_8c15561c(void *);
extern "C" void operation_8c154f24(Object *o)
{
    Frame frame;
    float t5;
    int v22;
    int v34;
    int v43;
    int v26;
    int t2;
    int v21;
    int v20;
    int v32;
    char *v31;
    int v13;
    char *v65;
    int t6;
    int t4;
    int t1;
    int v63;
    int t10;
    short t9;
    Frame *t8;
    if ((((ObjectData *)o)->f3a4 & 0x20000) != 0) {
        ((ObjectData *)o)->f390 = 0;
    }
    switch (((ObjectData *)o)->f398) {
        case 0:
        call_8c01c5f0(o);
        ((ObjectData *)o)->ff0 = 2;
        ((ObjectData *)o)->f3b4 = 0;
        ((ObjectData *)o)->f4dc = (Arg0_4dc *)0;
        *(Vector3 *)&((ObjectData *)o)->f3f4 = *(&((ObjectData *)o)->f3c);
        ((ObjectData *)o)->f3f4.f04 = 80.0f;
        ((ObjectData *)o)->f528 = (Arg0_528 *)0;
        ((ObjectData *)o)->f398 = 1;
        return;
        case 1:
        call_8c05fd7c(0x30016, o, (void *)(((char *)o + 0x3c)), 0, 0);
        call_8c01c5f0(o);
        if (!(33.0f > ((ObjectData *)o)->ff8)) {
            apply_actor_matrix_frame((void *)o);
            o->v76(0x39, &(&frame)->f24);
            t1 = create_effect_769c((void *)(&(&frame)->f24), 0x1a0);
            ((ObjectData *)o)->f494 = (Arg0_494 *)(int)t1;
            ((ObjectData *)o)->f358 = (short)0x1e;
            ((ObjectData *)o)->f398 = 2;
        }
        t2 = check_range_8c01cf68((void *)o, 15.0f);
        if (0 == t2) {
            return;
        }
        call_8c05fbf8(0x30018, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
        case 2:
        call_8c05fd7c(0x30016, o, (void *)(((char *)o + 0x3c)), 0, 0);
        call_8c38ade4((void *)((void *)0x8c400500));
        t8 = &frame;
        t8->f0c = g_8c316034;
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3be280(0, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f18));
        call_8c3bdf60((void *)(&(&frame)->f18), (void *)((0x3c + (char *)o)));
        call_8c38ad10();
        if (!(0 == ((ObjectData *)o)->f494)) {
            call_8c0a7608((void *)(((ObjectData *)o)->f494), (void *)(&(&frame)->f18));
        }
        call_8c05fd7c(0x3001a, o, (void *)((0x3c + (char *)o)), 0, 0);
        if (!((short)-- *(short *)((char *)o + 0x358) <= 0)) {
            return;
        }
        if (!(((ObjectData *)o)->f494 == 0)) {
            ((S_vv9 *)((ObjectData *)o)->f494)->f04 = (short)(((S_vv9 *)((ObjectData *)o)->f494)->f04 | 1);
            ((ObjectData *)o)->f494 = (Arg0_494 *)0;
        }
        ((ObjectData *)o)->f3b6 = (short)0;
        ((ObjectData *)o)->f358 = 0x12c;
        ((ObjectData *)o)->f398 = 3;
        return;
        case 3:
        ((ObjectData *)o)->f398 = 4;
        call_8c1549b0(o);
        if ((int)((ObjectData *)o)->f3b6 == 0) {
            v13 = (int)(0x180 * g_8c4dab04->f1c);
        } else {
            v13 = 0x1555;
        }
        ((ObjectData *)o)->f4e0 = (int)v13;
        case 4:
        call_8c05fd7c(0x30016, o, (void *)((0x3c + (char *)o)), 0, 0);
        *(int *)((char *)o + 0x4dc) += 0x180;
        *(int *)((char *)o + 0x4e0) -= 0x180;
        if (!(((ObjectData *)o)->f3b6 != 0)) {
            float t3;
            *(int *)((char *)o + 0x528) += 0x400;
            t3 = call_8c37eb0c((void *)(((ObjectData *)o)->f528));
            ((ObjectData *)o)->f524 = (t3 * 25.0f) + 75.0f;
        }
        call_8c38ade4(((void *)0x8c400500));
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c316040;
        (&frame)->f00.f08 = ((ObjectData *)o)->f524;
        call_8c37df90(0, (void *)(((ObjectData *)o)->f4dc));
        v20 = 0x4e4;
        v21 = 0x4000;
        v22 = 0;
        for (; 4 > v22; ) {
            int v23;
            v13 = (int)o;
            t2 = v13;
            t1 = v22 * 0xc + t2;
            v23 = (int)(t1 + v20);
            call_8c3be280(0, (void *)(&frame), (void *)v23);
            call_8c3bdf60((void *)v23, (void *)((0x3c + (char *)o)));
            call_8c37df90(0, (void *)(int)v21);
            v22 += 1;
        }
        call_8c38ad10();
        if (((ObjectData *)o)->f4e0 <= 0) {
            if (((ObjectData *)o)->f3b6 == 0) {
                int v30;
                int v28;
                int v29;
                v28 = 0x4e4;
                v29 = (int)0x398;
                v30 = 0;
                for (; 4 > v30; ) {
                    t4 = lookup_low_id(v30);
                    if (t4 != 0) {
                        v32 = 0;
                        for (; v32 < 4; ) {
                            v22 = (int)o;
                            t5 = distance_xz((void *)(t4 + 0x3c), (void *)(v22 + v32 * 0xc + v28));
                            if (!(t5 > 100.0f)) {
                                *(int *)((v29) + ((char *)o + 0x0)) = 5;
                                v30 = 4;
                                break;
                            }
                            v32++;
                        }
                    }
                    v30 = 1 + v30;
                }
                if ((short)--((ObjectData *)o)->f358 > 0) {
                    goto L_8c1553d6;
                }
                ((ObjectData *)o)->f398 = 5;
            } else {
                ((ObjectData *)o)->f398 = 5;
            }
        }
    L_8c1553d6:
        ;
        call_8c15558c(o);
        return;
        case 5:
        {
        int v64;
        v64 = 0x4e4;
        v63 = 0;
        ((ObjectData *)o)->f358 = (short)g_8c4da87c->f2c;
        while (4 > v63) {
            t6 = allocate_block(g_8c4d97e0, (unsigned int)0xf8);
            if (0 != t6) {
                operation_8c15a900((void *)t6, (void *)(v64 + ((int)o + v63 * 0xc)), (int)o);
            }
            v63 = v63 + 1;
        }
        }
        call_8c05fbf8(0x30022, (void *)(((0x3c + (char *)o))), 0, 0);
        ((ObjectData *)o)->f398 = 6;
        call_8c1549b0(o);
        case 6:
        call_8c05fd7c(0x30016, o, (void *)((0x3c + (char *)o)), 0, 0);
        t9 = (short)-- *(short *)(((char *)o + 0x358));
        if (!(t9 > 0)) {
            ((ObjectData *)o)->f358 = (unsigned short)(0x14);
            ((ObjectData *)o)->f398 = 7;
        }
        call_8c15558c(o);
        return;
        case 7:
        t10 = 0x358;
        if ((short)-- *(short *)((char *)o + t10) <= 0) {
            ((ObjectData *)o)->f358 = 5;
            ((ObjectData *)o)->f398 = 8;
        }
        call_8c15558c(o);
        return;
        case 8:
        if ((short)--((ObjectData *)o)->f358 <= 0) {
            v21 = (short)++((ObjectData *)o)->f3b6;
            if (3 > v21) {
                ((ObjectData *)o)->f398 = 3;
            } else {
                call_8c05fbf8(0x30017, (void *)((0x3c + (char *)o)), 0, 0);
                o->v66();
                return;
            }
        }
        call_8c15558c(o);
        return;
        case -1:
        release_slots_8c15561c((void *)o);
        if (!(((ObjectData *)o)->f494 == 0)) {
            ((S_vv123 *)((ObjectData *)o)->f494)->f04 = 1 | ((S_vv123 *)((ObjectData *)o)->f494)->f04;
            ((ObjectData *)o)->f494 = (Arg0_494 *)0;
        }
        return;
    }
}
