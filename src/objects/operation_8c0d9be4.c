typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x310];
    int f310;
};
extern int operation_8c025fe8(void *, int);
extern int operation_8c02606c(void *, int);
extern int operation_8c02617c(void *, int);
extern int operation_8c1ead94(void *, int);
extern int operation_8c1ecae8(void *, int);
extern int current_mode_active(void);
char operation_8c0d9be4(int a0, Arg1 *a1, int a2)
{
    int ty;
    int id;
    int v1;
    ty = (unsigned short)operation_8c025fe8((void *)a1, a2);
    id = (unsigned short)operation_8c02606c((void *)a1, a2);
    switch (ty) {
    case 1:
        if (operation_8c02617c((void *)a1, 0) == 0) {
            break;
        }
        return 1;
    case 2:
        if (operation_8c1ead94((void *)a1, id) == 0) {
            break;
        }
        return 2;
    case 3:
        if (operation_8c1ecae8((void *)a1, id) == 0) {
            break;
        }
        return *(char *)((char *)0x8c307340 + id);
    case 4:
        if (operation_8c02617c((void *)a1, a2) == 0) {
            break;
        }
        if (current_mode_active() == 0) {
            break;
        }
        v1 = (int)(((a1->f310 & 0x43001e)) != 0);
        if (v1 == 0) {
            break;
        }
        if (!((unsigned int)1 >= (unsigned int)(id - 9))) {
            break;
        }
        return 0xf;
    case 6:
        return id + 3;
    case 5:
    default:
        return 0;
    }
    return 0;
}
