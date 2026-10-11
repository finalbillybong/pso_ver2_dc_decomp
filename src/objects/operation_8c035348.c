typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c460904 S_g8c460904;
typedef struct S_g8c460904_28 S_g8c460904_28;
struct S_g8c460904 {
    char unknown0[0x28];
    S_g8c460904_28 *f28;
    char unknown2c[0x8];
    int f34;
};
int operation_8c035348(void)
{
    return (*(int *)0x8c460904 == 0) ? -1 : *(int *)((char *)0x8c300de0 + (*(int *)((char *)((char *)(*(S_g8c460904 **)0x8c460904)->f28 + 0x0) + ((*(S_g8c460904 **)0x8c460904)->f34 << 2)) * 0x14));
}
