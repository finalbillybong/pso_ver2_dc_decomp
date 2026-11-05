/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0353ec
 * function: operation_8c0353ec
 * language: c
 * reference size: 168 bytes
 * compiled size: 168 bytes (+0.0%)
 * differing lines: 16 of 78 reference instruction lines
 * differing bytes: 45
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv6 S_vv6;
typedef struct S_vv7 S_vv7;
struct Frame {
    char unknown0[0x19];
    char f19;
    char unknown1a[0x2];
};
struct S_vv1 {
    char f00;
};
struct Object {
    char tag;
};
struct S_vv6 {
    char f00;
};
struct S_vv7 {
    char f00;
};
extern void strncpy_8c12b154(void *, Object *, int);
extern int call_8c206b08(void *);
int operation_8c0353ec(Object *o)
{
    Frame frame;
    int v4;
    char *v7;
    char *v6;
    void *pm1;
    char *v1;
    char v8;
    signed char v2;
    int pm2;
    char *pm3;
    char *pm4;
    strncpy_8c12b154((void *)(((char *)(&frame) + 0xd)), o, 0xc);
    (&frame)->f19 = (char)0;
    v4 = 0;
    for (v1 = ((char *)(&frame) + 0xd); !((v2 = *v1) == 0); v1++) {
        if (!(0x20 == (int)v2)) {
            v4 = 1;
            break;
        }
    }
    if (v4 == 0) {
        o->tag = (char)0;
        return 0;
    }
    pm4 = (char *)(&frame);
    v1 = pm4;
    pm3 = v1 + 0xd;
    if (call_8c206b08((void *)((pm3))) != 0) {
        o->tag = 0;
        return 0;
    }
    pm1 = (void *)(&frame);
    v1 = (char *)(&frame);
    v7 = v1;
    for (v6 = (char *)(&frame) + 0xd; (v8 = *v6) != 0; v6 = 1 + v6) {
        v4 = (int)v8;
        if (0 != ((*(unsigned char *)(((unsigned char)v4) + (char *)0x8c285e40) & 7))) {
            *v7++ = (int)v8;
        }
    }
    *v7 = 0;
    if (!(call_8c206b08(pm1) == 0)) {
        o->tag = 0;
        return 0;
    }
    return 1;
}
