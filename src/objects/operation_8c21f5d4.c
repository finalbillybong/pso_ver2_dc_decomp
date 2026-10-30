typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
int operation_8c21f5d4(Object *o)
{
    int v1;
    int pm3;
    int v3;
    int pm2;
    int v2;
    v2 = 0;
    pm2 = 0xff;
    v3 = (int)0;
    v1 = pm2;
    for (; 4 > v3; ) {
        int pm1;
        pm2 = v3 << 1;
        pm1 = *(volatile unsigned short *)((pm2) + (char *)(0x20 + (char *)o)) & 0xffff;
        if (!((unsigned char)(pm1) == v1)) {
            v2 = v2 + 1;
        }
        pm3 = v3 + 1;
        v3 = pm3;
    }
    return (int)(v2);
}
