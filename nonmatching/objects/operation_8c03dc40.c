/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03dc40
 * function: operation_8c03dc40
 * language: c
 * reference size: 320 bytes
 * compiled size: 320 bytes (+0.0%)
 * differing lines: 2 of 132 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on boot+title+opening movie; offline start: new character to Pioneer 2 (emulator
 *   A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_4 Arg0_0_4;
typedef struct Arg0_0_8 Arg0_0_8;
typedef struct Arg0_0_c Arg0_0_c;
typedef struct Arg0_18 Arg0_18;
typedef struct Arg0_42c Arg0_42c;
typedef struct Arg0_430 Arg0_430;
struct Object {
    int tag;
    char unknown4[0x428];
    Arg0_42c *f42c;
    Arg0_430 *f430;
};
extern char g_8c2ef0e4[];
extern void cancel_file_task(void *);
extern void operation_8c03ee04(int);
extern void operation_8c03ecf0(void *, int);
extern void check_items_8c37d534(void *);
extern void operator_delete_8c18de08(void *);
extern void call_8c011ed8(Object *);
Object *operation_8c03dc40(Object *o, int a1)
{
    int v1;
    int v3;
    int v2;
    int v35;
    int v36;
    int v39;
    int e;
    if (o != 0) {
        v1 = (int)o->tag;
        if (((v1 & 2)) != 0) {
            if (((v1 & 0x100)) != 0) {
                o->tag = v1 | 0x200;
            } else {
                v2 = 0x418;
                for (v3 = 0; *(int *)((char *)&o->tag + (v2)) > v3; v3++) {
                    cancel_file_task((void *)(*(Arg0_18 **)((char *)((char *)o + 0x18) + (v3 << 2))));
                }
                operation_8c03ee04((int)(g_8c2ef0e4 + 0x1b));
            }
        }
        v35 = 0x42c;
        v36 = 0x434;
        for (v3 = 0; *(int *)((char *)&o->tag + (v36)) > v3; v3++) {
            v39 = v3 << 4;
            operation_8c03ecf0((void *)o, (int)(*(Arg0_0_8 **)((char *)((char *)*(Arg0_0 **)((char *)&o->tag + (v35)) + 0x8) + (v39))));
            e = *(int *)((char *)((char *)*(Arg0_0 **)((char *)&o->tag + (v35)) + 0xc) + (v39));
            if (e != 0) {
                if (((*(int *)((char *)((char *)*(Arg0_0 **)((char *)&o->tag + (v35)) + 0x0) + (v39)) & 1)) != 0) {
                    check_items_8c37d534((void *)e);
                }
                operation_8c03ecf0((void *)o, (int)(*(Arg0_0_c **)((char *)((char *)*(Arg0_0 **)((char *)&o->tag + (v35)) + 0xc) + (v39))));
            }
        }
        operator_delete_8c18de08((void *)(o->f42c));
        v36 = 0x430;
        v35 = 0x438;
        for (v3 = 0; *(int *)((char *)&o->tag + (v35)) > v3; v3++) {
            operation_8c03ecf0((void *)o, (int)(*(Arg0_0_4 **)((char *)((char *)*(Arg0_0 **)((char *)&o->tag + (v36)) + 0x4) + (v3 << 3))));
        }
        operator_delete_8c18de08((void *)(o->f430));
        if ((short)a1 > 0) {
            call_8c011ed8(o);
        }
    }
    return o;
}
