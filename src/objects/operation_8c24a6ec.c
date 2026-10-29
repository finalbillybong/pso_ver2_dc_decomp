typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x52112 S_x52112;
typedef struct S_x63024_0 S_x63024_0;
struct S_x52112 {
    float f00;
};
struct Object {
    char unknown0[0xe8];
    float fe8;
};
extern void call_8c05fbf8(void *, int, int, int);
void operation_8c24a6ec(Object *o)
{
    int v6;
    int v5;
    int v1;
    int v2;
    int v3;
    int v4;
    int pm1;
    v1 = 0x138;
    v2 = 0x130;
    v3 = 0x124;
    v5 = 0;
    v4 = 0x134;
    while (8 > v5) {
        int pm2;
        int v6;
        int pm3;
        pm3 = (int)o;
        pm1 = pm3;
        pm2 = 0x18;
        v6 = (v5 * pm2);
        if (!(0 != *(int *)(((char *)(pm1 + v1) + 0x0) + (v6))) && !(((S_x52112 *)(v6 + ((int)o + v2)))->f00 > o->fe8)) {
            call_8c05fbf8((void *)(*(S_x63024_0 **)((v6) + ((char *)((int)o + v4) + 0x0))), (v3 + ((int)o + v6)), 0, 0);
            *(int *)((v6) + ((char *)((int)o + v1) + 0x0)) = 1;
        }
        v5 = (int)(v5 + 1);
    }
}
