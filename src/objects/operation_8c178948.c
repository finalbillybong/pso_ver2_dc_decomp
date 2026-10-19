typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db900 S_g8c4db900;
extern S_g8c4db900 *g_8c4db900;
extern void destroy_node_array(void *, short);
void operation_8c178948(void)
{
    destroy_node_array(g_8c4db900, (short)1);
    g_8c4db900 = (S_g8c4db900 *)0;
}
