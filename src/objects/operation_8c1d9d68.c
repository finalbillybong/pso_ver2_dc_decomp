typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2f0c S_g8c4e2f0c;
typedef struct S_g8c4e2f10 S_g8c4e2f10;
typedef struct S_g8c4e2f20 S_g8c4e2f20;
typedef struct S_vv62_0 S_vv62_0;
extern S_g8c4e2f0c *g_8c4e2f0c;
extern S_g8c4e2f10 *g_8c4e2f10;
extern int g_8c4e2f14;
extern int g_8c4e2f18;
extern int g_8c4e2f1c;
extern S_g8c4e2f20 *g_8c4e2f20;
extern void destroy_node_array(void *, short);
extern void call_8c03dc40(void *, int);
void operation_8c1d9d68(void)
{
    int v61;
    int v62;
    if (g_8c4e2f20 != 0) {
        destroy_node_array(g_8c4e2f20, (short)1);
        g_8c4e2f20 = (S_g8c4e2f20 *)0;
    }
    if (g_8c4e2f10 != 0) {
        call_8c03dc40(g_8c4e2f10, 1);
        g_8c4e2f10 = (S_g8c4e2f10 *)0;
    }
    g_8c4e2f1c = 0;
    g_8c4e2f14 = 0;
    g_8c4e2f18 = 0;
    if (g_8c4e2f0c != 0) {
        destroy_node_array(g_8c4e2f0c, (short)1);
        g_8c4e2f0c = (S_g8c4e2f0c *)0;
    }
    v61 = (int)5;
    while (v61 >= 0) {
        v62 = (int)(v61 << 2);
        if (*(int *)((char *)((char *)v62 + 0x0) + ((int)((void *)0x8c4e2edc))) != 0) {
            call_8c03dc40((void *)(*(S_vv62_0 **)((char *)((char *)v62 + 0x0) + ((int)((void *)0x8c4e2edc)))), 1);
        }
        *(int *)((char *)((char *)v62 + 0x0) + ((int)((void *)0x8c4e2edc))) = 0;
        *(int *)((char *)((char *)v62 + 0x0) + ((int)((void *)0x8c4e2ef4))) = 0;
        v61 = (int)(v61 + -1);
    }
}
