/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18c484
 * function: operation_8c18c484
 * language: c
 * reference size: 508 bytes
 * compiled size: 508 bytes (+0.0%)
 * differing lines: 22 of 228 reference instruction lines
 * differing bytes: 44
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0xc];
    float f30;
    float f34;
    float f38;
    char unknown3c[0x8];
    float f44;
    float f48;
    float f4c;
    char f50;
    char f51;
};
extern void call_8c0a29a0(void);
extern void call_8c0a2858(void *);
void operation_8c18c484(Object *o)
{
    int v1;
    float v48;
    v1 = (int)o->f20;
    if (((v1 & 1)) == 0) {
        o->f50 -= 1;
        o->f51 -= 1;
        if (!(o->f50 >= 0)) {
            o->f50 = 0;
        }
        if (!(o->f51 >= 0)) {
            o->f51 = 0;
        }
        if (o->f50 != 0) {
            goto L_8c18c590;
        }
        if (o->f51 != 0) {
            goto L_8c18c590;
        }
        if (((o->f20 & 2)) == 0) {
            goto L_8c18c590;
        }
        o->f20 &= -3;
        call_8c0a29a0();
    } else {
        if (((v1 & 8)) != 0) {
            o->f50 += 1;
            o->f51 -= 1;
            if ((float)o->f50 > 6.0f) {
                o->f50 = 6;
            }
            if (o->f51 >= 0) {
                goto L_8c18c590;
            }
            o->f51 = 0;
        } else {
            o->f50 += 1;
            o->f51 += 1;
            if ((float)o->f50 > 3.0f) {
                o->f50 = 3;
            }
            if ((float)o->f51 > 3.0f) {
                o->f51 = 3;
            }
        }
    }
L_8c18c590:;
    o->f30 = (float)o->f50 * 26.666666f + 320.0f;
    o->f34 = 240.0f - (float)o->f51 * 37.3333321f;
    o->f38 = (float)o->f50 * 1.66666663f;
    {
        int b = o->f51;
        o->f44 = 15.0f - (float)b * 2.33333325f - 1.0f;
    }
    o->f48 = (640.0f - o->f30) / 320.0f;
    o->f4c = o->f34 / 240.0f;
    v48 = (float)o->f4c;
    if (v48 > o->f48) {
        o->f48 = v48;
    }
    o->f4c = o->f48 * 0.85f;
    if (((o->f20 & 2)) != 0) {
        call_8c0a2858((void *)(((char *)o + 0x24)));
    }
}
