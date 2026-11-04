/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d9890
 * function: TObjCity_Season_FireWork_update_8c1d9890
 * language: c
 * reference size: 532 bytes
 * compiled size: 532 bytes (+0.0%)
 * differing lines: 28 of 220 reference instruction lines
 * differing bytes: 26
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjCity_Season_FireWork.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    float f24;
    char unknown28[0x4];
    int f2c;
    Arg0_30 *f30;
    float f34;
    int f38;
    int f3c;
    float f40;
};
struct S_vv6 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    int f00;
    int f04;
    int f08;
};
extern int create_effect_7708(void *, int, int);
extern void call_8c0a7608(void *, void *);
extern void create_effect(void *, int, int);
extern int rand(void);
extern void create_effect_7b30(void *, void *, int, int);
void TObjCity_Season_FireWork_update_8c1d9890(Object *o)
{
    Frame frame;
    S_vv6 *v6;
    float v52;
    int t1;
    int t2;
    int t3;
    int t4;
    switch (o->f2c) {
    case 0:
        if (o->f30 == 0) {
            t1 = create_effect_7708((void *)(((char *)o + 0x20)), 0x84, 0x40);
            o->f30 = (Arg0_30 *)t1;
        }
        if (o->f30 == 0) {
            return;
        }
        o->f40 += 4.0f;
        o->f24 += 4.0f;
        if (!(o->f40 < o->f34)) {
            o->f40 = 0.0f;
            o->f38 = 0;
            o->f2c = 1;
            v6 = (S_vv6 *)o->f30;
            v6->f04 |= 1;
            o->f30 = (Arg0_30 *)0;
            return;
        }
        call_8c0a7608((void *)(o->f30), (void *)(((char *)o + 0x20)));
        return;
    case 1:
        if (o->f38 == 0xa) {
            create_effect((void *)(((char *)o + 0x20)), 0x85, 0x40);
            create_effect((void *)(((char *)o + 0x20)), 0x86, 0x40);
        }
        o->f38 += 1;
        if (!(o->f38 >= 0xf)) {
            return;
        }
        t2 = rand();
        v52 = (float)((float)t2 / 32768.0f);
        o->f38 = 0;
        if (0.33f > v52) {
            o->f3c = 0x87;
            o->f2c = 2;
            return;
        }
        if (0.66f > v52) {
            o->f3c = 0x88;
            o->f2c = 2;
            return;
        }
        o->f2c = 3;
        return;
    case 2:
        if (o->f38 != 0) {
            if (o->f38 != 4) {
                if (o->f38 != 8) {
                    goto L_8c1d99b8;
                }
            }
        }
        create_effect((void *)(((char *)o + 0x20)), (int)(o->f3c), 0x40);
L_8c1d99b8:;
        o->f38 += 1;
        o->f24 -= 0.8f;
        if (!(o->f38 > 8)) {
            return;
        }
        o->f2c = 4;
        return;
    case 3:
        if (o->f38 != 0) {
            if (o->f38 != 4) {
                if (o->f38 != 8) {
                    goto L_8c1d9a2e;
                }
            }
        }
        (&frame)->f00 = 0;
        t3 = rand();
        (&frame)->f04 = (int)((float)t3 / 32768.0f * 65536.0f);
        t4 = rand();
        (&frame)->f08 = (int)((float)t4 / 32768.0f * 65536.0f);
        create_effect_7b30((void *)(((char *)o + 0x20)), (void *)(&frame), 0x89, 0x40);
L_8c1d9a2e:;
        o->f38 += 1;
        o->f24 -= 0.8f;
        if (!(o->f38 > 8)) {
            return;
        }
        o->f2c = 4;
        return;
    case 4:
        o->f04 |= 1;
        return;
    }
}
