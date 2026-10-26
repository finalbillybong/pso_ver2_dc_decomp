typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    int f00;
};
int operation_8c20b458(Object *o, Arg1 *a1)
{
    int v1;
    int v2;
    v1 = (int)0;
    v2 = (int)((int)a1->f00 + -1);
    while (v2 >= 0) {
        if (*(char *)((char *)((char *)o + 0x0) + (v2)) == 0xa) {
            break;
        }
        v1 = (int)(v1 + 1);
        v2 = (int)(v2 + -1);
    }
    return (int)(v1);
}
