/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c132924
 * function: TODoorCave01_v16_8c132924
 * language: c
 * reference size: 564 bytes
 * compiled size: 560 bytes (-0.7%)
 * differing lines: 58 of 251 reference instruction lines
 * differing bytes: 405
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
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct S_g8c46ed0c_0 S_g8c46ed0c_0;
typedef struct Object Object;
typedef struct Arg0_84 Arg0_84;
typedef struct S_x27696 S_x27696;
typedef struct S_x69360 S_x69360;
struct Object {
    char unknown0[0x84];
    Arg0_84 *f84;
    char unknown88[0x7c];
    int f104;
    int f108;
    int f10c;
};
struct S_x27696 {
    int f00;
};
struct S_x69360 {
    int f00;
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
extern void operation_8c0ef1cc(void *);
extern int operation_03d080(unsigned short);
extern void operation_8c132d00(void *, void *);
void TODoorCave01_v16_8c132924(Object *o)
{
    Frame frame;
    int v2;
    int v1;
    int v4;
    int v3;
    char *v5;
    int v15;
    int v28;
    int v29;
    int v31;
    int v30;
    int v33;
    int v32;
    char *v34;
    int v44;
    int v57;
    int v58;
    int v64;
    int t1;
    int t2;
    if (o->f104 != 1) {
        if (o->f104 == 2) {
            goto L_8c132960;
        }
        if (o->f104 == 3) {
            goto L_8c1329f6;
        }
    } else {
        operation_8c0ef1cc((void *)o);
        o->f108 |= 0xf0001;
        o->f10c = 4;
        return;
L_8c132960:;
        v1 = (int)0x110;
        *(int *)((char *)o + 0x108) &= -0xf0001;
        v2 = (int)0x10c;
        *(int *)((char *)((char *)o + 0x0) + (v2)) = 4 - (int)*(int *)((char *)((char *)o + 0x0) + (v1));
        v3 = (int)0x100;
        v4 = (int)0;
        v15 = (int)v4;
        goto L_8c1329a0;
        v5 = (char *)v4;
L_8c132984:;
        t1 = operation_03d080((unsigned short)((int)*(int *)((char *)((char *)o + 0x0) + (v3)) + v5));
        if ((unsigned char)t1 == 1) {
            ((S_x27696 *)((int)o + v2))->f00 += 1;
        }
        v15 = (int)(v5 + 1);
L_8c1329a0:;
        v5 = (char *)v15;
        if (*(int *)((char *)((char *)o + 0x0) + (v1)) > v15) {
            goto L_8c132984;
        }
        v29 = (int)0;
        goto L_8c1329c6;
        v28 = (int)0;
L_8c1329b6:;
        *(int *)((char *)o + 0x108) |= 1 << v28 + 0x10;
        v29 = (int)(v28 + 1);
L_8c1329c6:;
        v28 = (int)v29;
        if (o->f10c > v29) {
            goto L_8c1329b6;
        }
        if (o->f10c == 4) {
            operation_8c0ef1cc((void *)o);
            o->f108 |= 1;
            return;
        }
        o->f108 = (unsigned int)o->f108 >> 1 << 1;
        return;
L_8c1329f6:;
        if (((o->f108 & 1)) != 0) {
            o->f108 |= 0xf0000;
            return;
        }
        o->f108 &= -0xf0001;
        v30 = (int)0x110;
        v31 = (int)0x10c;
        *(int *)((char *)((char *)o + 0x0) + (v31)) = 4 - (int)*(int *)((char *)((char *)o + 0x0) + (v30));
        v32 = (int)0x100;
        v33 = (int)0;
        v44 = (int)v33;
        goto L_8c132a48;
        v34 = (char *)v33;
L_8c132a2c:;
        t2 = operation_03d080((unsigned short)((int)*(int *)((char *)((char *)o + 0x0) + (v32)) + v34));
        if ((unsigned char)t2 == 1) {
            ((S_x69360 *)((int)o + v31))->f00 += 1;
        }
        v44 = (int)(v34 + 1);
L_8c132a48:;
        v34 = (char *)v44;
        if (*(int *)((char *)((char *)o + 0x0) + (v30)) > v44) {
            goto L_8c132a2c;
        }
        v58 = (int)0;
        goto L_8c132a6e;
        v57 = (int)0;
L_8c132a5e:;
        *(int *)((char *)o + 0x108) |= 1 << v57 + 0x10;
        v58 = (int)(v57 + 1);
L_8c132a6e:;
        v57 = (int)v58;
        if (o->f10c > v58) {
            goto L_8c132a5e;
        }
        if (o->f10c != 4) {
            return;
        }
        operation_8c0ef1cc((void *)o);
        o->f108 |= 1;
        if (o->f84 == 0) {
            return;
        }
        if (o->f84 == 0) {
            v64 = (int)0;
        } else {
            if (o->f84->f04 < 0 || o->f84->f04 > 0xb9f) {
                v64 = (int)0;
                goto L_8c132ac6;
            }
            *(SBlock4 *)&(&frame)->f00 = *(SBlock4 *)&((S_g8c46ed0c_0 *)(&*(int *)((char *)((char *)g_8c46ed0c + 0x0) + (o->f84->f04 << 2))))->f00;
            v64 = (int)1;
        }
L_8c132ac6:;
        if (v64 == 0) {
            return;
        }
        *(short *)&(&frame)->f00 = 1;
        operation_8c132d00((void *)o, (void *)(&frame));
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
    o->f108 &= -0xf0002;
}
