typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    int f04;
    int f08;
    int f0c;
    char unknown10[0x408];
    int f418;
    char unknown41c[0x18];
    int f434;
    int f438;
    int f43c;
};
extern char g_8c2ef0e4[];
extern void operation_8c03eb90(void *);
extern void call_8c03ed70(void *);
void operation_8c03e264(Object *o)
{
    if (!(o->f434 > o->f04) && !(o->f438 > o->f08) && !(o->f43c > o->f0c)) {
        operation_8c03eb90((void *)o);
        o->f418 = 0;
        call_8c03ed70((void *)((g_8c2ef0e4 + 0x1b)));
    }
}
