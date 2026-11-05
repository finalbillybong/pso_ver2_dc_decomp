/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e1120
 * function: operation_8c1e1120
 * language: c
 * reference size: 400 bytes
 * compiled size: 404 bytes (+1.0%)
 * differing lines: 76 of 177 reference instruction lines
 * differing bytes: 199
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
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
typedef struct Arg0_74 Arg0_74;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_8c Arg0_8c;
typedef struct Arg0_90 Arg0_90;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    unsigned short f6a;
    char unknown6c[0x8];
    Arg0_74 *f74;
    Arg0_78 *f78;
    char unknown7c[0x8];
    int f84;
    char unknown88[0x4];
    Arg0_8c *f8c;
    Arg0_90 *f90;
    char unknown94[0x8];
    int f9c;
};
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
    char unknown18[0x18];
    int f30;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
};
extern void operation_8c04b3b8(int);
extern void call_8c1e12b0(Object *, Arg1 *, void *, void *, void *);
extern void call_8c1e13b8(Object *, Arg1 *, void *);
extern void operation_8c04b418(int);
extern void sq_header_8c38af22(int, int);
extern void call_8c04b3e4(void);
extern void operation_8c1e1524(Object *, Arg1 *, Frame *);
void operation_8c1e1120(Object *o, Arg1 *a1)
{
    Frame frame;
    int v13;
    int v4;
    int v1;
    int v3;
    v1 = (int)1;
    if (((o->f6a & 2)) != 0 && !(a1->f30 >= 0)) {
        return;
    }
    (&frame)->f08 = a1->f10;
    (&frame)->f0c = a1->f14;
    operation_8c04b3b8(0);
    call_8c1e12b0(o, a1, (void *)(&(&frame)->f08), (void *)(o->f74), (void *)(o->f78));
    if (((o->f68 & 2)) != 0) {
        if (((o->f68 & 4)) != 0) {
            call_8c1e13b8(o, a1, (void *)(&(&frame)->f08));
            v3 = (int)0;
            goto L_8c1e1222;
        }
        operation_8c04b418(2);
        sq_header_8c38af22(0, -1);
        call_8c1e12b0(o, a1, (void *)(&(&frame)->f08), (void *)(o->f8c), (void *)(o->f90));
        (&frame)->f00 = (&frame)->f08;
        (&frame)->f04 = (&frame)->f0c;
        v4 = (int)((int)o->f9c - (int)o->f90);
        v3 = (int)v1;
        if (v4 == 0) {
            goto L_8c1e1222;
        }
        call_8c1e12b0(o, a1, (void *)(&(&frame)->f08), (void *)(&*(int *)((char *)((char *)o->f8c + 0x0) + ((int)(o->f90) << 1))), (void *)v4);
    } else {
        (&frame)->f00 = (&frame)->f08;
        (&frame)->f04 = (&frame)->f0c;
    }
    v3 = (int)v1;
L_8c1e1222:;
    v13 = (int)((int)o->f84 - (int)o->f78);
    if (v13 != 0) {
        operation_8c04b418(0);
        sq_header_8c38af22(0, -1);
        call_8c1e12b0(o, a1, (void *)(&(&frame)->f08), (void *)(&*(int *)((char *)((char *)o->f74 + 0x0) + ((int)(o->f78) << 1))), (void *)v13);
    }
    call_8c04b3e4();
    if (v3 != 0) {
        operation_8c1e1524(o, a1, (Frame *)((&frame)));
    }
}
