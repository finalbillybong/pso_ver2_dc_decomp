typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
extern int call_8c18e768(int, int);
int operation_8c245484(Object *o, int a1, int a2)
{
    int v1;
    int v2;
    int t1;
    int v6;
    v2 = (int)(a1 + -1);
    v1 = (int)0;
    while (v2 > v1) {
        t1 = call_8c18e768((int)(v1 + v2), 2);
        if (a2 > *(short *)((char *)((char *)o + 0x18) + (t1 << 5))) {
            v1 = (int)(t1 + 1);
        } else {
            v2 = (int)t1;
        }
    }
    if (*(short *)((char *)((char *)o + 0x18) + (v1 << 5)) == a2) {
        v6 = (int)&*(int *)((char *)((char *)o + 0x0) + (v1 << 5));
    } else {
        v6 = (int)0;
    }
    return (int)(v6);
}
