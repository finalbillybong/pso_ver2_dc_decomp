typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv15 S_vv15;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char f00;
    char f01;
};
struct S_vv15 {
    char f00;
};
extern int operation_8c04b794(int);
int operation_8c04b8dc(char *a0)
{
    float v1;
    unsigned int v23;
    unsigned char v4;
    unsigned char v13;
    unsigned char v14;
    unsigned short t1;
    int v18;
    v1 = 0.0f;
    v23 = 0;
    if (a0 == 0) {
        return v23;
    }
    while (*a0 != 0) {
        v4 = *a0++;
        if (v4 == 0xa) {
            if ((float)v23 > v1) {
                v1 = (float)v23;
            }
            v23 = 0;
        } else if (v4 == 0x20) {
            v23 += 9;
        } else {
            if ((v4 & 0xe0) == 0x80) {
                v14 = v4;
                v13 = *a0++;
            } else {
                v13 = v4;
                v14 = 0;
            }
            t1 = operation_8c04b794((unsigned short)v14 << 8 | v13);
            if (0x21 > t1) {
                v18 = 9;
            } else if (t1 > 0xdf) {
                v18 = 0x12;
            } else {
                v18 = *(int *)((char *)0x8c2f1bf8 + ((unsigned short)(t1 - 0x21) << 2));
            }
            v23 += (unsigned char)v18;
        }
    }
    if ((float)v23 > v1) {
        v1 = (float)v23;
    }
    return (unsigned int)v1;
}
