typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_818 S_c8c021ef8_818;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4db4e4 S_g8c4db4e4;
struct S_c8c021ef8 {
    char unknown0[0x818];
    S_c8c021ef8_818 *f818;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c4db4e4 *g_8c4db4e4;
extern char g_8c318c08[];
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c04c6a8(void *);
extern int call_8c12b0cc(int);
extern void call_8c18e720(void *, int);
void operation_8c172610(void)
{
    S_c8c021ef8 *t1;
    int t3;
    int t4;
    int t2;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        t2 = call_8c04c6a8((void *)(t1->f818));
        t3 = call_8c12b0cc(t2);
        call_8c18e720(g_8c4db4e4, t2);
        g_8c4db4e4 = (S_g8c4db4e4 *)((int)g_8c4db4e4 + t3);
        return;
    }
    t4 = call_8c12b0cc((int)(g_8c318c08 + 0x33));
    call_8c18e720(g_8c4db4e4, (int)(g_8c318c08 + 0x33));
    g_8c4db4e4 = (S_g8c4db4e4 *)((int)g_8c4db4e4 + t4);
}
