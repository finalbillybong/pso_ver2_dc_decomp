/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c14dc
 * function: operation_8c0c14dc
 * language: c
 * reference size: 644 bytes
 * compiled size: 644 bytes (+0.0%)
 * differing lines: 2 of 257 reference instruction lines
 * differing bytes: 2
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb4];
    int fec;
    short ff0;
    char unknownf2[0xc4];
    volatile unsigned short f1b6;
    char unknown1b8[0x152];
    short f30a;
    char unknown30c[0xc];
    float f318;
    char unknown31c[0x4];
    float f320;
    Vector3 f324;
    short f330;
    char unknown332[0x22];
    short f354;
    char unknown356[0x4];
    short f35a;
    char unknown35c[0x34];
    int f390;
    int f394;
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
};
struct Frame {
    Block_frame_0 f00;
};
extern void create_effect_777c(void *, int);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void operation_8c01c5f0(Object *);
extern int query_capped_segment(void *, void *);
extern void apply_object_velocity(void *);
extern void operation_8c04a43c(void *, float, void *);
extern void refresh_follow_effect_8c052180(void *);
extern int call_8c18e768(int, int);
extern int lookup_object_by_id(unsigned short);
extern float distance_xz(void *, void *);
void operation_8c0c14dc(Object *o)
{
    int v11;
    int pm4;
    int v1;
    int v10;
    int v26;
    int t2;
    Frame frame;
    short v9;
    int pm7;
    int pm6;
    int pm1;
    char *pm8;
    pm4 = o->f398;
    switch (pm4) {
        case 0:
        o->f34 &= -0x200001;
        pm7 = 0x1000000 & o->f34;
        if (0 != ((pm7))) {
            v1 = (int)0xa;
        } else {
            v1 = (int)3;
        }
        o->ff0 = v1;
        create_effect_777c((void *)(&o->f324), 0xf2);
        pm8 = 0x3c + (char *)o;
        play_se_8c05fbf8(0x30022, (void *)((pm8)), 0, 0);
        o->f398 = 1;
        case 1:
        operation_8c01c5f0(o);
        v1 = o->f34;
        pm7 = 0x1000000 & v1;
        pm4 = pm7;
        if (0 == ((pm4))) {
            float pm5;
            *(Vector3 *)(&(&frame)->f00) = *(Vector3 *)(&o->f324);
            (&frame)->f00.f00 = o->f318 + (&frame)->f00.f00;
            pm5 = o->f320 + (&frame)->f00.f08;
            (&frame)->f00.f08 = pm5;
            pm1 = query_capped_segment((void *)o, (void *)(&frame));
            pm4 = pm1;
            if (0 == pm4) {
                apply_object_velocity((void *)o);
            } else {
                o->f320 = 0.0f;
                o->f318 = 0.0f;
            }
            o->f318 *= 0.5f;
            o->f320 = 0.5f * o->f320;
        }
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        refresh_follow_effect_8c052180((void *)o);
        if (!(o->fec != 8)) {
            return;
        }
        o->f398 = -1;
        return;
        case -1:
        o->f34 = o->f34 & -0x201;
        v11 = 0;
        {
            int *pf1 = (int *)((char *)o + 0x3a4);
            *pf1 = (int)(((unsigned int)*pf1 >> 1) << 1);
        }
        o->f394 = 1;
        v10 = o->f35a;
        v26 = 0x330;
        t2 = call_8c18e768(v10, 4);
        if (v10 - *(short *)((char *)o + v26) > t2) {
            if ((2 & o->f34) == 0) {
                int t3;
                t3 = lookup_object_by_id(o->f1b6);
                if (t3 != 0) {
                    v11 = 1;
                    if ((0x1000000 & o->f34) != 0) {
                        if (distance_xz((char *)o + 0x3c, (void *)(t3 + 0x3c)) > 400.0f) {
                            v11 = 0;
                        }
                    }
                }
            }
        }
        if (v11 == 1) {
            o->f354 = (short)(o->f1b6 & 0xffff);
            o->f390 = 0xa;
        } else {
            pm6 = o->f34;
            pm4 = 0x1000000 & pm6;
            t2 = pm4;
            if (0 != ((t2))) {
                if ((((o->f3a4 & 1)) == 0)) {
                    int v21;
                    v21 = (int)(int)o->f30a;
                    if (!(0xb == v21)) {
                        o->f39c = (v21);
                        o->f390 = 0xb;
                    }
                }
                o->f394 = (o->f39c);
            } else {
                if (0 == ((1 & o->f3a4))) {
                    v9 = o->f30a;
                    v26 = (short)v9;
                    if (v26 != 0) {
                        o->f39c = (int)(v26);
                        o->f390 = 0;
                    }
                }
            }
        }
        o->f35a = o->f330;
    }
}
