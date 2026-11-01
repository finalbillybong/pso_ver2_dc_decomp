/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21bcd0
 * function: TObjDFHorming_update_8c21bcd0
 * language: c++
 * reference size: 624 bytes
 * compiled size: 624 bytes (+0.0%)
 * differing lines: 184 of 249 reference instruction lines
 * differing bytes: 82
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order; review found and
 *   fixed behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c4e228c S_g8c4e228c;
typedef struct Object Object;
typedef struct S_x16144 S_x16144;
typedef struct S_x16592_0 S_x16592_0;
typedef struct S_x17152_0 S_x17152_0;
class S_c8c021ef8;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x42];
    Vector3 f48;
    char unknown54[0x2d0];
    Vector3 f324;
    char unknown330[0x20];
    unsigned short f350;
    char unknown352[0x2];
    int f354;
    char unknown358[0xc];
    float f364;
    float f368;
    float f36c;
    float f370;
    char unknown374[0x8];
    int f37c;
    char unknown380[0x4];
    int f384;
    Vector3 f388;
    char unknown394[0x4];
    float f398;
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
    virtual void v25(void *, Block8);
};
typedef struct S_c8c021ef8Data {
    char unknown0[0x324];
    Vector3 f324;
} S_c8c021ef8Data;
struct Frame {
    Block_frame_0 f00;
    Vector3 f08;
    char unknown14[0x4];
    int f18;
    char unknown1c[0x4];
};
struct S_x16144 {
    Vector3 f00;
};
extern S_g8c4e228c *g_8c4e228c;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" float call_8c38d7d8(void *);
extern "C" void operation_8c21bf48(void *);
extern "C" void call_8c21bfc0(Object *);
extern "C" void operation_8c21c10c(void *);
extern "C" void njUnitVector_8c37b630(void *);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" int call_8c04a52c(Object *, int, float);
extern "C" int operation_8c1ae344(void);
extern "C" void operation_8c21bf40(void *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" void call_8c0c5094(void *, void *, void *);
extern "C" void set_effect_words(void *, void *);
extern "C" void call_8c0a7608(void *, int);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void TObjDFHorming_update_8c21bcd0(Object *o)
{
    Frame frame;
    unsigned short v18;
    int v13;
    int v11;
    int v12;
    int v14;
    char *p1c;
    S_c8c021ef8 *t1;
    float t2;
    int t3;
    S_c8c021ef8 *t4;
    int t5;
    v18 = (unsigned short)o->f350;
    if ((v18 & 0xffff) != 0xffff) {
        t1 = lookup_low_id((int)(v18 & 0xffff));
        if (t1 != 0) {
            goto L_8c21bd02;
        }
    }
    o->f04 |= 1;
    return;
L_8c21bd02:;
    *(Vector3 *)&o->f388 = *(Vector3 *)&((S_c8c021ef8Data *)t1)->f324;
    t2 = call_8c38d7d8((void *)(&o->f324));
    o->f398 = t2;
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f324;
    switch (o->f384) {
    case 0:
        operation_8c21bf48((void *)o);
        break;
    case 1:
        call_8c21bfc0(o);
        break;
    case 2:
        operation_8c21c10c((void *)o);
    }
    njUnitVector_8c37b630((void *)(&o->f364));
    o->f364 = o->f370 * o->f364;
    o->f368 *= o->f370;
    o->f36c *= o->f370;
    call_8c3bdf60((void *)(&o->f324), (void *)(&o->f364));
    t3 = call_8c04a52c(o, 0, 7.5f);
    if ((unsigned short)t3 != 0xffff) {
        t4 = lookup_low_id((int)((unsigned short)t3));
        if (t4 != 0) {
            t5 = operation_8c1ae344();
            if (t5 != 0) {
                (&frame)->f00.f00 = 0;
                (&frame)->f00.f04 = (float)o->f37c;
                t4->v25(g_8c4e228c, *(Block8 *)&(&frame)->f00);
            }
            operation_8c21bf40((void *)o);
            return;
        }
    }
    p1c = (char *)(&frame) + 0x1c;
    v11 = (int)0x374;
    v12 = (int)0x324;
    v13 = (int)0;
    while (2 > v13) {
        v14 = (int)(v13 << 2);
        if (*(int *)((char *)((char *)((int)o + v11) + 0x0) + (v14)) != 0) {
            if (v13 == 1) {
                *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&((S_x16144 *)((int)o + v12))->f00;
                vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f08), (void *)(&o->f48));
                call_8c0c5094((void *)(&(&frame)->f08), (void *)(((char *)(&frame) + 0x14)), (void *)p1c);
                (&frame)->f18 = 0;
                set_effect_words((void *)(*(S_x16592_0 **)((char *)((char *)((int)o + v11) + 0x0) + (v14))), (void *)(((char *)(&frame) + 0x14)));
            }
            call_8c0a7608((void *)(*(S_x17152_0 **)((char *)((char *)((int)o + v11) + 0x0) + (v14))), (int)((int)o + v12));
        }
        v13 = (int)(v13 + 1);
    }
    minimap_add_marker_8c102cd0((void *)(&o->f324), -0x5db4, 1, 0);
    if (!(--o->f354 >= 0)) {
        o->f04 |= 1;
    }
}
