typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c061674(int, int);
extern void call_8c061790(int, int);
extern void call_8c061a70(int, int);
extern void operation_8c062068(int, int);
extern void operation_8c061bbc(void *, int);
extern void call_8c061cbc(int, int);
extern void call_8c061e40(int, int);
extern void call_8c06206c(int, int);
extern void call_8c06269c(int, int);
extern void call_8c0629a4(int, int);
extern void call_8c062eb8(int, int);
extern void call_8c063614(int, int);
extern void call_8c063b0c(int, int);
extern void call_8c063e94(int, int);
extern void call_8c0641c4(int, int);
extern void call_8c064370(int, int);
extern void call_8c0645d4(int, int);
extern void operation_8c0649f4(void *, int);
void operation_8c06150c(int a0, int a1, int a2)
{
    switch (a1) {
    case 0:
        call_8c061674(a0, a2);
        return;
    case 1:
        call_8c061790(a0, a2);
        return;
    case 2:
        call_8c061a70(a0, a2);
        return;
    case 3:
        operation_8c062068(a0, a2);
        return;
    case 4:
        operation_8c061bbc((void *)a0, a2);
        return;
    case 5:
        call_8c061cbc(a0, a2);
        return;
    case 6:
        call_8c061e40(a0, a2);
        return;
    case 7:
        call_8c06206c(a0, a2);
        return;
    case 8:
        call_8c06269c(a0, a2);
        return;
    case 9:
        call_8c0629a4(a0, a2);
        return;
    case 10:
        call_8c062eb8(a0, a2);
        return;
    case 11:
        call_8c063614(a0, a2);
        return;
    case 12:
        call_8c063b0c(a0, a2);
        return;
    case 13:
        call_8c063e94(a0, a2);
        return;
    case 14:
        call_8c0641c4(a0, a2);
        return;
    case 15:
        call_8c064370(a0, a2);
        return;
    case 16:
        call_8c0645d4(a0, a2);
        return;
    case 17:
        operation_8c0649f4((void *)a0, a2);
        return;
    }
}
