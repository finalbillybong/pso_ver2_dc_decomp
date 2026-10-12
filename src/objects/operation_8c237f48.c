typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
typedef struct S_g8c44bea0 S_g8c44bea0;
struct S_L8c339ca0 {
    char unknown0[0x34];
    int f34;
};
extern S_g8c44bea0 *g_8c44bea0;
extern S_L8c339ca0 g_8c339ca0;
extern void call_8c237f94(int);
extern void create_object_8c253358(void *);
extern void operation_8c25312c(int);
extern void operation_8c25f16c(int);
void operation_8c237f48(int a0)
{
    call_8c237f94(a0);
    create_object_8c253358(g_8c44bea0);
    operation_8c25312c((int)g_8c44bea0);
    if ((&g_8c339ca0)->f34 == 0) {
        operation_8c25f16c((int)g_8c44bea0);
    }
}
