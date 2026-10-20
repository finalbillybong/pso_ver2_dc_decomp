typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv4 S_vv4;
struct S_vv2 {
    int f00;
    S_vv2_4 *f04;
    int f08;
};
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    int f24;
    float f28;
};
struct S_vv4 {
    char unknown0[0x24];
    float f24;
};
struct Arg0_20 {
    int f00;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c2275ac(int, int, S_vv4 *, Object *);
extern void call_8c227a84(int, float);
void operation_8c227cb4(Object *o, int a1)
{
    S_vv2 *v2;
    S_vv4 *v4;
    int v1;
    int *e;
    char *v5;
    int v9;
    v1 = 0;
    while (v2 = (S_vv2 *)o->f20, v1 != v2->f00) {
        e = (int *)((char *)v2->f04 + (v1 << 3));
        if (*e == a1) {
            v4 = (S_vv4 *)(v2->f08 + e[1] * 0x2c);
            v5 = (char *)o->f24;
            if (v4 != 0 && v4->f24 != 0.0f) {
                v9 = allocate_block(g_8c4d97e0, (unsigned int)0xb4);
                if (v9 != 0) {
                    call_8c2275ac(v9, (int)(v5), v4, o);
                }
            } else {
                v9 = 0;
            }
            if (v9 != 0 && o->f28 != 0.0f) {
                call_8c227a84(v9, o->f28);
            }
        }
        v1++;
    }
}
