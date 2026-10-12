typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be0c S_g8c44be0c;
typedef struct S_g8c44be0c_c S_g8c44be0c_c;
typedef struct S_g8c44be24 S_g8c44be24;
typedef struct S_g8c44be28 S_g8c44be28;
typedef struct S_g8c44be2c S_g8c44be2c;
typedef struct S_g8c44be30 S_g8c44be30;
typedef struct S_g8c44be34 S_g8c44be34;
struct S_g8c44be0c {
    char unknown0[0xc];
    S_g8c44be0c_c *f0c;
};
extern void call_8c011ec0(void *);
extern void call_8c37d534(void *);
void operation_8c030ff0(void)
{
    if (*(int *)0x8c44be24 != 0) {
        call_8c011ec0(*(S_g8c44be24 **)0x8c44be24);
        *(int *)0x8c44be24 = 0;
    }
    if (*(int *)0x8c44be0c != 0 && (*(S_g8c44be0c **)0x8c44be0c)->f0c != 0) {
        call_8c37d534((*(S_g8c44be0c **)0x8c44be0c)->f0c);
        (*(S_g8c44be0c **)0x8c44be0c)->f0c = (S_g8c44be0c_c *)0;
    }
    if (*(int *)0x8c44be30 != 0) {
        call_8c011ec0(*(S_g8c44be30 **)0x8c44be30);
        *(int *)0x8c44be30 = 0;
    }
    if (*(int *)0x8c44be2c != 0) {
        call_8c011ec0(*(S_g8c44be2c **)0x8c44be2c);
        *(int *)0x8c44be2c = 0;
    }
    if (*(int *)0x8c44be28 != 0) {
        call_8c011ec0(*(S_g8c44be28 **)0x8c44be28);
        *(int *)0x8c44be28 = 0;
    }
    if (*(int *)0x8c44be34 != 0) {
        call_8c011ec0(*(S_g8c44be34 **)0x8c44be34);
        *(int *)0x8c44be34 = 0;
    }
    *(int *)0x8c417760 = 0;
}
