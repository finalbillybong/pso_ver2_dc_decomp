typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c47061c S_g8c47061c;
typedef struct S_g8c47062c S_g8c47062c;
typedef struct S_g8c470630 S_g8c470630;
extern S_g8c47061c *g_8c47061c;
extern S_g8c47062c *g_8c47062c;
extern S_g8c470630 *g_8c470630;
extern void operation_8c10406c(void);
extern void destroy_node_array(void *, short);
extern void destroy_vector_grid(void *, int);
extern void call_8c03dc40(void *, int);
void operation_8c0f4864(void)
{
    operation_8c10406c();
    destroy_node_array(g_8c470630, (short)1);
    g_8c470630 = (S_g8c470630 *)0;
    destroy_vector_grid(g_8c47062c, 1);
    g_8c47062c = (S_g8c47062c *)0;
    if (g_8c47061c != 0) {
        call_8c03dc40(g_8c47061c, 1);
        g_8c47061c = (S_g8c47061c *)0;
    }
}
