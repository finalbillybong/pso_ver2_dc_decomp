typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Arg1 {
    char unknown0[0x18];
    int f18;
    char f1c;
    char unknown1d[0xf];
    int f2c;
    char f30;
    char f31;
    char f32;
    char f33;
    int f34;
    char unknown38[0x10];
    float f48;
    float f4c;
};
struct Arg2 {
    char unknown0[0x18];
    int f18;
    char f1c;
    char unknown1d[0xf];
    int f2c;
    char f30;
    char f31;
    char f32;
    char f33;
    int f34;
    char unknown38[0x10];
    float f48;
    float f4c;
};
int operation_8c260934(int a0, Arg1 *a1, Arg2 *a2)
{
    int v1;
    int v2;
    int v3;
    int v4;
    v1 = (int)0;
    while (0x10 > v1) {
        if (*(char *)((char *)((char *)a1 + 0x0) + (v1)) != *(char *)((char *)((char *)a2 + 0x0) + (v1))) {
            return 0;
        }
        v1 = (int)(v1 + 1);
    }
    v2 = (int)0;
    while (8 > v2) {
        if (*(char *)((char *)((char *)a1 + 0x10) + (v2)) != *(char *)((char *)((char *)a2 + 0x10) + (v2))) {
            return 0;
        }
        v2 = (int)(v2 + 1);
    }
    if (a1->f18 != a2->f18) {
        return 0;
    }
    if (a1->f1c != a2->f1c) {
        return 0;
    }
    v3 = (int)0;
    while (0xf > v3) {
        if (*(char *)((char *)((char *)a1 + 0x1d) + (v3)) != *(char *)((char *)((char *)a2 + 0x1d) + (v3))) {
            return 0;
        }
        v3 = (int)(v3 + 1);
    }
    if (a1->f2c != a2->f2c) {
        return 0;
    }
    if (a1->f30 != a2->f30) {
        return 0;
    }
    if (a1->f31 != a2->f31) {
        return 0;
    }
    if (a1->f32 != a2->f32) {
        return 0;
    }
    if (a1->f33 != a2->f33) {
        return 0;
    }
    if (a1->f34 != a2->f34) {
        return 0;
    }
    v4 = (int)0;
    while (8 > v4) {
        if (*(short *)((char *)((char *)a1 + 0x38) + (v4 << 1)) != *(short *)((char *)((char *)a2 + 0x38) + (v4 << 1))) {
            return 0;
        }
        v4 = (int)(v4 + 1);
    }
    if (a1->f48 != a2->f48 || a1->f4c != a2->f4c) {
        return 0;
    }
    return 1;
}
