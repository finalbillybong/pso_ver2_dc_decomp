typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbb24 S_g8c4dbb24;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4dbb24 *g_8c4dbb24;
extern void select_state2_8c01c1b4(void);
extern int hierarchy_is_active(void *);
void operation_8c1845a8(void)
{
    int v26;
    S_vv1 *v1;
    int t1;
    select_state2_8c01c1b4();
    v26 = (int)g_8c4dbb24;
    if (v26 != 0) {
        t1 = hierarchy_is_active((void *)v26);
        if (t1 != 0) {
            v1 = (S_vv1 *)g_8c4dbb24;
            v1->f04 |= 1;
            g_8c4dbb24 = (S_g8c4dbb24 *)0;
        }
    }
}
