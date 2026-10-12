typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xc7];
    char fc7;
};
extern void call_8c12b154(int, int, int);
void operation_8c25dd0c(Object *o, int a1)
{
    int v1;
    int v2;
    if (a1 != 0) {
        call_8c12b154((int)((char *)o + 0xa8), a1, 0x1f);
        o->fc7 = 0;
        v1 = (int)0;
        v2 = (int)((char *)o + 0xa8);
        while (v1 != 0x20) {
            if (*(char *)((char *)((char *)v2 + 0x0) + (v1)) == 0xa) {
                *(char *)((char *)((char *)v2 + 0x0) + (v1)) = 0;
            }
            v1 = (int)(v1 + 1);
        }
    }
}
