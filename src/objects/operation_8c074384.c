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
extern int g_8c5134c0;
extern void call_8c12b77c(void *, void *, int);
#define TBL(i) (*(S_g8c4689f8 **)((char *)0x8c4689f8 + ((i) << 2)))
int operation_8c074384(Object *o)
{
    int v4;
    int v2;
    int v3;
    int v5;
    int v17;
    int v6;
    int v1;
    v2 = g_8c4689ec;
    v1 = o->fe8;
    v3 = -1;
    v5 = v2 + v3;
    if (v1 == -1) {
        g_8c5134c0 = 1;
        return v1;
    }
    if (v5 > v3 && TBL(v5)->fe8 > v1) {
        v4 = 0;
        while (v5 > v4) {
            v6 = v4 + v5 >> 1;
            if (v1 > TBL(v6)->fe8) {
                v4 = v6 + 1;
            } else {
                v5 = v6;
            }
        }
        if (v1 == TBL(v4)->fe8) {
            g_8c5134c0 = 1;
            return v1;
        }
        call_8c12b77c((void *)((char *)0x8c4689f8 + (v4 + 1 << 2)), (void *)((char *)0x8c4689f8 + (v4 << 2)), v2 - v4 << 2);
        v17 = v4;
    } else {
        v17 = v2;
    }
    *(Object **)((char *)0x8c4689f8 + (v17 << 2)) = o;
    g_8c4689ec += 1;
    return v1;
}
