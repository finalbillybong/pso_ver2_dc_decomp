typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv2 S_vv2;
typedef struct S_x99104 S_x99104;
struct S_vv2 {
    char unknown0[0x64];
    int f64;
    char unknown68[0x74];
    int fdc;
    int fe0;
};
struct S_x99104 {
    int f00;
};
extern void call_8c38ae68(void);
extern void call_8c37b5c4(int);
extern void call_8c382a40(int);
extern void call_8c37df90(int, int);
extern void call_8c3be280(int, void *, void *);
extern void call_8c38ad10(void);
extern void transform_actor_records(void *);
void operation_8c198c70(Object *o, int a1, int a2)
{
    int v1;
    S_vv2 *v2;
    int v3;
    v1 = (int)0;
    while (3 > v1) {
        v2 = (S_vv2 *)*(Arg0_20 **)((char *)((char *)o + 0x20) + (v1 << 2));
        call_8c38ae68();
        call_8c37b5c4(0);
        call_8c382a40(a1);
        call_8c37df90(0, a2);
        call_8c3be280(0, (void *)((int)v2 + 0xe4), (void *)((int)v2 + 0x3c));
        call_8c38ad10();
        v2->f64 = a2;
        transform_actor_records((void *)v2);
        v3 = (int)0;
        while (v2->fe0 > v3) {
            ((S_x99104 *)(v2->fdc + 0x18 + v3 * 0x2c))->f00 |= 1;
            v3 = (int)(v3 + 1);
        }
        v1 = (int)(v1 + 1);
    }
}
