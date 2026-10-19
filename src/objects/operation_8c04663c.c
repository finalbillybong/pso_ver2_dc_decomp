typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x284];
    int f2bc;
};
extern void create_effect(void *, int, int);
void operation_8c04663c(Object *o, int a1)
{
    if (((o->f34 & 0x2000000)) == 0) {
        switch (o->f2bc) {
        case 1:
            create_effect((void *)a1, 0xf1, 0x40);
            return;
        case 2:
            create_effect((void *)a1, 0xf2, 0x40);
            return;
        case 4:
            create_effect((void *)a1, 0xe3, 0x40);
            return;
        case 8:
            create_effect((void *)a1, 0x10d, 0x40);
        }
    }
}
