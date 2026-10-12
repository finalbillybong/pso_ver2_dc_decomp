typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c338c40 S_L8c338c40;
struct S_L8c338c40 {
    unsigned short f00;
    char unknown2[0x6];
    int f08;
};
extern S_L8c338c40 g_8c338c40;
int operation_8c232460(void)
{
    return ((&g_8c338c40)->f00 == 0x544d) ? (&g_8c338c40)->f08 : 0;
}
