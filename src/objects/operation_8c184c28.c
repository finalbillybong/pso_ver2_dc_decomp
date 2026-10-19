typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
void operation_8c184c28(Object *o, int a1)
{
    int v1;
    int v2;
    v1 = (int)o;
    v2 = (int)0;
    while (4 > v2) {
        if ((*(unsigned short *)((char *)((char *)o + 0x78) + (v2 << 2)) & 0xffff) == (unsigned short)a1) {
            *(unsigned short *)((char *)((char *)o + 0x78) + (v2 << 2)) = 0xffff;
            *(short *)((char *)((char *)v1 + 0x7a) + (v2 << 2)) = -1;
            return;
        }
        v2 = (int)(v2 + 1);
    }
}
