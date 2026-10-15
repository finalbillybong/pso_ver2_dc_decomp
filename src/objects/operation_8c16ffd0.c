typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c286618 S_L8c286618;
typedef struct S_L8c4db494 S_L8c4db494;
struct S_L8c4db494 {
    char unknown0[0x7];
    char f07;
};
struct S_L8c286618 {
    char unknown0[0x4];
    int f04;
};
extern S_L8c286618 g_8c286618;
extern S_L8c4db494 g_8c4db494;
void operation_8c16ffd0(unsigned int a0)
{
    if ((unsigned int)1 >= a0) {
        (&g_8c4db494)->f07 = *(int *)((char *)&g_8c286618 + (a0 << 2));
        return;
    }
    (&g_8c4db494)->f07 = (&g_8c286618)->f04;
}
