typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x20];
    unsigned short f20;
};
extern int lookup_low_id(int);
int operation_8c184c80(Object *o, Arg1 *a1)
{
    int v4;
    int v2;
    int v1;
    int t1;
    v1 = (int)0x37c;
    v2 = (int)0;
    while (0xc > v2) {
        v4 = (int)(((*(int *)((char *)((char *)o + 0x48) + (v2 << 2)) & 4)) != 0);
        if (v4 != 0) {
            t1 = lookup_low_id(v2);
            if (t1 != 0 && v2 != a1->f20 && *(int *)((char *)((char *)t1 + 0x0) + (v1)) == *(int *)((char *)((char *)a1 + 0x0) + (v1))) {
                return (int)(v2);
            }
        }
        v2 = (int)(v2 + 1);
    }
    return 0xffff;
}
