/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c244730
 * function: operation_8c244730
 * language: c
 * reference size: 288 bytes
 * compiled size: 288 bytes (+0.0%)
 * differing lines: 84 of 124 reference instruction lines
 * differing bytes: 186
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_184 S_c8c021ef8_184;
typedef struct S_c8c021ef8_s6dc S_c8c021ef8_s6dc;
typedef struct S_c8c021ef8_s734 S_c8c021ef8_s734;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
struct S_c8c021ef8 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x14c];
    S_c8c021ef8_184 *f184;
    char unknown188[0x554];
    int f6dc;
    char unknown6e0[0x50];
    float f730;
};
struct S_c8c021ef8_184 {
    char unknown0[0x20];
    int f20;
};
struct S_c8c021ef8_s6dc {
    char unknown0[0x8];
    float f08;
    char unknownc[0xc];
    float f18;
    char unknown1c[0xc];
    float f28;
    char unknown2c[0xc];
    float f38;
    char unknown3c[0xc];
    Vector3 f48;
    Vector3 f54;
};
struct S_c8c021ef8_s734 {
    char unknown0[0x14];
    int f14;
};
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
    char f04;
    char unknown5[0x2];
    char f07;
    int f08;
    int f0c;
    char unknown10[0x8];
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_239258(void *);
extern void operation_8c0368a8(void *);
void operation_8c244730(void)
{
    Frame frame;
    S_c8c021ef8_s6dc *p;
    int v3;
    int v9;
    int v8;
    S_c8c021ef8 *t1;
    S_c8c021ef8 *t2;
    int t3;
    int t4;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        if (t2 == 0) {
            v3 = (int)0;
        } else {
            p = (S_c8c021ef8_s6dc *)((char *)t2 + 0x6dc);
            v3 = (int)((float)t2->f184->f20 * p->f54.x + ((float)(int)p->f38 - (float)(int)p->f28 + (float)(int)p->f08 - (float)(int)p->f18));
            ((S_c8c021ef8_s734 *)((char *)t2 + 0x734))->f14 = v3;
        }
        (&frame)->f00 = 0x7d;
        (&frame)->f01 = 6;
        (&frame)->f04 = 3;
        (&frame)->f08 = t1->f20;
        (&frame)->f0c = (int)(v3);
        v8 = (int)1;
        if (((t1->f34 & 0x800)) != 0) {
            t3 = operation_239258((void *)((void *)0x8c41ce5c));
            if ((unsigned char)t3 == 1) {
                v9 = (int)0;
                v8 = (int)v9;
            } else {
                t4 = operation_239258((void *)((void *)0x8c41ce5c));
                if ((unsigned char)t4 == 2 && t1->f6dc == 0) {
                    v8 = (int)0;
                }
            }
        }
        *(int *)((char *)0x8c510cd0 + (*(int *)0x8c418248 << 2)) = (int)(v8);
        (&frame)->f07 = v8;
        operation_8c0368a8((void *)(&frame));
    }
}
