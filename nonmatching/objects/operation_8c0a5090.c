/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a5090
 * function: operation_8c0a5090
 * language: c
 * reference size: 652 bytes
 * compiled size: 652 bytes (+0.0%)
 * differing lines: 44 of 287 reference instruction lines
 * differing bytes: 174
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
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct S_L8c5755dc S_L8c5755dc;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_8c Arg0_8c;
typedef struct Arg0_94 Arg0_94;
typedef struct Arg0_98 Arg0_98;
typedef struct Block_p0_40 {
    float f00;
    float f04;
    float f08;
} Block_p0_40;
struct Object {
    char unknown0[0x40];
    Block_p0_40 f40;
    char unknown4c[0xc];
    int f58;
    char unknown5c[0x14];
    float f70;
    float f74;
    float f78;
    char unknown7c[0x10];
    Arg0_8c *f8c;
    char unknown90[0x4];
    Arg0_94 *f94;
    Arg0_98 *f98;
    char unknown9c[0x2];
    unsigned short f9e;
    float fa0;
    float fa4;
};
struct Arg0_94 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_98 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    Vector3 f18;
};
extern int g_8c46f0c4;
extern S_L8c5755dc g_8c5755dc;
extern char g_8c46ee84[];
extern char gc_8c5755dc[];
extern void call_8c3bec0c(void *, Arg0_94 *, float);
extern void call_8c388a48(Arg0_94 *, float);
extern void call_8c388f94(void *, int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
void operation_8c0a5090(Object *o)
{
    Frame frame;
    int v1;
    int v4;
    float v3;
    float v7;
    int v20;
    v1 = (int)g_8c46f0c4;
    if (v1 != 0) {
        o->f58 = (int)(v1);
    }
    if (o->f94 == 0 || o->f98 == 0) {
        return;
    }
    call_8c3bec0c((void *)((void *)g_8c46ee84), (Arg0_94 *)(o->f94), o->fa0);
    o->fa0 += o->fa4;
    v3 = (float)o->fa0;
    v4 = (int)(o->f94->f04 + -1);
    v7 = (float)(float)(unsigned int)v4;
    if (v3 > v7 || 5000.0f <= v3) {
        if (((o->f98->f04 & 0x20)) != 0) {
            o->fa0 = 0.0f;
        } else {
            o->fa0 = (float)(unsigned int)v4;
            o->f9e = (o->f9e & 0xffff) | 1;
        }
    } else {
    }
    v20 = (int)o->f98->f04;
    if (((v20 & 4)) != 0) {
        call_8c388a48((Arg0_94 *)(o->f94), o->fa0);
        call_8c388f94((void *)(&(&frame)->f18), 1);
        *(Vector3 *)&o->f40 = *(Vector3 *)&(&frame)->f18;
        *(float *)(g_8c46ee84 + 0xc) = *(float *)(gc_8c5755dc + 0xc);
        *(float *)(g_8c46ee84 + 0x10) = *(float *)(gc_8c5755dc + 0x10);
        *(float *)(g_8c46ee84 + 0x14) = *(float *)(gc_8c5755dc + 0x14);
    } else {
        if (((v20 & 0x40)) != 0) {
            (&frame)->f0c = *(float *)(gc_8c5755dc + 0x0);
            (&frame)->f10 = *(float *)(gc_8c5755dc + 0x4);
            (&frame)->f14 = *(float *)(gc_8c5755dc + 0x8);
            (&frame)->f00 = *(float *)(gc_8c5755dc + 0xc);
            (&frame)->f04 = *(float *)(gc_8c5755dc + 0x10);
            (&frame)->f08 = *(float *)(gc_8c5755dc + 0x14);
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, (void *)(o->f8c));
            call_8c3be280(0, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f0c));
            call_8c3be280(0, (void *)(&frame), (void *)(&frame));
            njPopMatrix_8c38accc(1);
            o->f40.f00 = (&frame)->f0c + o->f70;
            o->f40.f04 = (&frame)->f10 + o->f74;
            o->f40.f08 = (&frame)->f14 + o->f78;
            *(float *)(g_8c46ee84 + 0xc) = (&frame)->f00;
            *(float *)(g_8c46ee84 + 0x10) = (&frame)->f04;
            *(float *)(g_8c46ee84 + 0x14) = (&frame)->f08;
        } else {
            o->f40.f00 = o->f70;
            o->f40.f04 = o->f74;
            o->f40.f08 = o->f78;
        }
    }
    *(Vector3 *)(g_8c46ee84 + 0x28) = *(Vector3 *)(gc_8c5755dc + 0x28);
    *(Vector3 *)(g_8c46ee84 + 0x34) = *(Vector3 *)(gc_8c5755dc + 0x34);
}
