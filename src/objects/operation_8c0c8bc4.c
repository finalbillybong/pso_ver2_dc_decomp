typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46f9f0 S_g8c46f9f0;
typedef struct S_g8c46fa04 S_g8c46fa04;
extern S_g8c46f9f0 *g_8c46f9f0;
extern S_g8c46fa04 *g_8c46fa04;
extern void destroy_node_array(void *, short);
extern void resource_lookup_noop(void);
extern void call_8c03dc40(void *, int);
void operation_8c0c8bc4(void)
{
    destroy_node_array(g_8c46fa04, (short)1);
    g_8c46fa04 = (S_g8c46fa04 *)0;
    resource_lookup_noop();
    if (g_8c46f9f0 != 0) {
        call_8c03dc40(g_8c46f9f0, 1);
        g_8c46f9f0 = (S_g8c46f9f0 *)0;
    }
}
