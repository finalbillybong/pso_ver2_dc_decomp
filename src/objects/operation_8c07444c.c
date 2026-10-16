typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689f8 S_g8c4689f8;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    int fe8;
};
struct S_g8c4689f8 {
    char unknown0[0xe8];
    int fe8;
};
extern int g_8c4689ec;
extern void call_8c12b77c(void *, void *, int);
int operation_8c07444c(Object *o)
{
    int v2;
    int v1;
    int v3;
    int v4;
    int v5;
    int v6;
    int v8;
    v1 = (int)-1;
    v2 = (int)g_8c4689ec;
    v3 = (int)o->fe8;
    v4 = (int)0;
    v5 = (int)(v2 + v1);
    while (v5 > v4) {
        if (v3 > (*(S_g8c4689f8 **)((char *)0x8c4689f8 + (v4 + v5 >> 1 << 2)))->fe8) {
            v6 = (int)((v4 + v5 >> 1) + 1);
        } else {
            v6 = (int)v4;
            v5 = (int)(v4 + v5 >> 1);
        }
        v4 = (int)v6;
    }
    v8 = (int)*(int *)((char *)0x8c4689f8 + (v4 << 2));
    if (v8 == (int)(o)) {
        call_8c12b77c((void *)(&*(int *)((char *)0x8c4689f8 + (v4 << 2))), (void *)(&*(int *)((char *)0x8c4689f8 + (v4 + 1 << 2))), (int)(v2 - (v4 + 1) << 2));
        g_8c4689ec -= 1;
        *(int *)((char *)0x8c4689f8 + (g_8c4689ec << 2)) = 0;
        return (int)(v3);
    }
    return -1;
}
