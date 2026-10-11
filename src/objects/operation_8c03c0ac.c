typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
char operation_8c03c0ac(Object *o, int a1)
{
    if (*(char *)((char *)((char *)o + 0x0) + (a1)) >= 0) {
        if (!(*(char *)((char *)((char *)o + 0x0) + (a1)) > 0x14)) {
            goto L_8c03c0c2;
        }
    }
    *(char *)((char *)((char *)o + 0x0) + (a1)) = 0;
L_8c03c0c2:;
    return *(char *)((char *)((char *)o + 0x0) + (a1));
}
