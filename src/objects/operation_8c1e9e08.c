typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1e9eb8(void);
extern void call_8c1e9ec4(void);
extern void call_8c1e9ec8(void);
extern void call_8c1e9ecc(void);
extern void call_8c1e9ed0(void);
extern void call_8c1e9ed8(void);
extern void call_8c1e9edc(void);
extern void call_8c1e9ee0(void);
void operation_8c1e9e08(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        call_8c1e9eb8();
        return;
    case 2:
        call_8c1e9ec4();
        return;
    case 3:
        call_8c1e9ec8();
        return;
    case 8:
        call_8c1e9ecc();
        return;
    case 5:
        call_8c1e9ed0();
        return;
    case 0:
        call_8c1e9ed8();
        return;
    case 1:
        call_8c1e9edc();
        return;
    case 6:
        call_8c1e9ee0();
        return;
    case 4:
        break;
    }
}
