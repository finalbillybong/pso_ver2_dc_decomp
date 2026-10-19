typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
int operation_8c21f544(Object *o, int a1)
{
    int v1;
    int t;
    t = *(volatile unsigned short *)((char *)((char *)o + 0x20) + (a1 << 1));
    v1 = (int)((unsigned char)(unsigned short)(t & 0xffff) != 0xff);
    return (int)(v1);
}
