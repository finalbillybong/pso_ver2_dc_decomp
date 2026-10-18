typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db520 S_g8c4db520;
struct S_g8c4db520 {
    char unknown0[0xac];
    int fac;
};
extern S_g8c4db520 *g_8c4db520;
void *operation_8c17349c(void)
{
    if (g_8c4db520 != 0) {
        return (void *)(g_8c4db520->fac + 0x14);
    }
    return (void *)0x8c286660;
}
