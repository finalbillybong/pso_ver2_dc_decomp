typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_vv7 S_vv7;
struct S_c8c021ef8 {
    char unknown0[0x308];
    short f308;
};
struct S_vv7 {
    char unknown0[0xe8];
    int fe8;
};
extern int g_8c418248;
extern int g_8c418258;
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c03b55c(void *, int);
extern void operation_8c022538(void *, int);
void operation_8c163d74(int a0, int a1)
{
    int v1;
    int v2;
    S_vv7 *v7;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    t1 = lookup_low_id((int)((unsigned short)a0));
    if (t1 != 0) {
        v1 = (int)(t1->f308 == 1);
        if (v1 != 1) {
            v2 = (int)(t1->f308 == 3);
            if (v2 != 1) {
                return;
            }
            if (g_8c418248 != g_8c418258) {
                return;
            }
        }
        v7 = (S_vv7 *)0;
        switch (a1) {
        case 0:
            t2 = call_8c03b55c((void *)(((char *)t1 + 0xbcc)), 6);
            v7 = (S_vv7 *)t2;
            break;
        case 1:
            t3 = call_8c03b55c((void *)(((char *)t1 + 0xbcc)), 2);
            v7 = (S_vv7 *)t3;
            break;
        case 2:
            t4 = call_8c03b55c((void *)(((char *)t1 + 0xbcc)), 3);
            v7 = (S_vv7 *)t4;
            break;
        case 3:
            t5 = call_8c03b55c((void *)(((char *)t1 + 0xbcc)), 1);
            v7 = (S_vv7 *)t5;
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            t6 = call_8c03b55c((void *)(((char *)t1 + 0xbcc)), (int)(a1 + 5));
            v7 = (S_vv7 *)t6;
        }
        if (v7 != 0) {
            operation_8c022538((void *)t1, (int)(v7->fe8));
        }
    }
}
