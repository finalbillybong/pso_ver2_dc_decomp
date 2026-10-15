typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x104];
    int f104;
};
struct S_vv3 {
    char unknown0[0x4];
    int f04;
};
struct S_vv2 {
    int f00;
};
extern int current_effect_mode(void);
void operation_8c08feb8(Object *o)
{
    char *v1;
    S_vv3 *v3;
    S_vv2 *v2;
    int t1;
    t1 = current_effect_mode();
    v1 = (char *)*(int *)((char *)0x8c2ee8b8 + (t1 << 2));
    o->f104 = 0;
    v2 = (S_vv2 *)&o->f104;
    v3 = (S_vv3 *)v1;
    while (v3 != 0) {
        if (v3->f04 == 0) {
            break;
        }
        v2->f00 += 1;
        v3 = (S_vv3 *)((char *)v3 + 16);
    }
}
