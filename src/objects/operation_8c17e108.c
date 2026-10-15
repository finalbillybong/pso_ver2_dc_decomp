typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
typedef struct S_g8c4db9ec S_g8c4db9ec;
typedef struct S_g8c4db9f0 S_g8c4db9f0;
typedef struct S_g8c4db9f4 S_g8c4db9f4;
extern void call_8c011ed8(void *);
extern void operation_8c17e3bc(void);
extern void operation_8c17e42c(void);
void operation_8c17e108(void)
{
    if (*(int *)0x8c4db9e0 != 0) {
        call_8c011ed8((void *)(*(S_g8c4db9e0 **)0x8c4db9e0));
    }
    if (*(int *)0x8c4db9e4 != 0) {
        call_8c011ed8((void *)(*(S_g8c4db9e4 **)0x8c4db9e4));
    }
    if (*(int *)0x8c4db9e8 != 0) {
        call_8c011ed8((void *)(*(S_g8c4db9e8 **)0x8c4db9e8));
    }
    if (*(int *)0x8c4db9ec != 0) {
        call_8c011ed8((void *)(*(S_g8c4db9ec **)0x8c4db9ec));
    }
    if (*(int *)0x8c4db9f0 != 0) {
        call_8c011ed8((void *)(*(S_g8c4db9f0 **)0x8c4db9f0));
    }
    if (*(int *)0x8c4db9f4 != 0) {
        call_8c011ed8((void *)(*(S_g8c4db9f4 **)0x8c4db9f4));
    }
    operation_8c17e3bc();
    operation_8c17e42c();
}
