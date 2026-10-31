typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x100];
    void *f100;
    char unknown104[0x4];
    int f108;
    int f10c;
};
extern int current_effect_mode(void);
int operation_8c08d7fc(Object *o, int a1)
{
    int v1;
    int v3;
    int (*fn)(int);
    v1 = *(int *)((current_effect_mode() << 2) + (char *)0x8c2ebec8);
    if (v1 == 0) {
        o->f100 = 0;
        return 0;
    }
    v3 = o->f108 << 4;
    fn = (int (*)(int))*(int *)((char *)(v1 + 4) + v3);
    o->f100 = (int *)(v1 + v3);
    o->f10c = o->f108;
    return fn(a1);
}
