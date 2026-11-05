/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c3a8c
 * function: operation_8c0c3a8c
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 10 of 85 reference instruction lines
 * differing bytes: 5
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
typedef struct Arg3 Arg3;
typedef struct Arg4 Arg4;
typedef struct Arg5 Arg5;
typedef struct S_vv8 S_vv8;
typedef struct S_x31728 S_x31728;
struct Arg3 {
    int f00;
};
struct Arg4 {
    S_vv8 *f00;
};
struct S_x31728 {
    int f00;
};
struct S_vv8 {
    int f00;
};
struct Arg5 {
    float f00;
};
void operation_8c0c3a8c(Object *o, int a1, int a2, Arg3 *a3, Arg4 *a4, register Arg5 *a5, float f0)
{
    int d;
    unsigned int pm6;
    int pm1;
    unsigned int mid;
    int hi;
    int v9;
    S_vv8 *p2;
    int *p1;
    unsigned int lo;
    register unsigned int one;
    int *pm9;
    int pm2;
    int *pm3;
    hi = a2;
    pm1 = 0;
    lo = (unsigned int)pm1;
    one = (unsigned int)1;
    while ((hi - lo) > one) {
        pm6 = lo + hi >> 1;
        mid = pm6;
        if (((unsigned int)f0 >= (*(unsigned int *)((char *)o + mid * a1)))) {
            lo = mid;
        } else {
            hi = (int)mid;
        }
    }
    hi = -1 + a2;
    one = (unsigned int)(hi);
    pm2 = (int)o;
    pm6 = lo * a1;
    a2 = pm2;
    pm3 = (int *)(pm6 + a2);
    pm9 = pm3;
    if ((lo < one)) {
        mid = lo + 1;
        pm1 = (int)o;
        pm6 = pm1 + ((mid) * a1);
        p2 = (S_vv8 *)(pm6);
    } else {
        p2 = (S_vv8 *)o;
    }
    p1 = pm9;
    a3->f00 = (int)p1;
    a4->f00 = p2;
    pm2 = *p1;
    v9 = pm2;
    d = p2->f00 - v9;
    if (d > 0) {
        mid = (unsigned int)v9;
        lo = mid;
        one = lo;
        a5->f00 = (f0 - (float)one) / (float)d;
        return;
    }
    a5->f00 = f0 - (float)(unsigned int)v9;
}
