typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
extern int call_8c247730(int, int);
void operation_8c2476a8(Object *o, int a1)
{
    int v1;
    int t1;
    v1 = (int)0;
    while (0x13 > v1) {
        t1 = call_8c247730((int)(o), v1);
        if ((char)t1 > (char)a1) {
            *(char *)((char *)((char *)o + 0x48) + ((short)v1)) = a1;
        }
        v1 = (int)(v1 + 1);
    }
}
