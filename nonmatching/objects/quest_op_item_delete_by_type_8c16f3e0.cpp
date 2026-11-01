/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16f3e0
 * function: quest_op_item_delete_by_type_8c16f3e0
 * language: c++
 * reference size: 448 bytes
 * compiled size: 448 bytes (+0.0%)
 * differing lines: 64 of 203 reference instruction lines
 * differing bytes: 32
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
typedef struct S_c8c021ef8_bc8 S_c8c021ef8_bc8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4db408 S_g8c4db408;
class S_c8c169508;
struct Frame {
    unsigned char f00;
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
    unsigned char f04;
    unsigned char f05;
    unsigned char f06;
    char f07;
    unsigned char f08;
    char f09;
    unsigned char f0a;
    char f0b;
    int f0c;
    char unknown10[0x4];
};
struct S_c8c021ef8 {
    char unknown0[0xbc8];
    S_c8c021ef8_bc8 *fbc8;
};
class S_c8c169508 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31(Frame *);
};
typedef struct S_c8c169508Data {

} S_c8c169508Data;
extern S_g8c418248 *g_8c418248;
extern S_g8c4db408 *g_8c4db408;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_1c7dd4(void *);
extern "C" int find_node_8c16a3c0(void *, int);
extern "C" S_c8c169508 *operation_8c169508(void *);
extern "C" void operation_8c023b3c(void *, int, int);
extern "C" void quest_op_item_delete_by_type_8c16f3e0(int a0, int a1)
{
    Frame frame;
    char *v1;
    S_c8c021ef8 *t1;
    int t2;
    S_c8c169508 *t3;
    if ((unsigned int)(unsigned char)a1 > (unsigned int)0xf4) {
        return;
    }
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
    } else {
        operation_1c7dd4((void *)(&frame));
        v1 = (char *)g_8c4db408;
        (&frame)->f00 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
        (&frame)->f01 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
        (&frame)->f02 = *(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0 << 2));
        t2 = find_node_8c16a3c0((void *)(t1->fbc8), (int)(&frame));
        if (t2 == 0) {
        } else {
            t3 = operation_8c169508((void *)t2);
            if (t3 != 0) {
                t3->v31((&frame));
                *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1++ << 2)) = (&frame)->f00;
                *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1++ << 2)) = (&frame)->f01;
                *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1++ << 2)) = (&frame)->f02;
                *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1++ << 2)) = (&frame)->f03;
                *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1++ << 2)) = (&frame)->f04;
                *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1++ << 2)) = (&frame)->f05;
                *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1++ << 2)) = (&frame)->f06;
                *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1++ << 2)) = (&frame)->f07;
                *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1++ << 2)) = (&frame)->f08;
                *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1++ << 2)) = (&frame)->f09;
                *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1++ << 2)) = (&frame)->f0a;
                *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = (&frame)->f0b;
                operation_8c023b3c((void *)t1, (int)((&frame)->f0c), 1);
                return;
            }
            *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = -1;
            return;
        }
        *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = -1;
        return;
    }
    *(int *)((char *)((char *)g_8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = -1;
}
