/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c257bc0
 * function: handle_6x91_hit_destructible_object_8c257bc0
 * language: c++
 * reference size: 312 bytes
 * compiled size: 312 bytes (+0.0%)
 * differing lines: 36 of 134 reference instruction lines
 * differing bytes: 35
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
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv13 S_vv13;
class S_c8c053d84;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    int f04;
    int f08;
    unsigned short f0c;
    unsigned short f0e;
    short f10;
    unsigned char f12;
    char f13;
};
class S_c8c053d84 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(void *, int);
};
typedef struct S_c8c053d84Data {
    int f00;
    char unknown4[0x306];
    short f30a;
    char unknown30c[0x4c];
    int f358;
} S_c8c053d84Data;
struct Frame {
    char f00;
    char unknown1[0x3];
    short f04;
    char unknown6[0x2];
};
struct S_vv13 {
    char f00;
};
extern int g_8c34004c;
extern int g_8c46ed0c;
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void operation_8c05428c(void *, int, int);
extern "C" void operation_03cf64(unsigned short, int);
extern "C" void handle_6x91_hit_destructible_object_8c257bc0(Object *o)
{
    Frame frame;
    unsigned short v140;
    int v1;
    unsigned short v2;
    int v5;
    S_vv13 *v13;
    int v12;
    unsigned short v22;
    if (o != 0) {
        {
            Object *base = o;
            S_c8c053d84 *t1;
            v140 = (unsigned short)base->f02;
            if (v140 != 0xffff && v140 >= (unsigned int)0x4000) {
                t1 = lookup_object_by_id((unsigned short)v140);
                if (t1 != 0) {
                    v1 = (int)(((S_c8c053d84Data *)t1)->f00 == g_8c34004c);
                    if (v1 == 0) {
                        goto L_8c257c96;
                    }
                    v2 = (unsigned short)base->f0c;
                    switch (v2) {
                    case 0:
                        if (((S_c8c053d84Data *)t1)->f30a != 0) {
                            if (((S_c8c053d84Data *)t1)->f30a == 1) {
                                goto L_8c257c4e;
                            }
                            ((S_c8c053d84Data *)t1)->f30a = 0;
                        }
                        v5 = (int)((S_c8c053d84Data *)t1)->f358;
                        if (!(v5 > base->f0e)) {
                            goto L_8c257c4e;
                        }
                        ((S_c8c053d84Data *)t1)->f358 = base->f0e;
                        break;
                    case 1:
                        if (((S_c8c053d84Data *)t1)->f30a != 1) {
                            ((S_c8c053d84Data *)t1)->f30a = 1;
                            operation_8c05428c((void *)t1, 0, 1);
                        }
                    }
L_8c257c4e:;
                    (&frame)->f04 = ((S_c8c053d84Data *)t1)->f30a;
                    t1->v5(&(&frame)->f04, 0);
                } else {
                    v12 = (int)g_8c46ed0c;
                    v13 = (S_vv13 *)v12;
                    v13 = (S_vv13 *)((int)v13 + (base->f08 << 2));
                    *(SBlock4 *)&(&frame)->f00 = *(SBlock4 *)&v13->f00;
                    *(short *)&(&frame)->f00 = base->f04;
                    if (!((short)base->f08 > 0xb9f)) {
                        *(SBlock4 *)&*(char *)((char *)((char *)v12 + 0x0) + ((short)base->f08 << 2)) = *(SBlock4 *)&(&frame)->f00;
                    }
                }
L_8c257c96:;
                if (base->f12 == 1) {
                    v22 = (unsigned short)base->f10;
                    if ((unsigned int)0x100 > (unsigned int)(unsigned short)v22 && 0x12 > base->f13) {
                        operation_03cf64((unsigned short)v22, (int)(base->f13));
                    }
                }
            }
        }
    }
}
