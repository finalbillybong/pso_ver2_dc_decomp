typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block36 {
    int words[9];
} Block36;
typedef struct S_g8c4dc2c4 S_g8c4dc2c4;
typedef struct S_g8c4dc2c4_0 S_g8c4dc2c4_0;
typedef struct S_g8c4dc2c8 S_g8c4dc2c8;
typedef struct S_g8c4dc2d4 S_g8c4dc2d4;
typedef struct S_g8c4dc348 S_g8c4dc348;
typedef struct Object Object;
typedef struct S_vv10 S_vv10;
typedef struct S_vv11 S_vv11;
struct S_vv11 {
    Block36 f00;
};
struct S_vv10 {
    Block36 f00;
};
extern S_g8c4dc2c4 *g_8c4dc2c4;
extern S_g8c4dc2c8 *g_8c4dc2c8;
extern S_g8c4dc2d4 *g_8c4dc2d4;
extern S_g8c4dc348 *g_8c4dc348;
extern void call_8c1c9418(void *);
int operation_8c192764(Object *o)
{
    int size;
    int v1;
    int v2;
    int v3;
    int count;
    int n;
    S_vv11 *p;
    int v5;
    S_vv10 *v10;
    int v9;
    size = 0;
    for (v1 = size; v1 != 0x10; v1++) {
        *(short *)((char *)o + (v1 << 1)) = *(volatile unsigned short *)((char *)g_8c4dc2d4 + (v1 << 1)) & 0xffff;
    }
    for (v2 = 0; (unsigned short)v2 != 0xc; v2++) {
        *(int *)((char *)((char *)o + 0x20) + ((unsigned short)v2 << 2)) = *(int *)((char *)g_8c4dc348 + ((unsigned short)v2 << 2));
    }
    for (v3 = 0; v3 != 0xf; v3++) {
        *(int *)((char *)((char *)o + 0x50) + (v3 << 2)) = *(int *)((char *)g_8c4dc2c8 + (v3 << 2));
    }
    count = 0;
    p = (S_vv11 *)((char *)o + 0x8c);
    size += 0x8c;
    for (v5 = 0; v5 != 0xf; v5++) {
        n = *(int *)((char *)g_8c4dc2c8 + (v5 << 2));
        v10 = *(S_vv10 **)((char *)g_8c4dc2c4 + (v5 << 2));
        for (v9 = 0; v9 != n; v9++, v10 = (S_vv10 *)((char *)v10 + 0x24), count++) {
            p->f00 = v10->f00;
            call_8c1c9418((char *)(p++) + 0x10);
        }
    }
    size += count * 0x24;
    return size;
}
