typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
int operation_8c154d00(Object *o)
{
    int n;
    int v1;
    int v2;
    int pm1;
    short pm2;
    v1 = 0;
    n = 4;
    v2 = (int)0;
    while (n > v2) {
        pm2 = *(short *)((v2 << 1) + (char *)((char *)o + 0x4c8));
        if (!(pm2 > 0)) {
            v1 = (1 + v1);
        }
        pm1 = v2 + 1;
        v2 = (int)(pm1);
    }
    return (int)(v1);
}
