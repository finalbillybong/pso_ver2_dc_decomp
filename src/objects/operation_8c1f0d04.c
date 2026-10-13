typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1f0db4(void);
extern void call_8c1f0db8(void);
extern void call_8c1f0dbc(void);
extern void call_8c1f0e28(void);
extern void call_8c1f0fc0(void);
extern void call_8c1f1034(void);
extern void call_8c1f10c8(void);
extern void call_8c1f10cc(void);
void operation_8c1f0d04(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        call_8c1f0db4();
        return;
    case 2:
        call_8c1f0db8();
        return;
    case 3:
        call_8c1f0dbc();
        return;
    case 8:
        call_8c1f0e28();
        return;
    case 5:
        call_8c1f0fc0();
        return;
    case 0:
        call_8c1f1034();
        return;
    case 1:
        call_8c1f10c8();
        return;
    case 6:
        call_8c1f10cc();
        return;
    case 4:
        break;
    }
}
