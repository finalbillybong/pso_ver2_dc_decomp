/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c135e20
 * function: TODoorAncient09_v16_8c135e20
 * language: c
 * reference size: 356 bytes
 * compiled size: 356 bytes (+0.0%)
 * differing lines: 4 of 155 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TODoorAncient09.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct S_g8c46ed0c_0 S_g8c46ed0c_0;
typedef struct Object Object;
typedef struct Arg0_100 Arg0_100;
typedef struct Arg0_84 Arg0_84;
struct Object {
    char unknown0[0x84];
    Arg0_84 *f84;
    char unknown88[0x78];
    Arg0_100 *f100;
    int f104;
    int f108;
    unsigned short f10c;
    char unknown10e[0x2];
    int f110;
};
struct Arg0_84 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    char f00;
    char unknown1[0x3];
};
struct S_g8c46ed0c_0 {
    char f00;
};
extern S_g8c46ed0c *g_8c46ed0c;
extern void operation_8c135f84(void *);
extern int operation_03d080(unsigned short);
extern void operation_8c1360ec(void *, void *);
void TODoorAncient09_v16_8c135e20(Object *o)
{
    Frame frame;
    int v8;
    int t1;
    int t2;
    int t3;
    int t4;
    if (o->f104 != 1) {
        if (o->f104 == 2) {
            goto L_8c135e52;
        }
        if (o->f104 == 3) {
            goto L_8c135ea0;
        }
    } else {
        operation_8c135f84((void *)o);
        o->f108 |= 1;
        return;
L_8c135e52:;
        t1 = operation_03d080((unsigned short)(o->f100));
        if ((unsigned char)t1 == 1) {
            t2 = operation_03d080((unsigned short)(o->f10c));
            if ((unsigned char)t2 == 1) {
                operation_8c135f84((void *)o);
                o->f108 |= 1;
                o->f110 = 1;
                return;
            }
        }
        o->f108 = (unsigned int)o->f108 >> 1 << 1;
        o->f110 = 0;
        return;
L_8c135ea0:;
        t3 = operation_03d080((unsigned short)(o->f100));
        if ((unsigned char)t3 != 1) {
            return;
        }
        t4 = operation_03d080((unsigned short)(o->f10c));
        if ((unsigned char)t4 != 1) {
            return;
        }
        operation_8c135f84((void *)o);
        o->f108 |= 1;
        if (o->f84 == 0) {
            return;
        }
        if (o->f84 == 0) {
            v8 = (int)0;
        } else {
            if (o->f84->f04 < 0 || o->f84->f04 > 0xb9f) {
                v8 = (int)0;
                goto L_8c135f0a;
            }
            *(SBlock4 *)&(&frame)->f00 = *(SBlock4 *)&((S_g8c46ed0c_0 *)(&*(int *)((char *)((char *)g_8c46ed0c + 0x0) + (o->f84->f04 << 2))))->f00;
            v8 = (int)1;
        }
L_8c135f0a:;
        if (v8 == 0) {
            return;
        }
        *(short *)&(&frame)->f00 = 1;
        operation_8c1360ec((void *)o, (void *)(&frame));
        if (o->f84 == 0) {
            return;
        }
        if (!(o->f84->f04 >= 0)) {
            return;
        }
        if (o->f84->f04 > 0xb9f) {
            return;
        }
        *(SBlock4 *)&*(char *)((char *)((char *)g_8c46ed0c + 0x0) + (o->f84->f04 << 2)) = *(SBlock4 *)&(&frame)->f00;
        return;
    }
    o->f108 = (unsigned int)o->f108 >> 1 << 1;
}
