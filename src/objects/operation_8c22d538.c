typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011e9c S_c8c011e9c;
struct S_c8c011e9c {
    char unknown0[0x4];
    int f04;
};
extern S_c8c011e9c *call_8c011e9c(int);
extern void call_8c3889a4(S_c8c011e9c *, int, int);
extern void call_8c011ec0(S_c8c011e9c *, int);
int operation_8c22d538(int a0, unsigned int a1)
{
    S_c8c011e9c *t1;
    int v1;
    unsigned int crc;
    unsigned int v3;
    int v5;
    int *p;
    unsigned int k;
    t1 = call_8c011e9c(a1);
    if (t1 == 0) {
        return 0;
    }
    call_8c3889a4(t1, a0, a1);
    p = &t1->f04;
    v1 = *p;
    *p = 0;
    crc = -1;
    k = 0xedb88320;
    for (v3 = 0; v3 < a1; v3++) {
        crc ^= *(unsigned char *)(v3 + (int)t1);
        for (v5 = 0; v5 < 8; v5++) {
            if (crc & 1) {
                crc = (crc >> 1) ^ k;
            } else {
                crc >>= 1;
            }
        }
    }
    call_8c011ec0(t1, v3);
    return v1 == (crc ^ -1);
}
