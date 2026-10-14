typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
struct S_c8c021ef8 {
    char unknown0[0x310];
    int f310;
};
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c1715c4(int a0, int a1)
{
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)(*(S_g8c4db408_0 **)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2))));
    if (t1 == 0) {
    } else {
        v1 = (int)(((t1->f310 & 2)) != 0);
        if (v1 != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 1;
            return;
        }
        v2 = (int)(((t1->f310 & 4)) != 0);
        if (v2 != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 2;
            return;
        }
        v3 = (int)(((t1->f310 & 0x10)) != 0);
        if (v3 != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 3;
            return;
        }
        v4 = (int)(((t1->f310 & 0xe0)) != 0);
        if (v4 != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 4;
            return;
        }
        v5 = (int)(((t1->f310 & 0x100)) != 0);
        if (v5 != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 5;
            return;
        }
        v6 = (int)(((t1->f310 & 0x200)) != 0);
        if (v6 != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 6;
            return;
        }
        v7 = (int)(((t1->f310 & 0x400)) != 0);
        if (v7 != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 7;
            return;
        }
        v8 = (int)(((t1->f310 & 0x6000)) != 0);
        if (v8 != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 8;
            return;
        }
        v9 = (int)(((t1->f310 & 0x8000)) != 0);
        if (v9 != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 9;
            return;
        }
        v10 = (int)(((t1->f310 & 0x10000)) != 0);
        if (v10 != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 0xa;
            return;
        }
        v11 = (int)(((t1->f310 & 0x40000)) != 0);
        if (v11 != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 0xb;
            return;
        }
        v12 = (int)(((t1->f310 & 0x80000)) != 0);
        if (v12 != 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 0xc;
            return;
        }
        *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 0;
        return;
    }
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 0;
}
