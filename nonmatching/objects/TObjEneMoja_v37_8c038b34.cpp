/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c038b34
 * function: TObjEneMoja_v37_8c038b34
 * language: c++
 * reference size: 456 bytes
 * compiled size: 456 bytes (+0.0%)
 * differing lines: 8 of 186 reference instruction lines
 * differing bytes: 12
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, stack frame and spills, instruction or operand order, constant
 *   loading; review found and fixed behaviour defects of the generator draft; not proven
 *   equivalent to the original
 * class header: src/include/classes/TObjEneMoja.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct S_L8c2eddf8 S_L8c2eddf8;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Arg0_36c Arg0_36c;
typedef struct S_vv5 S_vv5;
typedef struct S_x7664 S_x7664;
class Object;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
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
    char unknown370[0x20];
    int f390;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
    float f08;
};
struct S_L8c2eddf8 {
    Block8 f00;
    int f08;
};
struct Arg0_36c {
    float f00;
};
struct S_vv5 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
};
struct S_x7664 {
    Vector3 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
extern int g_8c44be04;
extern int g_8c467874;
extern int g_8c467878;
extern S_L8c2eddf8 g_8c2eddf8;
extern "C" void vector_sub_in_place_8c37f6f0(Frame *, int);
extern "C" int query_capped_segment(void *, void *);
extern "C" int operation_8c011214(int, int, int);
extern "C" int call_8c04a52c(Object *, int, float);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int operation_8c012a14(int);
extern "C" void TObjEneMoja_v37_8c038b34(Object *o)
{
    Frame frame;
    float v45;
    S_vv5 *v5;
    unsigned short v1;
    int v4;
    int v27;
    int v7;
    float v8;
    float v3;
    float v9;
    int v10;
    short v6;
    int v2;
    int v43;
    int t1;
    int t2;
    int t3;
    int t4;
    S_c8c021ef8 *t5;
    int t6;
    if (((ObjectData *)o)->f390 == 1) {
        return;
    }
    t1 = o->v20(0x1e);
    if (t1 == 0) {
        return;
    }
    if (((((ObjectData *)o)->f34 & 0x10)) != 0) {
        v1 = (int)0xffff;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c2eddf8;
        v2 = (int)0x324;
        v45 = (float)((ObjectData *)o)->f36c->f00;
        v3 = (float)(v45 * v45);
        for (v4 = 0; (g_8c467874 + g_8c467878) > v4; v4++) {
            v5 = (S_vv5 *)*(S_g8c467240 **)((char *)0x8c467240 + (v4 << 2));
            if (v5 == 0) {
                break;
            }
            v6 = v5->f20;
            v43 = 0x4000;
            if ((unsigned short)v6 < (unsigned short)v43 && (unsigned short)v6 != ((ObjectData *)o)->f20 && ((v5->f34 & 0x2000800)) == 0) {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x7664 *)((int)v5 + v2))->f00;
                v7 = (int)((int)o + v2);
                vector_sub_in_place_8c37f6f0((Frame *)((&frame)), v7);
                v9 = (&frame)->f00.f00 * (&frame)->f00.f00 + (&frame)->f08 * (&frame)->f08;
                if (v3 > v9) {
                    v10 = (int)((int)v5 + v2);
                    t2 = query_capped_segment((void *)o, (void *)v10);
                    if (t2 != 1) {
                        t3 = operation_8c011214(v7, v10, -1);
                        if (t3 == 0) {
                            v1 = (int)v6;
                            v3 = v9;
                        }
                    }
                }
            }
        }
        ((ObjectData *)o)->f354 = v1;
    } else {
        t4 = call_8c04a52c(o, 0, ((ObjectData *)o)->f36c->f00);
        ((ObjectData *)o)->f354 = t4;
    }
    v43 = (unsigned short)((ObjectData *)o)->f354;
    if ((unsigned int)0x1000 > (unsigned int)(unsigned short)v43) {
        t5 = lookup_low_id((int)((unsigned short)v43));
        if (t5 != 0 && t5->f37c == g_8c44be04) {
            ((ObjectData *)o)->f334 = (S_c8c021ef8 *)t5;
            return;
        }
        ((ObjectData *)o)->f334 = (S_c8c021ef8 *)0;
        return;
    }
    if ((unsigned int)0x4000 > (unsigned int)(unsigned short)v43) {
        t6 = operation_8c012a14(v43);
        ((ObjectData *)o)->f334 = (S_c8c021ef8 *)(int)t6;
        return;
    }
    ((ObjectData *)o)->f354 = 0xffff;
    ((ObjectData *)o)->f334 = (S_c8c021ef8 *)0;
}
