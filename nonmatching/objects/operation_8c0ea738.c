/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ea738
 * function: operation_8c0ea738
 * language: c
 * reference size: 544 bytes
 * compiled size: 540 bytes (-0.7%)
 * differing lines: 252 of 241 reference instruction lines
 * differing bytes: 483
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x26];
    short f2c;
    char unknown2e[0x12];
    short f40;
    char unknown42[0xa];
    float f4c;
    float f50;
    float f54;
    float f58;
    char unknown5c[0x10];
    float f6c;
    float f70;
    float f74;
    float f78;
    char unknown7c[0x10];
    float f8c;
    float f90;
    float f94;
    float f98;
    char unknown9c[0x70];
    float f10c;
    float f110;
    float f114;
    float f118;
    int f11c;
    int f120;
};
extern void net_open_8c204010(void *);
extern void operation_8c0eabf4(void);
void operation_8c0ea738(Object *o)
{
    unsigned char v1;
    int v3;
    int v2;
    float v30;
    *(int *)((char *)o + 0x120) += 1;
    v1 = (unsigned char)*(unsigned char *)0x8c470364;
    switch (v1) {
    case 0:
        *(int *)((char *)o + 0x11c) += 0xc;
        v3 = (int)o->f11c;
        v2 = (int)0xff;
        if (!(v3 > v2)) {
            goto L_8c0ea8a4;
        }
        o->f11c = (int)(v2);
        break;
    case 1:
        v30 = (float)0.05f;
        o->f114 += v30;
        o->f118 -= v30;
        o->f4c = (o->f4c - o->f10c) * o->f114 + o->f10c;
        o->f50 = (o->f50 - o->f110) * o->f118 + o->f110;
        o->f54 = (o->f54 - o->f10c) * o->f114 + o->f10c;
        o->f58 = (o->f58 - o->f110) * o->f118 + o->f110;
        o->f6c = (o->f6c - o->f10c) * o->f114 + o->f10c;
        o->f70 = (o->f70 - o->f110) * o->f118 + o->f110;
        o->f74 = (o->f74 - o->f10c) * o->f114 + o->f10c;
        o->f78 = (o->f78 - o->f110) * o->f118 + o->f110;
        o->f8c = (o->f6c - o->f10c) * o->f114 + o->f10c;
        o->f90 = (o->f70 - o->f110) * o->f118 + o->f110;
        o->f94 = (o->f94 - o->f10c) * o->f114 + o->f10c;
        o->f98 = (o->f98 - o->f110) * o->f118 + o->f110;
        *(int *)((char *)o + 0x11c) -= 0xc;
        if (!(o->f11c >= 0)) {
            o->f11c = 0;
            o->f04 |= 1;
            return;
        }
    }
L_8c0ea8a4:;
    o->f40 = o->f2c;
    net_open_8c204010((void *)(((char *)o + 0x24)));
    if (o->f40 != o->f2c) {
        o->f120 = 0;
    }
    switch (o->f2c) {
    case 4:
        if (!((unsigned int)o->f120 > (unsigned int)0x3c)) {
            return;
        }
        operation_8c0eabf4();
        return;
    case 5:
    case 8:
        if ((unsigned int)o->f120 > (unsigned int)0x3c) {
            operation_8c0eabf4();
        }
    }
}
