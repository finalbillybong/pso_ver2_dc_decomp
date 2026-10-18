typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c317600 S_g8c317600;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c021ef8 {
    char unknown0[0x308];
    short f308;
};
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c026700(int, int);
extern void create_effect_777c(void *, int);
extern void operation_8c0a1ed0(int);
extern int allocate_block(void *, unsigned int);
extern void initialize_follow_quad_effect(void *, void *, unsigned int, unsigned short);
typedef struct Row40 {
    char unknown0[0x38];
    int f38;
} Row40;
void operation_8c167fe4(int a0, int a1)
{
    int v1;
    Row40 *row;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    t1 = lookup_low_id(a1);
    if (t1 == 0) {
        return;
    }
    row = (Row40 *)((char *)0x8c3175c8 + (a0 << 6));
    v1 = (int)(t1->f308 == 1);
    if (v1 != 0) {
        operation_8c026700((int)t1, row->f38);
    }
    create_effect_777c((void *)(((char *)t1 + 0x3c)), 0x13d);
    operation_8c0a1ed0(0);
    switch (a0) {
    case 2:
        t2 = allocate_block(g_8c4d97e0, (unsigned int)0xd4);
        if (t2 == 0) {
            return;
        }
        initialize_follow_quad_effect((void *)t2, g_8c44bea0, (unsigned int)2, (unsigned short)a1);
        return;
    case 3:
        t3 = allocate_block(g_8c4d97e0, (unsigned int)0xd4);
        if (t3 == 0) {
            return;
        }
        initialize_follow_quad_effect((void *)t3, g_8c44bea0, (unsigned int)3, (unsigned short)a1);
        return;
    case 4:
        t4 = allocate_block(g_8c4d97e0, (unsigned int)0xd4);
        if (t4 == 0) {
            return;
        }
        initialize_follow_quad_effect((void *)t4, g_8c44bea0, (unsigned int)4, (unsigned short)a1);
        return;
    case 0:
        t5 = allocate_block(g_8c4d97e0, (unsigned int)0xd4);
        if (t5 == 0) {
            return;
        }
        initialize_follow_quad_effect((void *)t5, g_8c44bea0, (unsigned int)0, (unsigned short)a1);
        return;
    case 1:
        t6 = allocate_block(g_8c4d97e0, (unsigned int)0xd4);
        if (t6 == 0) {
            return;
        }
        initialize_follow_quad_effect((void *)t6, g_8c44bea0, (unsigned int)1, (unsigned short)a1);
        return;
    case 5:
        t7 = allocate_block(g_8c4d97e0, (unsigned int)0xd4);
        if (t7 != 0) {
            initialize_follow_quad_effect((void *)t7, g_8c44bea0, (unsigned int)5, (unsigned short)a1);
        }
        return;
    }
}
