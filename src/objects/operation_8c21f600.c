typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
int operation_8c21f600(Object *o)
{
    int v3;
    int v2;
    char v1;
    v2 = (int)0;
    v1 = (char)-1;
    v3 = (int)0;
    while (0xc > v3) {
        if (*(char *)((char *)((char *)o + 0x28) + (v3 << 2)) == v1) {
            v2 = (int)(v2 + 1);
        }
        v3 = (int)(v3 + 1);
    }
    return (int)(v2);
}
