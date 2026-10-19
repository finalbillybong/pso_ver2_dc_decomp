typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41cb68 S_g8c41cb68;
extern S_g8c41cb68 *g_8c41cb68;
extern void call_8c3843a8(void *);
void operation_8c01cf44(void)
{
    call_8c3843a8(g_8c41cb68);
    g_8c41cb68 = (S_g8c41cb68 *)((int)g_8c41cb68 + 0x40);
}
