typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x3];
    char f03;
    char f04;
    char f05;
    char unknown6[0x6];
    int f0c;
    int f10;
};
struct Object {
    char unknown0[0xe8];
    int fe8;
};
extern void call_8c074ea0(void);
int operation_8c073e5c(Object *o, Arg1 *a1)
{
    int v1;
    if (a1 != 0) {
        call_8c074ea0();
        a1->f0c = o->fe8;
        a1->f03 = 0;
        a1->f05 = 0;
        a1->f04 = 0;
        a1->f10 = 0;
        v1 = (int)0;
        while (v1 != 3) {
            *(char *)((char *)((char *)a1 + 0x6) + (v1 << 1)) = 0;
            *(char *)((char *)((char *)a1 + 0x7) + (v1 << 1)) = 0;
            v1 = (int)(v1 + 1);
        }
        return 1;
    }
    return 0;
}
