/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d9d10
 * function: operation_8c0d9d10
 * language: c
 * reference size: 284 bytes
 * compiled size: 288 bytes (+1.4%)
 * differing lines: 18 of 117 reference instruction lines
 * differing bytes: 240
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct S_vv6 S_vv6;
typedef struct S_vv8 S_vv8;
struct Object {
    char unknown0[0x20];
    int f20;
    unsigned short f24;
    char unknown26[0x2];
    int f28;
    Arg0_2c *f2c;
    char unknown30[0x438];
    short f468;
    short f46a;
    int f46c;
};
struct S_vv6 {
    short f00;
    short f02;
};
struct S_vv8 {
    short f00;
    short f02;
};
extern int lookup_low_id(int);
extern int player_flag9_8c026508(void);
extern int current_mode_active(void);
extern void call_8c0d9568(Object *, int, int, short, short);
extern int operation_8c0d9be4(int, void *, int);
extern void operation_8c0dafdc(void *);
extern int operation_8c025fe8(void *, short);
extern int operation_8c02606c(void *, int);
void operation_8c0d9d10(Object *o)
{
    int t1;
    int v7;
    int v4;
    S_vv8 *v8;
    short v10;
    int t3;
    int t4;
    int v5;
    int t6;
    if ((0 == (((o->f20 & 1)))) != 0) {
        if (0 == *(int *)0x8c46f0a0) {
            t1 = lookup_low_id((int)(o->f24));
            if (t1 != 0) {
                int t2;
                int v9;
                S_vv6 *v6;
                t2 = player_flag9_8c026508();
                if (t2 != 0) {
                    t3 = current_mode_active();
                    if (t3 != 0) {
                        if (0 != o->f46c) {
                            call_8c0d9568(o, t1, 0, o->f468, o->f46a);
                        }
                        return;
                    }
                }
                v4 = o->f28;
                v5 = 0;
                v6 = (S_vv6 *)o->f2c;
                for (; v4 > v5; ) {
                    t4 = operation_8c0d9be4((int)o, (void *)t1, v5);
                    v6->f00 = (char)t4;
                    v6->f02 = v5;
                    v5 += 1;
                    v6 = (S_vv6 *)((char *)v6 + 4);
                }
                operation_8c0dafdc((void *)(&o->f28));
                v7 = 0;
                v9 = (int)0;
                v8 = (S_vv8 *)o->f2c;
                for (; v4 > v9; ) {
                    if ((int)v8->f00 != 0) {
                        v10 = (short)v8->f02;
                        v5 = operation_8c025fe8((void *)t1, v10);
                        t6 = operation_8c02606c((void *)t1, v10);
                        call_8c0d9568(o, t1, v7, (short)v5, (short)t6);
                        v7 += 1;
                    }
                    v9 = (int)(v9 + 1);
                    v8 = (S_vv8 *)((char *)v8 + 4);
                }
            }
        }
    }
}
