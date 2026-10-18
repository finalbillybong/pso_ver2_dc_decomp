typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void handle_event_8c05d0f4(void *, int);
extern void operation_8c05d130(void *, int);
extern void operation_8c05d248(void *, int);
extern void call_8c05d34c(int, int);
extern void call_8c05d610(int, int);
extern void call_8c05d864(int, int);
extern void call_8c05dc34(int, int);
extern void call_8c05dda8(int, int);
extern void call_8c05da80(int, int);
extern void call_8c05df74(int, int);
extern void call_8c05e0a4(int, int);
extern void operation_8c05df54(void *, int);
void operation_8c05ce40(int a0, int a1, int a2)
{
    switch (a1) {
    case 0:
        handle_event_8c05d0f4((void *)a0, a2);
        return;
    case 1:
        operation_8c05d130((void *)a0, a2);
        return;
    case 2:
        operation_8c05d248((void *)a0, a2);
        return;
    case 3:
        call_8c05d34c(a0, a2);
        return;
    case 4:
        call_8c05d610(a0, a2);
        return;
    case 5:
        call_8c05d864(a0, a2);
        return;
    case 9:
        call_8c05dc34(a0, a2);
        return;
    case 10:
        call_8c05dda8(a0, a2);
        return;
    case 6:
        call_8c05da80(a0, a2);
        return;
    case 7:
        call_8c05df74(a0, a2);
        return;
    case 8:
        call_8c05e0a4(a0, a2);
        return;
    case 11:
        operation_8c05df54((void *)a0, a2);
        return;
    }
}
