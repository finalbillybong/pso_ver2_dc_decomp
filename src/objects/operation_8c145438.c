typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c1456a8(void *, int);
extern void call_8c145714(int, int);
extern void operation_8c145e80(void *, int);
extern void call_8c1462e0(int, int, int, int);
extern void call_8c146bf4(int, int, int, int);
extern void call_8c14768c(int, int);
extern void call_8c147e28(int, int, int);
extern void call_8c148718(int, int, int);
extern void call_8c148acc(int, int, int);
extern void call_8c149314(int, int, int);
extern void call_8c148e80(int, int);
extern void call_8c1496ec(int, int, int);
extern void operation_8c1498cc(void *, int);
extern void call_8c149af0(int, int);
extern void operation_8c14a4a4(void *, int, int);
extern void operation_8c14a5ec(void *, int);
extern void call_8c14a6fc(int, int);
extern void call_8c14ad80(int, int);
void operation_8c145438(int a0, int a1, int a2)
{
    switch (a1) {
    case 0:
        operation_8c1456a8((void *)a0, a2);
        return;
    case 1:
        call_8c145714(a0, a2);
        return;
    case 2:
        operation_8c145e80((void *)a0, a2);
        return;
    case 3:
        call_8c1462e0(a0, a2, 0, 1);
        return;
    case 4:
        call_8c146bf4(a0, a2, 0, 2);
        return;
    case 5:
        call_8c1462e0(a0, a2, 0, 3);
        return;
    case 6:
        call_8c1462e0(a0, a2, 1, 2);
        return;
    case 8:
        call_8c1462e0(a0, a2, 1, 0);
        return;
    case 9:
        call_8c1462e0(a0, a2, 2, 3);
        return;
    case 10:
        call_8c146bf4(a0, a2, 2, 0);
        return;
    case 11:
        call_8c1462e0(a0, a2, 2, 1);
        return;
    case 12:
        call_8c1462e0(a0, a2, 3, 0);
        return;
    case 13:
        call_8c14768c(a0, a2);
        return;
    case 14:
        call_8c1462e0(a0, a2, 3, 2);
        return;
    case 18:
        call_8c147e28(a0, a2, 0);
        return;
    case 19:
        call_8c147e28(a0, a2, 2);
        return;
    case 20:
        call_8c148718(a0, a2, 0);
        return;
    case 21:
        call_8c148718(a0, a2, 2);
        return;
    case 22:
        call_8c148acc(a0, a2, 0);
        return;
    case 23:
        call_8c148acc(a0, a2, 2);
        return;
    case 16:
        call_8c149314(a0, a2, 0);
        return;
    case 17:
        call_8c149314(a0, a2, 2);
        return;
    case 15:
        call_8c148e80(a0, a2);
        return;
    case 24:
        call_8c1496ec(a0, a2, 0x18);
        return;
    case 25:
        call_8c1496ec(a0, a2, 0x19);
        return;
    case 26:
        operation_8c1498cc((void *)a0, a2);
        return;
    case 27:
        call_8c149af0(a0, a2);
        return;
    case 28:
        operation_8c14a4a4((void *)a0, a2, 0);
        return;
    case 29:
        operation_8c14a4a4((void *)a0, a2, 1);
        return;
    case 30:
        operation_8c14a5ec((void *)a0, a2);
        return;
    case 31:
        call_8c14a6fc(a0, a2);
        return;
    case 32:
        call_8c14ad80(a0, a2);
        return;
    case 7:
        break;
    }
}
