typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct S_x1360 S_x1360;
typedef struct S_x73776 S_x73776;
struct S_x1360 {
    Block24 f00;
};
struct S_x73776 {
    Block24 f00;
};
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
};
extern char g_8c2e1f18[];
extern void call_8c38ade4(void *);
extern void call_8c37df90(int, void *);
extern void call_8c3be280(int, int, int);
extern void call_8c38ad10(void);
extern void call_8c3bdf60(int, void *);
void operation_8c24a610(Object *o)
{
    int v5;
    int v3;
    int v1;
    int v2;
    int v4;
    v1 = (int)0x124;
    v3 = (int)0;
    v2 = (int)0x138;
    while (8 > v3) {
        v4 = (int)(v3 * 0x18);
        *(Block24 *)&((S_x1360 *)((int)o + v1 + v4))->f00 = *(Block24 *)&((S_x73776 *)(v4 + g_8c2e1f18))->f00;
        call_8c38ade4((void *)((void *)0x8c400500));
        call_8c37df90(0, (void *)(o->f64));
        v5 = (int)((int)o + v4 + v1);
        call_8c3be280(0, v5, v5);
        call_8c38ad10();
        call_8c3bdf60(v5, (void *)(((char *)o + 0x3c)));
        *(int *)((char *)((char *)((int)o + v2) + 0x0) + (v4)) = 0;
        v3 = (int)(v3 + 1);
    }
}
