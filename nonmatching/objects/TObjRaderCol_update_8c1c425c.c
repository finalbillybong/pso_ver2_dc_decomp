/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c425c
 * function: TObjRaderCol_update_8c1c425c
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 2 of 71 reference instruction lines
 * differing bytes: 76
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
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_98 Arg0_98;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x8e];
    float f94;
    Arg0_98 *f98;
    int f9c;
    int fa0;
};
extern S_g8c418248 *g_8c418248;
extern void call_8c102c8c(void *);
extern int lookup_low_id(int);
extern int object_blocked(void *);
extern float squared_distance_xyz(void *, void *);
extern void call_8c102c1c(void *);
void TObjRaderCol_update_8c1c425c(Object *o)
{
    int t2;
    int t1;
    int pm5;
    void *pm7;
    Arg0_98 *pm12;
    short pm4;
    int pm8;
    void *pm9;
    float v61;
    int pm10;
    void *pm11;
    unsigned short pm13;
    switch (o->f9c) {
        case 0:
        pm11 = (void *)(o->f98);
        pm9 = pm11;
        call_8c102c8c(pm9);
        o->f9c += 1;
        return;
        case 1:
        pm8 = lookup_low_id((int)g_8c418248);
        pm5 = pm8;
        t1 = pm5;
        if (!(0 == t1)) {
            void *pm14;
            pm14 = (void *)t1;
            t2 = object_blocked(pm14);
            switch (t2) {
                case 0:
                pm8 = o->fa0;
                pm13 = 3;
                pm10 = pm13;
                if (pm10 < pm8) {
                    o->fa0 -= 1;
                    return;
                }
                if (t1 != 0) {
                    float t3;
                    void *pm6;
                    pm5 = (t1 + 0x3c);
                    pm7 = (void *)(pm5);
                    pm6 = (void *)(((char *)o + 0x3c));
                    t3 = squared_distance_xyz(pm7, pm6);
                    v61 = o->f94;
                    if (t3 < (v61 * v61)) {
                        pm12 = o->f98;
                        pm9 = (void *)(pm12);
                        pm7 = pm9;
                        call_8c102c1c(pm7);
                        o->f04 |= 1;
                    }
                }
            }
        }
    }
}
