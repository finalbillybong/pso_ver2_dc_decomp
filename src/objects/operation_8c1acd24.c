typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_3b8 S_c8c021ef8_3b8;
typedef struct S_c8c021ef8_3b8_s468 S_c8c021ef8_3b8_s468;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_vv3 S_vv3;
typedef struct S_vv33 S_vv33;
struct S_vv3 {
    unsigned char f00;
    unsigned char f01;
};
struct S_c8c021ef8 {
    char unknown0[0x3b8];
    S_c8c021ef8_3b8 *f3b8;
};
struct S_c8c021ef8_3b8_s468 {
    char unknown0[0x4];
    int f04;
};
struct S_vv33 {
    unsigned char f00;
    unsigned char f01;
};
extern S_g8c418248 *g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
static inline int find_slot(int base, int v1, int v2)
{
    int v4;
    S_vv3 *v3;
    S_c8c021ef8 *t1;
    for (v4 = 0, v3 = (S_vv3 *)base; v4 < 4; v3 = (S_vv3 *)((char *)v3 + 4), v4++) {
        if (v1 == (int)(unsigned char)(int)v3->f00) {
            if (v2 == v3->f01) {
                return v4;
            }
        }
    }
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0 && t1->f3b8 != 0 && ((S_c8c021ef8_3b8_s468 *)((char *)t1->f3b8 + 0x468))->f04 != 0) {
        return 0;
    }
    return -1;
}
int operation_8c1acd24(int a0, int a1, int a2)
{
    int b;
    int v1;
    int v2;
    int r;
    int t;
    b = a0 + 4;
    v1 = (int)(short)a1;
    v2 = (int)(short)a2;
    r = find_slot(b, v1, v2);
    t = -1;
    if (r != t) {
        return r;
    }
    return find_slot(a0 + 0x14, v1, v2);
}
