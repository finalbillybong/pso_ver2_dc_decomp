/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03d360
 * function: operation_8c03d360
 * language: c
 * reference size: 688 bytes
 * compiled size: 692 bytes (+0.6%)
 * differing lines: 360 of 297 reference instruction lines
 * differing bytes: 592
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, instruction or operand
 *   order; review found and fixed behaviour defects of the generator draft; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Rec {
    int f0;
    int f4;
    int f8;
    int fc;
} Rec;
typedef struct Rec2 {
    int f0;
    int f4;
} Rec2;
typedef struct Object {
    int tag;
    char unknown4[0x14];
    int slots[0x100];
    int nslots;
    int f41c;
    int f420;
    int f424;
    char unknown428[0x4];
    Rec *recs;
    Rec2 *recs2;
    int n;
    int n2;
} Object;
typedef struct Req {
    char *name;
    int *p8;
    int *pc;
    Object *o;
    Rec *rec;
    int size;
} Req;
typedef struct Req2 {
    int *p4;
    Object *o;
} Req2;
extern void *g_8c462ce4;
extern char g_8c2ef0e4[];
extern void operation_8c03dbf4(Object *);
extern void *operator_new_8c18de4c(int);
extern void operation_8c03ed10(char *);
extern void call_8c03dd80(Object *, char *, int);
extern void operation_8c03de60(Object *, char *, int);
extern void operation_8c03ed70(char *);
extern void operation_8c03eb90(Object *);
extern int debug_error_stub_8c03ef80(char *, ...);
extern int call_8c1a86d0(char *);
extern void create_file_read_callback(char *, void *, void *, void *, int *);
extern void operation_8c03e080(void);
Object *operation_8c03d360(Object *o, int tag, char **names, char **names2, int a4, int a5, int a6)
{
    int i;
    int j;
    int j2;
    int j3;
    char **p;
    Req req;
    int h;
    Req2 req2;
    int h2;
    int k;
    int kr;
    int kn;
    operation_8c03dbf4(o);
    o->tag = tag;
    for (j = 0; j < 0x100; j++) {
        *(int *)((char *)o->slots + (j << 2)) = 0;
    }
    o->f41c = a4;
    o->f420 = a5;
    o->f424 = a6;
    for (p = names; *p != 0; p++) {
        o->n++;
    }
    if (o->n > 0) {
        o->recs = operator_new_8c18de4c(o->n << 4);
        for (j2 = 0; j2 < o->n; j2++) {
            *(int *)((char *)&o->recs->f0 + (j2 << 4)) = 0;
            *(int *)((char *)&o->recs->f8 + (j2 << 4)) = 0;
            *(int *)((char *)&o->recs->fc + (j2 << 4)) = 0;
        }
    }
    for (p = names2; *p != 0; p++) {
        o->n2++;
    }
    if (o->n2 > 0) {
        o->recs2 = operator_new_8c18de4c(o->n2 << 3);
        for (j3 = 0; j3 < o->n2; j3++) {
            *(int *)((char *)&o->recs2->f4 + (j3 << 3)) = 0;
        }
    }
    if (o->tag & 1) {
        operation_8c03ed10(g_8c2ef0e4 + 0xa);
        for (tag = 0; *names != 0; names++, tag++) {
            call_8c03dd80(o, *names, tag);
        }
        for (i = 0; *names2 != 0; names2++, i++) {
            operation_8c03de60(o, *names2, i);
        }
        operation_8c03ed70(g_8c2ef0e4 + 0xa);
        operation_8c03eb90(o);
    } else if (o->tag & 2) {
        operation_8c03ed10(g_8c2ef0e4 + 0x1b);
        if (o->n2 + (o->n << 1) >= 0x100) {
            debug_error_stub_8c03ef80(g_8c2ef0e4 + 0x29);
        }
        kr = 0x42c;
        kn = 0x418;
        for (i = 0; *names != 0; names++, i++) {
            req.name = *names;
            req.p8 = (int *)((char *)&(*(Rec **)((char *)o + kr))->f8 + (i << 4));
            req.pc = (int *)((char *)&(*(Rec **)((char *)o + kr))->fc + (i << 4));
            req.o = o;
            req.rec = (Rec *)((char *)*(Rec **)((char *)o + kr) + (i << 4));
            req.size = call_8c1a86d0(*names);
            create_file_read_callback(*names, g_8c462ce4, operation_8c03e080, &req, &h);
            k = (*(int *)((char *)o + kn))++;
            *(int *)((char *)o->slots + (k << 2)) = h;
        }
        kr = 0x430;
        kn = 0x418;
        for (i = 0; *names2 != 0; names2++, i++) {
            req2.p4 = (int *)((char *)&(*(Rec2 **)((char *)o + kr))->f4 + (i << 3));
            req2.o = o;
            create_file_read_callback(*names2, g_8c462ce4, (void *)0x8c03e1d0, &req2, &h2);
            k = (*(int *)((char *)o + kn))++;
            *(int *)((char *)o->slots + (k << 2)) = h2;
        }
    }
    return o;
}
