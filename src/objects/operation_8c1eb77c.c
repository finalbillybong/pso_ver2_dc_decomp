typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1eb82c(void);
extern void call_8c1eb838(void);
extern void call_8c1eb920(void);
extern void call_8c1eb9f4(void);
extern void call_8c1eb9f8(void);
extern void call_8c1ebb98(void);
extern void call_8c1ebcd0(void);
extern void reset_offsets_8c1ebcdc(void *);
void operation_8c1eb77c(int a0, int a1)
{
    switch ((short)a1) {
    case 7:
        call_8c1eb82c();
        return;
    case 2:
        call_8c1eb838();
        return;
    case 3:
        call_8c1eb920();
        return;
    case 8:
        call_8c1eb9f4();
        return;
    case 5:
        call_8c1eb9f8();
        return;
    case 0:
        call_8c1ebb98();
        return;
    case 1:
        call_8c1ebcd0();
        return;
    case 6:
        reset_offsets_8c1ebcdc((void *)a0);
        return;
    case 4:
        break;
    }
}
