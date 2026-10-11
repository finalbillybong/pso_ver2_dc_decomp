typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_c S_g8c467180_c;
struct S_g8c467180 {
    char unknown0[0xc];
    S_g8c467180_c *f0c;
};
struct S_g8c467180_c {
    char unknown0[0x584];
    int f584;
};
int operation_8c1583d4(int a0)
{
    if ((((unsigned char)a0 & 0x7f)) != 0) {
        if ((((unsigned char)a0 & 0x80)) != 0) {
            return (*(S_g8c467180 **)0x8c467180)->f0c->f584;
        }
        if ((unsigned char)a0 != 0) {
            if ((unsigned int)0x29 > (unsigned int)(unsigned char)a0) {
                return *(int *)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f0c + 0x0) + ((unsigned char)a0 + 0x138 << 2));
            }
        }
    }
    return *(int *)0x8c30b600;
}
