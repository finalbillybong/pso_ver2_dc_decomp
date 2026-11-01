/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a6190
 * function: operation_8c0a6190
 * language: c
 * reference size: 500 bytes
 * compiled size: 500 bytes (+0.0%)
 * differing lines: 52 of 214 reference instruction lines
 * differing bytes: 310
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
typedef struct Frame Frame;
typedef struct S_g8c303298 S_g8c303298;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_58 Arg0_58;
typedef struct S_x33552 S_x33552;
typedef struct S_x33936 S_x33936;
typedef struct S_x34416 S_x34416;
typedef struct S_x34512 S_x34512;
typedef struct S_x97440 S_x97440;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x34];
    Arg0_34 *f34;
    char unknown38[0x8];
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    Arg0_58 *f58;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    int f64;
};
struct S_x97440 {
    float f00;
};
struct S_x33936 {
    float f00;
};
struct S_x34416 {
    float f00;
};
struct S_x33552 {
    float f00;
};
struct S_x34512 {
    float f00;
};
extern S_g8c303298 *g_8c303298;
extern Vector3 g_8c303bc8;
extern S_g8c418248 *g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
extern int get_current_area_8c032b10(void);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, Frame *, Frame *);
extern void njPopMatrix_8c38accc(int);
extern void call_8c3c0770(void *, float, float);
extern void set_1c_8c37e76c(void *, void *);
extern void call_8c382a24(void *, float, float, float);
extern void call_8c37e4c0(void *);
void operation_8c0a6190(Object *o)
{
    Frame frame;
    int v1;
    S_c8c021ef8 *t1;
    int t2;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c303bc8;
    t1 = lookup_low_id((int)g_8c418248);
    t2 = get_current_area_8c032b10();
    if (t1 != 0) {
        o->f34 = (Arg0_34 *)(t1->f64 + 0x8000);
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, (void *)(o->f34));
        call_8c3be280(0, (Frame *)((&frame)), (Frame *)((&frame)));
        njPopMatrix_8c38accc(1);
        o->f4c = t1->f3c;
        o->f50 = t1->f40 + 19.8f + 25.43f;
        o->f54 = t1->f44;
        o->f40 = o->f4c + (&frame)->f00.f00;
        o->f44 = o->f50 + (&frame)->f00.f04;
        o->f48 = o->f54 + (&frame)->f00.f08;
    } else {
        v1 = (int)(t2 * 0x1c);
        o->f34 = (Arg0_34 *)*(int *)((char *)((char *)g_8c303298 + 0xc) + (v1));
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, (void *)(o->f34));
        call_8c3be280(0, (Frame *)((&frame)), (Frame *)((&frame)));
        njPopMatrix_8c38accc(1);
        o->f40 = ((S_x97440 *)((int)g_8c303298 + v1))->f00;
        o->f44 = ((S_x33936 *)((int)g_8c303298 + 4 + v1))->f00;
        o->f48 = ((S_x34416 *)((int)g_8c303298 + 8 + v1))->f00;
        o->f4c = o->f40 + (&frame)->f00.f00;
        o->f50 = o->f44 + (&frame)->f00.f04;
        o->f54 = o->f48 + (&frame)->f00.f08;
    }
    o->f58 = (Arg0_58 *)*(int *)((char *)((char *)g_8c303298 + 0x10) + (t2 * 0x1c));
    call_8c3c0770((void *)((void *)&g_8c303298), ((S_x33552 *)((int)g_8c303298 + 0x14 + t2 * 0x1c))->f00, ((S_x34512 *)((int)g_8c303298 + 0x18 + t2 * 0x1c))->f00);
    set_1c_8c37e76c((void *)((void *)0x8c46ee84), (void *)(o->f58));
    call_8c382a24((void *)((void *)0x8c46ee84), o->f40, o->f44, o->f48);
    call_8c37e4c0((void *)((void *)0x8c46ee84));
}
