typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d51d4 S_L8c4d51d4;
typedef struct S_L8c4d51d4_8 S_L8c4d51d4_8;
struct S_L8c4d51d4 {
    char unknown0[0x8];
    S_L8c4d51d4_8 *f08;
};
extern S_L8c4d51d4 g_8c4d51d4;
extern void call_8c3507fe(void *, int);
void operation_8c100b20(int a0)
{
    call_8c3507fe((void *)((&g_8c4d51d4)->f08), a0);
}
