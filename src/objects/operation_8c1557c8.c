typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daa40 S_g8c4daa40;
extern S_g8c4daa40 *g_8c4daa40;
extern void destroy_node_array(void *, short);
void operation_8c1557c8(void)
{
    destroy_node_array(g_8c4daa40, (short)1);
    g_8c4daa40 = (S_g8c4daa40 *)0;
}
