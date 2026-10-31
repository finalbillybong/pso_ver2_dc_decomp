typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_vv12 S_vv12;
struct S_vv12 {
    short f00;
};
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int lookup_low_id(int);
extern int allocate_block(void *, unsigned int);
extern void operation_8c242354(void *, short, int);
void operation_8c242054(Object *o)
{
    int v14;
    int v1;
    int v21;
    int v22;
    S_vv12 *v12;
    int v4;
    int v24;
    int v2;
    int t1;
    int v3;
    v1 = (int)0;
    while (0xc > v1) {
        v2 = (int)(v1 << 2);
        v3 = (int)(*(int *)((char *)0x8c510be0 + (v2)) - (int)*(int *)((char *)((char *)o + 0x20) + (v2)));
        if (v3 != 0) {
            t1 = lookup_low_id(v1);
            if (t1 != 0) {
                v4 = 0;
                for (; v3 >= v4; ) {
                    v4 += 1;
                }
            }
        }
        v1 = (int)(v1 + 1);
    }
    v1 = (int)0;
    while (0xc > v1) {
        if (*(int *)((v1 << 2) + (char *)0x8c510be0) >= 2) {
            v14 = lookup_low_id(v1);
            if (v14 != 0) {
                int t3;
                v14 = (int)v14;
                t3 = allocate_block(g_8c4d97e0, (unsigned int)0x28);
                if (0 != t3) {
                    v12 = (S_vv12 *)(v14 + 0x20);
                    v14 = (int)v12;
                    operation_8c242354((void *)t3, v12->f00, (int)g_8c44bea0);
                }
            }
            v3 = (int)v14;
        }
        v1 = (int)(v1 + 1);
    }
    v21 = 0xffff;
    v14 = (int)0;
    while (0xc > v14) {
        v22 = (int)(v14 << 2);
        *(int *)((char *)(0x20 + (char *)o) + (v22)) = (int)((char *)*(int *)((char *)0x8c510be0 + (v22)));
        v14 = (v14 + 1);
        *(int *)((char *)0x8c510be0 + (v22)) = 0;
        *(int *)((char *)0x8c510c40 + (v22)) = v21;
    }
    v24 = (int)0;
    while (0xc > v24) {
        *(int *)((char *)0x8c510c10 + (v24 << 2)) -= 1;
        if (!(*(int *)((char *)0x8c510c10 + (v24 << 2)) >= 0)) {
            *(int *)((char *)0x8c510c10 + (v24 << 2)) = 0;
        }
        v24 = (int)(v24 + 1);
    }
}
