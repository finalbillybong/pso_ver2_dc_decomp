/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05ef44
 * function: operation_8c05ef44
 * language: c
 * reference size: 484 bytes
 * compiled size: 480 bytes (-0.8%)
 * differing lines: 224 of 219 reference instruction lines
 * differing bytes: 418
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Elem {
    int f00;
    float f04;
    float f08;
    float f0c;
    char unknown10[0x18];
    char f28;
    char unknown29[0x3];
} Elem;
typedef struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    char unknown24[0x4];
    float f28;
    char unknown2c[0x4];
    float f30;
    int f34;
} Object;
extern int rand(void);
extern void call_8c05ee1c(Object *, int);
void operation_8c05ef44(Object *o)
{
    int i;
    int sc;
    int vx;
    int vy;
    int vz;
    float s;
    Elem *e;
    o->f20 += 1;
    if (o->f20 > 3) {
        call_8c05ee1c(o, (int)((float)rand() / 32768.0f * 3.0f));
        o->f20 = 0;
    }
    sc = 0xb28;
    vx = 0x8d0;
    vy = 0x8d4;
    vz = 0x8d8;
    for (i = 0; i < o->f34; i++) {
        s = *(float *)((char *)o + sc + (i << 2)) + 1.0f;
        e = (Elem *)((char *)o + i * 0x2c + 0x38);
        if (s > 150.0f) {
            o->f34 -= 1;
            *(Elem *)((char *)(int *)((char *)o + 0x38) + i * 0x2c) = *(Elem *)((char *)(int *)((char *)o + 0x38) + o->f34 * 0x2c);
            *(Vector3 *)((char *)o + vx + i * 0xc) = *(Vector3 *)((char *)o + vx + o->f34 * 0xc);
            *(float *)((char *)o + sc + (i << 2)) = *(float *)((char *)o + sc + (o->f34 << 2));
            i--;
        } else {
            *(float *)((char *)o + sc + (i << 2)) = s;
            if (s > 75.0f) {
                *(float *)((char *)o + vy + i * 0xc) += 0.01f;
                e->f04 = *(float *)((char *)o + vx + i * 0xc) * s + o->f28;
                e->f08 = *(float *)((char *)o + vy + i * 0xc) + e->f08;
                e->f0c = *(float *)((char *)o + vz + i * 0xc) * s + o->f30;
            } else {
                e->f04 = *(float *)((char *)o + vx + i * 0xc) * s + o->f28;
                e->f0c = *(float *)((char *)o + vz + i * 0xc) * s + o->f30;
            }
            if (15 > e->f28) {
                e->f28 += 1;
            } else {
                e->f28 = 0;
            }
        }
    }
    if (o->f34 == 0) {
        o->f04 |= 1;
    }
}
