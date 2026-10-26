typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
void operation_8c184c5c(Object *o, int a1)
{
    int v1;
    v1 = (int)0;
    while (4 > v1) {
        if ((*(volatile unsigned short *)((char *)((char *)o + 0x78) + (v1 << 2)) & 0xffff) == (unsigned short)a1) {
            break;
        }
        v1 = (int)(v1 + 1);
    }
}
