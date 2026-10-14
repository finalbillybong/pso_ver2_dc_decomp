typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db494 S_L8c4db494;
struct S_L8c4db494 {
    char unknown0[0xb];
    char f0b;
};
extern S_L8c4db494 g_8c4db494;
void operation_8c170878(unsigned int a0)
{
    if ((unsigned int)2 >= a0) {
        (&g_8c4db494)->f0b = *(int *)((char *)0x8c286640 + (a0 << 2));
    }
}
