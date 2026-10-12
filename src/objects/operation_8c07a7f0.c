typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469a9c S_g8c469a9c;
typedef struct S_g8c469aa0 S_g8c469aa0;
typedef struct S_g8c469aa4 S_g8c469aa4;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x36c];
    int f3a4;
};
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c3aa716(void *);
extern void call_8c38ad10(void);
void operation_8c07a7f0(Object *o)
{
    if (((o->f34 & 0x800)) == 0) {
        if (((o->f3a4 & 0x4000000)) == 0) {
            call_8c3827d8(*(S_g8c469a9c **)0x8c469a9c);
        } else {
            call_8c3827d8(*(S_g8c469aa0 **)0x8c469aa0);
        }
        call_8c38ae68();
        call_8c382a40(((char *)o + 0x3d0));
        call_8c3aa716(*(S_g8c469aa4 **)0x8c469aa4);
        call_8c38ad10();
    }
}
