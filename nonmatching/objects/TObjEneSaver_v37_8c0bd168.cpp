/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bd168
 * function: TObjEneSaver_v37_8c0bd168
 * language: c++
 * reference size: 844 bytes
 * compiled size: 844 bytes (+0.0%)
 * differing lines: 150 of 317 reference instruction lines
 * differing bytes: 175
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
 * class header: src/include/classes/TObjEneSaver.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct S_vv42 S_vv42;
typedef struct S_vv6 S_vv6;
typedef struct S_x8336 S_x8336;
class Object;
typedef struct Block_frame_c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_c;
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
    char unknown370[0x20];
    int f390;
    int f394;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
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
struct S_x8336 {
    Vector3 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
struct S_vv42 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2ec];
    Vector3 f324;
    char unknown330[0x4c];
    int f37c;
    char unknown380[0x498];
    int f818;
};
extern Vector3 g_8c305afc;
extern Vector3 g_8c305b08;
extern int g_8c44be04;
extern int g_8c467874;
extern int g_8c467878;
extern "C" void vector_sub_in_place_8c37f6f0(void *, int);
extern "C" int query_capped_segment(void *, void *);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int operation_8c012a14(int);
extern "C" void TObjEneSaver_v37_8c0bd168(Object *o)
{
    Frame frame;
    unsigned short v1;
    int v2;
    int v3;
    int i;
    S_vv6 *v6;
    short v7;
    unsigned short v83;
    float v4;
    float v9;
    float v82;
    unsigned short v81;
    S_c8c021ef8 *t3;
    S_vv42 *v42;
    int v38;
    int v54;
    S_vv42 *v39;
    S_vv42 *v55;
    unsigned short v84;
    float v40;
    float v56;
    float v44;
    if (((((ObjectData *)o)->f390 & 0x40)) != 0) {
        ((ObjectData *)o)->f354 = 0xffff;
        ((ObjectData *)o)->f334 = (S_c8c021ef8 *)0;
        return;
    }
    if (o->v20(0x1e) == 0) {
        return;
    }
    if (((((ObjectData *)o)->f34 & 0x10)) != 0) {
        v1 = 0xffff;
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c305afc;
        v2 = 0x2000800;
        v3 = 0x324;
        v82 = ((ObjectData *)o)->f36c->f00;
        v4 = v82 * v82;
        for (i = 0; (g_8c467874 + g_8c467878) > i; i++) {
            v6 = (S_vv6 *)*(S_g8c467240 **)((char *)0x8c467240 + (i << 2));
            if (v6 != 0 && v6 != (void *)o) {
                v7 = v6->f20;
                v83 = (unsigned short)0x4000;
                if ((unsigned int)(unsigned short)v7 < v83 && (unsigned short)v7 != ((ObjectData *)o)->f20 && ((v6->f34 & v2)) == 0) {
                    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x8336 *)((int)v6 + v3))->f00;
                    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f0c), (int)((int)o + v3));
                    v9 = (&frame)->f0c.f00;
                    v9 = v9 * v9;
                    v9 = v9 + (&frame)->f0c.f08 * (&frame)->f0c.f08;
                    if (v4 > v9) {
                        if (query_capped_segment((void *)o, (void *)((int)v6 + v3)) != 1) {
                            v1 = v7;
                            v4 = v9;
                        }
                    }
                }
            }
        }
        ((ObjectData *)o)->f354 = v1;
        v81 = (unsigned short)((ObjectData *)o)->f354;
        if ((unsigned int)0x1000 > (unsigned int)(v81 & 0xffff)) {
            t3 = lookup_low_id((int)(v81 & 0xffff));
            if (t3 != 0 && t3->f37c == g_8c44be04) {
                ((ObjectData *)o)->f334 = t3;
                return;
            }
            ((ObjectData *)o)->f334 = (S_c8c021ef8 *)0;
            return;
        }
        if (!((unsigned int)0x4000 > (unsigned int)(v81 & 0xffff))) {
            return;
        }
        ((ObjectData *)o)->f334 = (S_c8c021ef8 *)(int)operation_8c012a14(v81);
        return;
    }
    v39 = 0;
    v38 = 0xffff;
    v55 = v39;
    v54 = v38;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c305b08;
    v40 = ((ObjectData *)o)->f36c->f00;
    v40 = v40 * v40;
    v56 = v40;
    for (i = 0; g_8c467874 > i; i++) {
        v42 = (S_vv42 *)*(S_g8c467240 **)((char *)0x8c467240 + (i << 2));
        if (v42 == 0) {
            continue;
        }
        v84 = (unsigned short)0x1000;
        if (!((unsigned short)v42->f20 < v84)) {
            continue;
        }
        if (v42->f37c != g_8c44be04) {
            continue;
        }
        if (((v42->f34 & 0x2000800)) != 0) {
            continue;
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v42->f324;
        vector_sub_in_place_8c37f6f0((void *)(&frame), (int)(((char *)o + 0x324)));
        v44 = (&frame)->f00.f00 * (&frame)->f00.f00 + (&frame)->f00.f08 * (&frame)->f00.f08;
        if (((v42->f818 & ((ObjectData *)o)->f394)) != 0 && v40 > v44) {
            if (query_capped_segment((void *)o, (void *)((int)v42 + 0x324)) != 1) {
                v38 = v42->f20;
                v40 = v44;
                v39 = v42;
            }
        }
        if (v56 > v44) {
            if (query_capped_segment((void *)o, (void *)((int)v42 + 0x324)) != 1) {
                v54 = v42->f20;
                v56 = v44;
                v55 = v42;
            }
        }
    }
    if (900.0f > v56 && v55 != 0) {
        ((ObjectData *)o)->f354 = v54;
        ((ObjectData *)o)->f334 = (S_c8c021ef8 *)v55;
        return;
    }
    if (v39 != 0) {
        ((ObjectData *)o)->f354 = v38;
        ((ObjectData *)o)->f334 = (S_c8c021ef8 *)v39;
        return;
    }
    if (v55 != 0) {
        ((ObjectData *)o)->f354 = v54;
        ((ObjectData *)o)->f334 = (S_c8c021ef8 *)v55;
        return;
    }
    ((ObjectData *)o)->f354 = 0xffff;
    ((ObjectData *)o)->f334 = (S_c8c021ef8 *)0;
}
