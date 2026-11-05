/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1224c8
 * function: operation_8c1224c8
 * language: c
 * reference size: 220 bytes
 * compiled size: 220 bytes (+0.0%)
 * differing lines: 98 of 106 reference instruction lines
 * differing bytes: 61
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
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv15 S_vv15;
typedef struct S_vv7 S_vv7;
struct Object {
    int tag;
    char unknown4[0x10];
    int f14;
};
struct S_vv7 {
    float f00;
};
struct S_vv15 {
    float f00;
};
void operation_8c1224c8(Object *o, Arg1 *a1)
{
    int v1;
    unsigned int i;
    int j;
    int prev;
    int t;
    float cur;
    float val;
    float step;
    int k;
    S_vv15 *v15;
    char *vals;
    unsigned char *keys;
    v1 = o->tag;
    if ((v1 & 1) != 0) {
        prev = 0;
        val = 0.0f;
        cur = val;
        j = prev;
        vals = (char *)o + 0x18;
        keys = (unsigned char *)o + 0x38;
        for (i = 0; (unsigned int)o->f14 > i; i++) {
            val = *(float *)(vals + (i << 2));
            t = (unsigned char)keys[i];
            step = (val - cur) / (float)(t - prev);
            for (; t > j; j++) {
                *(float *)((char *)a1 + (0x7f - j << 2)) = cur;
                cur += step;
            }
            cur = val;
            prev = t;
        }
        for (; 0x80 > j; j++) {
            *(float *)((char *)a1 + (0x7f - j << 2)) = val;
        }
    } else if ((v1 & 2) != 0) {
        for (k = 0; 0x100 > k; k++) {
            *(float *)((char *)a1 + (k << 2)) = 0.0f;
        }
    } else if ((v1 & 4) != 0) {
        v15 = (S_vv15 *)((char *)o + 0x20);
        for (k = 0; 0x100 > k; k++) {
            *(float *)((char *)a1 + (k << 2)) = v15->f00;
        }
    }
}
