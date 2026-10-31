typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
unsigned int operation_8c17e620(unsigned char *p)
{
    unsigned int c;
    int i;
    int j;
    unsigned int k;
    int n;
    k = 0xedb88320;
    n = 0x16fc;
    c = -1;
    for (i = 0; i < n; i++) {
        c ^= p[i];
        for (j = 0; j < 8; j++) {
            if (c & 1) {
                c = c >> 1 ^ k;
            } else {
                c >>= 1;
            }
        }
    }
    return c ^ -1;
}
