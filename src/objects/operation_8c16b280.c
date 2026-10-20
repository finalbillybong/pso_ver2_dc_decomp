typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
typedef struct S_vv4 S_vv4;
struct S_g8c4db9e0 {
    unsigned char f00;
};
struct S_vv4 {
    char unknown0[0x14];
    int f14;
};
extern S_g8c4db9e0 *g_8c4db9e0;
extern void call_8c12b880(S_vv4 *, int, int);
extern void call_8c12b77c(S_vv4 *, void *, int);
static inline void remove_entry(S_g8c4db9e0 *p, int a0)
{
    int v5;
    int v3;
    S_vv4 *v4;
    v5 = p->f00;
    v4 = (S_vv4 *)((char *)p + 0x4);
    for (v3 = 0; v3 < v5; v3++) {
        if (v4->f14 == a0) {
            p->f00 -= 1;
            v5 -= v3;
            if (!(v5 > 0)) {
                call_8c12b880(v4, 0, 0x1c);
            } else {
                call_8c12b77c(v4, (void *)((int)v4 + 0x1c), (int)(v5 * 0x1c));
            }
            return;
        }
        v4 = (S_vv4 *)((char *)v4 + 28);
    }
}
void operation_8c16b280(int a0)
{
    remove_entry(g_8c4db9e0, a0);
}
