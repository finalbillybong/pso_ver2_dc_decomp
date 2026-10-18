typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x34];
    int f34;
};
struct Object {
    char unknown0[0x20];
    unsigned short f20;
};
extern int g_8c2e2ad8;
extern int g_8c418248;
extern int operation_2391f4(void *);
extern void operation_23959c(void *, void *, int);
void operation_8c02bf54(Object *o, Arg1 *a1, int a2)
{
    int v1;
    int v7;
    int t1;
    v1 = (int)0;
    if (g_8c2e2ad8 != 0) {
        t1 = operation_2391f4((void *)((void *)0x8c41ce5c));
        if ((char)t1 == 1) {
            v1 = (int)1;
        }
    }
    if (v1 != 0 && ((a1->f34 & 0x10000000)) == 0) {
        v7 = (int)(o->f20 == g_8c418248);
        if (v7 != 0) {
            operation_23959c((void *)(((char *)o + 0x714)), (void *)a1, a2);
        }
    }
}
