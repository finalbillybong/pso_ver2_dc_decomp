/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c213d70
 * function: operation_8c213d70
 * language: c
 * reference size: 564 bytes
 * compiled size: 564 bytes (+0.0%)
 * differing lines: 32 of 214 reference instruction lines
 * differing bytes: 16
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_8c Arg0_8c;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x64];
    int f88;
    Arg0_8c *f8c;
    char unknown90[0x4];
    int f94;
    char unknown98[0xc];
    int fa4;
    char unknowna8[0x8];
    int fb0;
    int fb4;
    int fb8;
    char unknownbc[0x8];
    short fc4;
    short fc6;
    char unknownc8[0x10];
    int fd8;
    int fdc;
};
extern int g_8c5051e0;
extern int operation_8c215d3c(void *);
extern int dispatch_resource_selector(void *, int, int, int);
extern void call_8c215f04(void *, void *);
extern void refresh_resource_selection(void *);
extern int operation_8c20a7a4(int, int);
extern void play_se_8c05fbf8(int, int, int, int);
extern int lookup_entry_8c215d9c(void *);
extern int operation_8c210724(int);
extern void call_8c213438(Object *);
extern int poll_resource_selection(void *);
extern void transition_resource_selection_8c21420c(Object *);
extern void transition_resource_selection_8c2145c8(void *);
extern void call_8c212c9c(Object *);
static inline void reset_slots(Object *o)
{
    int i;
    int m;
    o->fc6 = 0;
    o->fc4 = 0;
    m = -1;
    for (i = 0; i < 8; i++) {
        *(short *)((char *)((char *)o + 0xc8) + (i << 1)) = m;
    }
    o->fd8 = 0;
    o->fdc = 0;
}
void operation_8c213d70(Object *o)
{
    int v1;
    int v6;
    int v49;
    int v10;
    int t7;
    char *v2;
    int v48;
    int v9;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int v11;
    v1 = (int)0;
    o->fc6 = 1;
    v2 = (char *)v1;
    switch (o->fb8) {
    case 0:
        t1 = operation_8c215d3c((void *)(*(Arg0_24 **)((char *)((char *)o + 0x24) + (o->f20 << 2))));
        t2 = dispatch_resource_selector((void *)o, (int)(o->fb0), (int)(o->f88), t1);
        if (t2 != (int)(o->f8c)) {
            o->f8c = (Arg0_8c *)t2;
            call_8c215f04((void *)(*(Arg0_28 **)((char *)((char *)o + 0x28) + (o->f20 << 2))), (void *)(o->f8c));
        }
        refresh_resource_selection((void *)o);
        t3 = operation_8c20a7a4((int)(&o->f20), 4);
        if (t3 != 0) {
            play_se_8c05fbf8(0x50001, 0, 0, 0);
            if (*(int *)((char *)((char *)o + 0x24) + (o->f20 << 2)) != 0) {
                t6 = lookup_entry_8c215d9c((void *)(*(Arg0_24 **)((char *)((char *)o + 0x24) + (o->f20 << 2))));
                v6 = (int)t6;
            } else {
                v6 = (int)-1;
            }
            t4 = operation_8c210724(v6);
            if (t4 != 7) {
                o->fb8 = 1;
                v9 = (int)1;
            } else {
                v9 = (int)0;
            }
            v10 = (int)(v9 == 0);
            v2 = (char *)v10;
            break;
        }
        v11 = (int)1;
        t5 = operation_8c20a7a4((int)(&o->f20), 2);
        if (t5 == 0) {
            if (((o->f94 & 2)) == 0) {
                v11 = (int)0;
            }
        }
        if (v11 == 0) {
            break;
        }
        play_se_8c05fbf8(0x50016, 0, 0, 0);
        o->fa4 = 0;
        call_8c213438(o);
        break;
    case 1:
        t7 = poll_resource_selection((void *)o);
        v2 = (char *)t7;
    }
    if (v2 != 0) {
        o->fa4 = 1;
        if ((int)(o->f8c) == -0x3c) {
            o->fb4 = 0x14;
        } else {
            switch (g_8c5051e0) {
            case 0:
                transition_resource_selection_8c21420c(o);
                reset_slots(o);
                o->fc6 = 3;
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            default:
                reset_slots(o);
                o->fc6 = 4;
                transition_resource_selection_8c2145c8((void *)o);
                break;
            }
        }
        call_8c212c9c(o);
    }
}
