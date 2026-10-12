typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c28581c S_L8c28581c;
typedef struct S_L8c285824 S_L8c285824;
typedef struct S_L8c28582c S_L8c28582c;
typedef struct S_g8c46fc6c S_g8c46fc6c;
typedef struct S_g8c46fc70 S_g8c46fc70;
typedef struct S_g8c46fc78 S_g8c46fc78;
struct S_L8c28581c {
    char unknown0[0x4];
    int f04;
};
struct S_L8c285824 {
    char unknown0[0x4];
    int f04;
};
struct S_L8c28582c {
    char unknown0[0x4];
    int f04;
};
extern S_L8c28581c g_8c28581c;
extern S_L8c285824 g_8c285824;
extern S_L8c28582c g_8c28582c;
extern void call_8c05b97c(int, void *, void *, void *);
void operation_8c0d2148(int a0)
{
    call_8c05b97c(a0, *(S_g8c46fc6c **)((char *)0x8c46fc6c + ((&g_8c28581c)->f04 << 2)), *(S_g8c46fc70 **)((char *)0x8c46fc70 + ((&g_8c285824)->f04 << 2)), *(S_g8c46fc78 **)((char *)0x8c46fc78 + ((&g_8c28582c)->f04 << 2)));
}
