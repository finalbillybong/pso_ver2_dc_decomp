typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be04 S_g8c44be04;
extern void call_8c09e188(void *, int, int);
extern void call_8c09e850(void *, int, int, int, int);
void operation_8c206d8c(int a0)
{
    switch (a0) {
    case 0:
        call_8c09e188((void *)(*(S_g8c44be04 **)0x8c44be04), 0, 1);
        call_8c09e188((void *)(*(S_g8c44be04 **)0x8c44be04), 0, 3);
        return;
    case 1:
        call_8c09e188((void *)(*(S_g8c44be04 **)0x8c44be04), 0, 3);
    case 3:
        call_8c09e188((void *)(*(S_g8c44be04 **)0x8c44be04), 0, 2);
        call_8c09e850((void *)(*(S_g8c44be04 **)0x8c44be04), 0, 2, -0x11, 0);
        return;
    case 2:
        call_8c09e188((void *)(*(S_g8c44be04 **)0x8c44be04), 0, 3);
    case 4:
        call_8c09e188((void *)(*(S_g8c44be04 **)0x8c44be04), 0, 2);
    }
}
