/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04d15c
 * function: TObjGrass_v37_8c04d15c
 * language: c++
 * reference size: 456 bytes
 * compiled size: 456 bytes (+0.0%)
 * differing lines: 4 of 185 reference instruction lines
 * differing bytes: 8
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, constant loading; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Arg0_36c Arg0_36c;
typedef struct S_vv6 S_vv6;
typedef struct S_x89984 S_x89984;
class Object;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
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
    virtual int v20(int);
};
typedef struct ObjectData {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2fc];
    S_c8c021ef8 *f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x16];
    Arg0_36c *f36c;
    char unknown370[0x58];
    int f3c8;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_36c {
    float f00;
};
struct S_vv6 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
};
struct S_x89984 {
    Vector3 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
extern Vector3 g_8c2f2cc8;
extern int g_8c44be04;
extern int g_8c467874;
extern int g_8c467878;
extern "C" void vector_sub_in_place_8c37f6f0(Frame *, int);
extern "C" int query_capped_segment(void *, void *);
extern "C" int call_8c04a52c(Object *, int, float);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int operation_8c012a14(int);
extern "C" void TObjGrass_v37_8c04d15c(Object *o)
{
    Frame frame;
    float v62;
    S_vv6 *v6;
    unsigned short v1;
    unsigned short v63;
    int v5;
    int v24;
    short v7;
    float v4;
    float v9;
    int v3;
    int v2;
    int v41;
    int t1;
    int t2;
    int t3;
    S_c8c021ef8 *t4;
    int t5;
    t1 = o->v20(0x1e);
    if (t1 == 0) {
        return;
    }
    if (((ObjectData *)o)->f3c8 == 1) {
        ((ObjectData *)o)->f354 = 0xffff;
        ((ObjectData *)o)->f334 = (S_c8c021ef8 *)0;
        return;
    }
    if (((((ObjectData *)o)->f34 & 0x10)) != 0) {
        v1 = (int)0xffff;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c2f2cc8;
        v2 = (int)0x2000800;
        v3 = (int)0x324;
        v62 = (float)((ObjectData *)o)->f36c->f00;
        v4 = (float)(v62 * v62);
        v24 = (int)0;
        goto L_8c04d238;
        v5 = (int)0;
L_8c04d1c8:;
        v6 = (S_vv6 *)*(S_g8c467240 **)((char *)0x8c467240 + (v5 << 2));
        v24 = (int)v5;
        if (v6 != 0) {
            v7 = v6->f20;
            v63 = (unsigned short)0x4000;
            if ((unsigned int)(unsigned short)v7 < v63 && (unsigned short)v7 != ((ObjectData *)o)->f20 && ((v6->f34 & v2)) == 0) {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x89984 *)((int)v6 + v3))->f00;
                vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (int)((int)o + v3));
                v9 = (&frame)->f00.f00 * (&frame)->f00.f00 + (&frame)->f00.f08 * (&frame)->f00.f08;
                if (v4 > v9) {
                    t2 = query_capped_segment((void *)o, (void *)((int)v6 + v3));
                    if (t2 != 1) {
                        v1 = (int)v7;
                        v4 = v9;
                    }
                }
            }
            v24 = (int)(v5 + 1);
L_8c04d238:;
            v5 = (int)v24;
            if ((g_8c467874 + g_8c467878) > v24) {
                goto L_8c04d1c8;
            }
        }
        ((ObjectData *)o)->f354 = v1;
    } else {
        t3 = call_8c04a52c(o, 0, ((ObjectData *)o)->f36c->f00);
        ((ObjectData *)o)->f354 = t3;
    }
    v41 = (unsigned short)((ObjectData *)o)->f354;
    if ((unsigned int)0x1000 > (unsigned int)(unsigned short)v41) {
        t4 = lookup_low_id((int)((unsigned short)v41));
        if (t4 != 0 && t4->f37c == g_8c44be04) {
            ((ObjectData *)o)->f334 = (S_c8c021ef8 *)t4;
            ((ObjectData *)o)->f34 &= -0x4040001;
            return;
        }
        ((ObjectData *)o)->f334 = (S_c8c021ef8 *)0;
        return;
    }
    if ((unsigned int)0x4000 > (unsigned int)(unsigned short)v41) {
        t5 = operation_8c012a14(v41);
        ((ObjectData *)o)->f334 = (S_c8c021ef8 *)(int)t5;
        ((ObjectData *)o)->f34 &= -0x4040001;
    }
}
