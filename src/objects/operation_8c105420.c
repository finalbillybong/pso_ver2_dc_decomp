typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c30b618 S_g8c30b618;
struct S_g8c30b618 {
    int f00;
    int f04;
    int f08;
    char unknownc[0x18];
    int f24;
};
extern void call_8c380516(void);
int operation_8c105420(int a0, int a1)
{
    (*(S_g8c30b618 **)0x8c30b618)->f00 = 1;
    (*(S_g8c30b618 **)0x8c30b618)->f04 = a0;
    (*(S_g8c30b618 **)0x8c30b618)->f08 = a1;
    (*(S_g8c30b618 **)0x8c30b618)->f24 = 1;
    do {
        call_8c380516();
    } while ((*(S_g8c30b618 **)0x8c30b618)->f24 != 0);
    return (*(S_g8c30b618 **)0x8c30b618)->f04;
}
