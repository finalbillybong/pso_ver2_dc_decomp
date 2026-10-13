typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_44 Arg0_44;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x22];
    Arg0_44 *f44;
};
struct Arg0_44 {
    char unknown0[0x4];
    unsigned short f04;
};
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
extern int lookup_low_id(int);
extern void operation_8c0dc79c(void *);
extern void operation_8c0dc710(void *);
void operation_8c0dd13c(Object *o)
{
    int v1;
    int t1;
    if (o->f44 != 0 && ((o->f44->f04 & 4)) == 0) {
        t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        if (*(int *)0x8c4dbde0 == 0) {
            v1 = (int)0;
        } else {
            v1 = (int)((*(S_g8c4dbde0 **)0x8c4dbde0)->f20 & 1);
        }
        if (v1 != 0 || ((o->f20 & 1)) != 0 || ((o->f20 & 0x20)) != 0 || t1 == 0) {
            operation_8c0dc79c((void *)(o->f44));
            return;
        }
        operation_8c0dc710((void *)(o->f44));
    }
}
