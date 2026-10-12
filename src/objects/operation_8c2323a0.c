typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_6c S_g8c467180_6c;
typedef struct S_g8c467180_6c_10 S_g8c467180_6c_10;
typedef struct S_g8c467180_6c_14 S_g8c467180_6c_14;
typedef struct S_g8c467180_6c_c S_g8c467180_6c_c;
struct S_g8c467180 {
    char unknown0[0x6c];
    S_g8c467180_6c *f6c;
};
struct S_g8c467180_6c {
    char unknown0[0xc];
    S_g8c467180_6c_c *f0c;
    S_g8c467180_6c_10 *f10;
    S_g8c467180_6c_14 *f14;
};
extern void call_8c12b880(int, int, int);
extern int operation_8c2324a0(void);
extern void call_8c18e720(int, void *);
extern void call_8c12b084(int, void *);
void operation_8c2323a0(int a0)
{
    int t1;
    call_8c12b880(a0 + 0x34, 0, 0x5dc);
    t1 = operation_8c2324a0();
    if (t1 != 0) {
        call_8c18e720(a0 + 0x34, (*(S_g8c467180 **)0x8c467180)->f6c->f14);
        call_8c12b084(a0 + 0x34, (*(S_g8c467180 **)0x8c467180)->f6c->f10);
        return;
    }
    call_8c18e720(a0 + 0x34, (*(S_g8c467180 **)0x8c467180)->f6c->f0c);
}
