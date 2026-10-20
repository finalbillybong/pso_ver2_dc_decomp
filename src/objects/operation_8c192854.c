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
typedef struct S_vv12 S_vv12;
typedef struct S_vv8 S_vv8;
typedef struct S_x71408 S_x71408;
struct S_vv8 {
    Block36 f00;
};
struct S_x71408 {
    Block36 f00;
};
struct S_g8c4dc2c4 {
    int f00;
};
struct S_g8c4dc2c8 {
    int f00;
};
struct S_vv12 {
    char unknown0[0x1c];
    int f1c;
};
extern int g_8c4db248;
extern S_g8c4dc2c4 *g_8c4dc2c4;
extern S_g8c4dc2c8 *g_8c4dc2c8;
extern S_g8c4dc2d4 *g_8c4dc2d4;
extern int g_8c4dc2d8;
extern S_g8c4dc348 *g_8c4dc348;
extern void call_8c1922a0(void);
extern void call_8c1c9730(void *);
extern int find_record_8c0744dc(int);
extern void operation_8c162de4(void *, int);
void operation_8c192854(Object *o)
{
    int v1;
    int v2;
    int v3;
    int v10;
    int v4;
    int v9;
    int v5;
    S_vv8 *v8;
    int v7;
    S_vv12 *v12;
    int v6;
    int v11;
    int t1;
    call_8c1922a0();
    v1 = (int)0;
    while (v1 != 0x10) {
        *(short *)((char *)((char *)g_8c4dc2d4 + 0x0) + (v1 << 1)) = *(volatile unsigned short *)((char *)((char *)o + 0x0) + (v1 << 1)) & 0xffff;
        v1 = (int)(v1 + 1);
    }
    v2 = (int)0;
    while ((unsigned short)v2 != 0xc) {
        *(int *)((char *)((char *)g_8c4dc348 + 0x0) + ((unsigned short)v2 << 2)) = (int)(*(int *)((char *)((char *)o + 0x20) + ((unsigned short)v2 << 2)));
        v2 = (int)(v2 + 1);
    }
    v3 = (int)0;
    while (v3 != 0xf) {
        *(int *)((char *)&g_8c4dc2c8->f00 + (v3 << 2)) = (int)(*(int *)((char *)((char *)o + 0x50) + (v3 << 2)));
        v3 = (int)(v3 + 1);
    }
    v4 = (int)0;
    v5 = (int)0;
    while (v5 != 0xf) {
        v6 = (int)*(int *)((char *)&g_8c4dc2c8->f00 + (v5 << 2));
        v7 = (int)0;
        v8 = (S_vv8 *)*(S_g8c4dc2c4_0 **)((char *)&g_8c4dc2c4->f00 + (v5 << 2));
        v9 = v4;
        while (v7 != v6) {
            *(Block36 *)&v8->f00 = ((Block36 *)((char *)o + 0x8c))[v9++];
            call_8c1c9730((void *)((int)v8 + 0x10));
            v7 = (int)(v7 + 1);
            v8 = (S_vv8 *)((char *)v8 + 36);
        }
        v4 = v9;
        v5 = (int)(v5 + 1);
    }
    v10 = (int)(((g_8c4db248 & 1)) != 0);
    if (v10 != 0 && g_8c4dc2c4->f00 != 0) {
        v11 = (int)0;
        while (v11 != g_8c4dc2c8->f00) {
            v12 = (S_vv12 *)(g_8c4dc2c4->f00 + v11 * 0x24);
            t1 = find_record_8c0744dc((int)(v12->f1c));
            if (t1 == 0) {
                operation_8c162de4((void *)v12, 1);
            }
            v11 = (int)(v11 + 1);
        }
    }
    g_8c4dc2d8 |= 1;
}
