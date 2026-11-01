/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0310a4
 * function: operation_8c0310a4
 * language: c
 * reference size: 644 bytes
 * compiled size: 648 bytes (+0.6%)
 * differing lines: 8 of 258 reference instruction lines
 * differing bytes: 515
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
typedef struct S_c8c105380 S_c8c105380;
typedef struct S_c8c105380_0 S_c8c105380_0;
typedef struct Frame Frame;
typedef struct S_g8c44be04 S_g8c44be04;
typedef struct S_g8c44be0c S_g8c44be0c;
typedef struct S_g8c44be0c_c S_g8c44be0c_c;
typedef struct S_g8c44be30 S_g8c44be30;
typedef struct S_g8c4dc5e0 S_g8c4dc5e0;
typedef struct S_g8c4e1950 S_g8c4e1950;
typedef struct S_vv17_0 S_vv17_0;
struct S_g8c44be0c {
    char unknown0[0xc];
    S_g8c44be0c_c *f0c;
};
struct Frame {
    char unknown0[0x20];
};
struct S_c8c105380 {
    S_c8c105380_0 *f00;
};
extern char g_8c2e8428[];
extern void check_items_8c37d534(void *);
extern int operation_8c1a99c0(int);
extern void call_8c369eb8(void *);
extern void operation_8c03ef04(int, int, int);
extern int file_last_size_8c104d50(Frame *);
extern S_c8c105380 *operation_8c105380(Frame *, int);
extern void operation_8c1a198c(void *, void *);
extern void debug_error_stub_8c03ef80(void *, ...);
extern void file_load_8c104d00(int, void *);
extern void copy_resource_fields(void *, void *);
extern int game_malloc_buffer_8c011e9c(int);
extern void call_8c030e2c(int);
extern void game_free_8c011ec0(int);
typedef struct Row12 {
    int f00;
    int f04;
    int f08;
} Row12;
extern Row12 g_8c4e1950[];
void operation_8c0310a4(void)
{
    Frame frame;
    int v17;
    int k;
    int t10;
    int v49;
    int v50;
    int v51;
    int t11;
    int v41;
    int v44;
    int v12;
    int t1;
    S_c8c105380 *t2;
    int t3;
    S_c8c105380 *t4;
    int t5;
    S_c8c105380 *t6;
    int t7;
    int t8;
    int v16;
    int v42;
    int t9;
    S_c8c105380 *t12;
    if (*(int *)0x8c44be0c != 0 && (*(S_g8c44be0c **)0x8c44be0c)->f0c != 0) {
        check_items_8c37d534((void *)((*(S_g8c44be0c **)0x8c44be0c)->f0c));
        (*(S_g8c44be0c **)0x8c44be0c)->f0c = (S_g8c44be0c_c *)0;
    }
    if (*(int *)0x8c510ba4 != 0) {
        t10 = operation_8c1a99c0(g_8c4e1950[*(int *)0x8c44be04].f00);
        *(int *)0x8c44be08 = *(int *)((char *)((char *)g_8c4e1950 + 4) + *(int *)0x8c44be04 * 0xc);
        v16 = (int)*(int *)((char *)((char *)t10 + 0x4) + (*(int *)0x8c44be08 << 3));
        v17 = (int)t10;
    } else {
        t11 = operation_8c1a99c0((int)(*(S_g8c44be04 **)0x8c44be04));
        k = *(int *)((char *)0x8c4e18c0 + (*(int *)0x8c44be04 << 3));
        *(int *)0x8c44be08 = k;
        v12 = (int)*(int *)((char *)((char *)t11 + 0x4) + (k << 3));
        v16 = (int)v12;
        v17 = (int)t11;
    }
    call_8c369eb8((void *)((void *)g_8c2e8428));
    operation_8c03ef04((int)(&frame), v16, (int)(g_8c2e8428 + 0x6));
    t1 = file_last_size_8c104d50((Frame *)((&frame)));
    if (!(t1 > *(int *)0x8c44be40)) {
        v49 = (int)*(int *)0x8c44be2c;
        if (v49 != 0) {
            t2 = operation_8c105380((Frame *)((&frame)), v49);
            *(S_c8c105380 **)0x8c417760 = t2;
            if (t2 != 0 && *(int *)0x8c4dc5e0 != 0) {
                operation_8c1a198c((void *)(*(S_g8c4dc5e0 **)0x8c4dc5e0), (void *)(t2->f00));
                goto L_8c03118e;
            }
            debug_error_stub_8c03ef80((void *)((g_8c2e8428 + 0xc)));
        } else {
            *(int *)0x8c417760 = 0;
        }
    }
L_8c03118e:;
    operation_8c03ef04((int)(&frame), v16, (int)(g_8c2e8428 + 0x30));
    t3 = file_last_size_8c104d50((Frame *)((&frame)));
    if (!(t3 > *(int *)0x8c44be3c)) {
        v50 = (int)*(int *)0x8c44be28;
        if (v50 != 0) {
            t4 = operation_8c105380((Frame *)((&frame)), v50);
            *(S_c8c105380 **)0x8c44be0c = t4;
        } else {
            *(int *)0x8c44be0c = 0;
        }
    }
    operation_8c03ef04((int)(&frame), v16, (int)(g_8c2e8428 + 0x3c));
    t5 = file_last_size_8c104d50((Frame *)((&frame)));
    if (!(t5 > *(int *)0x8c44be48)) {
        v51 = (int)*(int *)0x8c44be34;
        if (v51 != 0) {
            t6 = operation_8c105380((Frame *)((&frame)), v51);
            *(S_c8c105380 **)0x8c44be10 = t6;
        } else {
            *(int *)0x8c44be10 = 0;
        }
    }
    operation_8c03ef04((int)(&frame), v16, (int)(g_8c2e8428 + 0x42));
    t7 = file_last_size_8c104d50((Frame *)((&frame)));
    if (!(t7 > *(int *)0x8c44be44)) {
        if (*(int *)0x8c44be30 != 0) {
            file_load_8c104d00((int)(&frame), (void *)(*(S_g8c44be30 **)0x8c44be30));
        } else {
            *(int *)0x8c44be30 = 0;
        }
    }
    if (*(int *)0x8c44be0c != 0 && (*(S_g8c44be0c **)0x8c44be0c)->f0c != 0) {
        copy_resource_fields((void *)(*(S_vv17_0 **)((char *)((char *)v17 + 0x0) + (*(int *)0x8c44be08 << 3))), (void *)((*(S_g8c44be0c **)0x8c44be0c)->f0c));
    }
    operation_8c03ef04((int)(&frame), v16, (int)(g_8c2e8428 + 0x36));
    t8 = file_last_size_8c104d50((Frame *)((&frame)));
    v44 = t8 > 0 ? ((v42 = game_malloc_buffer_8c011e9c(t8)) != 0 ? (int)operation_8c105380((Frame *)((&frame)), v42) : 0) : 0;
    if (v44 != 0) {
        call_8c030e2c(v44);
    }
    if (v42 != 0) {
        game_free_8c011ec0(v42);
    }
    *(char *)0x8c44be18 = 1;
    call_8c369eb8((void *)((g_8c2e8428 + 0x47)));
}
