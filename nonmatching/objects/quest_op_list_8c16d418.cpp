/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16d418
 * function: quest_op_list_8c16d418
 * language: c++
 * reference size: 340 bytes
 * compiled size: 344 bytes (+1.2%)
 * differing lines: 6 of 126 reference instruction lines
 * differing bytes: 138
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db414 S_g8c4db414;
class S_c8c122700;
struct Frame {
    Block8 f00;
    int f08;
    char unknownc[0x1fc];
};
class S_c8c122700 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_c8c122700Data {
    char unknown0[0x10a0];
    int f10a0;
} S_c8c122700Data;
struct S_g8c4db414 {
    char unknown0[0x80];
    unsigned short f80;
};
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void initialize_buffer_node_8c032bd8(void *, int, int, int);
extern "C" void strncpy_8c12b154(void *, int, int);
extern "C" void operation_8c032b70(void *);
extern "C" void operation_8c032d18(void *, void *);
extern "C" int operation_8c156c24(int, int);
extern "C" void operation_8c156d30(S_g8c4db414 *, int, int, int);
extern "C" void operation_8c156f50(void *);
extern "C" void operation_8c157138(void *);
extern "C" void operation_8c0dc610(float, void *);
extern "C" void quest_op_list_8c16d418(int a0, int a1)
{
    Frame frame;
    int v1;
    int v5;
    S_c8c122700 *t1;
    int pm6;
    int v4;
    int t2;
    unsigned int pm3;
    S_g8c4db408 **pm4;
    int v6;
    int pm7;
    unsigned int pm10;
    unsigned int pm8;
    Frame *pm5;
    unsigned int pm11;
    void *pm9;
    int pm12;
    *(&(&frame)->f00) = *(Block8 *)& *(Block8 *)0x8c317b48;
    t1 = heap_alloc_8c122700((void *)((*(S_g8c4d97e0 **)0x8c4d97e0)), (unsigned int)0x10ac);
    v1 = (int)t1;
    if (!(0 == t1)) {
        initialize_buffer_node_8c032bd8((void *)t1, 0, 0, 0);
    }
    strncpy_8c12b154((void *)(&(&frame)->f08), a1, 0x1ff);
    pm5 = &frame;
    operation_8c032b70((void *)(&(pm5)->f08));
    operation_8c032d18((void *)t1, (void *)(&(&frame)->f08));
    t2 = operation_8c156c24((int)(&frame), (((S_c8c122700Data *)t1)->f10a0));
    pm11 = 0x8c4db414;
    pm8 = pm11;
    v4 = (int)0x10a0;
    pm7 = 0;
    v5 = pm7;
    *(int *)pm8 = (int)t2;
    while (*(int *)(((char *)v1 + 0x0) + (v4)) > v5) {
        v6 = (int)v1;
        pm6 = v6 + (v5 << 5);
        pm7 = (int)(pm6);
        v6 = pm7;
        t2 = 0x20 + v6;
        a1 = t2;
        operation_8c156d30((S_g8c4db414 *)(*(S_g8c4db414 **)0x8c4db414), (a1), 7, v5);
        v5 = v5 + 1;
    }
    pm10 = 0x8c4db414;
    pm9 = (void *)(*(S_g8c4db414 **)pm10);
    operation_8c156f50(pm9);
    operation_8c157138((void *)(*(S_g8c4db414 **)0x8c4db414));
    (*(S_g8c4db414 **)0x8c4db414)->f80 = ((int)(*(S_g8c4db414 **)0x8c4db414)->f80 & 0xffff) | 1;
    operation_8c0dc610(-11000.0f, (void *)(*(S_g8c4db414 **)0x8c4db414));
    pm12 = 2;
    v6 = (unsigned char)a0 << pm12;
    pm4 = (S_g8c4db408 **)0x8c4db408;
    pm3 = 0x8c4db418;
    *(int *)((char *)((char *)*pm4 + 0x0) + (v6)) = 0;
    *(char *)pm3 = (char)a0;
    *(int *)0x8c4db428 = 7;
    if (!(0 == t1)) {
        t1->v0(1);
    }
}
