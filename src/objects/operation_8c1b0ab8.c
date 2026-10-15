typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
};
extern void call_8c391cc4(void);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c38efbc(int, int, int);
extern void call_8c38ad10(void);
void operation_8c1b0ab8(Object *o)
{
    char *v1;
    v1 = (char *)o->f24;
    call_8c391cc4();
    call_8c38ae68();
    call_8c382a40((void *)(((char *)o + 0x28)));
    call_8c38efbc((int)((int)(v1) * 0x60 + 0x8c4e243c), 6, 0);
    call_8c38ad10();
}
