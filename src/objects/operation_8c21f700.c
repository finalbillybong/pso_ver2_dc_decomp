typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x4];
    int f04;
};
struct S_c8c021ef8 {
    char unknown0[0x20];
    short f20;
};
struct S_vv1 {
    int f00;
    int f04;
    int f08;
};
struct S_vv6 {
    int f00;
    int f04;
    int f08;
};
extern char g_8c5059fc;
extern char g_8c5059a4[];
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c0ddc38(short, int, int);
typedef struct Block60 {
    int words[15];
} Block60;
void operation_8c21f700(Object *o)
{
    S_vv1 *v1;
    S_c8c021ef8 *t1;
    v1 = (S_vv1 *)((char *)o + 0x8);
    t1 = lookup_low_id((int)(o->f04));
    if (t1 != 0) {
        operation_8c0ddc38(t1->f20, (int)v1, 2);
        if ((v1->f00 & 0x200) == 0) {
            return;
        }
        while (g_8c5059fc >= 1) {
            g_8c5059fc -= 1;
        }
        g_8c5059fc += 1;
        *(Block60 *)(g_8c5059a4 + 0x1c) = *(Block60 *)v1;
    }
}
