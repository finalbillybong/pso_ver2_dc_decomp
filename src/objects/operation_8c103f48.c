typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv14 S_vv14;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    float f00;
    float f04;
    float f08;
};
struct S_vv14 {
    int f00;
};
extern float call_8c37eb0c(int);
extern float call_8c38c154(int);
extern int call_8c12b944(void);
extern float call_8c12b570(float);
void operation_8c103f48(void)
{
    int v1;
    int v15;
    int v2;
    S_vv4 *v4;
    int v16;
    int v5;
    int v12;
    S_vv14 *v14;
    int v3;
    int v13;
    float t1;
    float t2;
    int t3;
    int t4;
    int t5;
    float t6;
    float t7;
    float t8;
    v1 = (int)0;
    v2 = (int)(void *)0x8c4d5a40;
    v4 = (S_vv4 *)v2;
    v5 = (int)0;
    v3 = (int)0x6666;
    while (6 > v5) {
        t1 = call_8c37eb0c(v1);
        t2 = call_8c38c154(v1);
        v4->f00 = t1;
        v4->f04 = 0.0f;
        v4->f08 = t2;
        v4 = (S_vv4 *)((char *)v4 + 12);
        v1 = (int)(v1 + v3);
        v5 = (int)(v5 + 1);
    }
    t3 = call_8c12b944();
    t7 = call_8c12b570((float)t3 / 32768.0f * 255.0f);
    t4 = call_8c12b944();
    t8 = call_8c12b570((float)t4 / 32768.0f * 255.0f);
    v16 = (unsigned char)(unsigned int)t7 << 8;
    v16 |= (unsigned char)(unsigned int)t8;
    v12 = (int)(void *)0x8c4d5a88;
    v14 = (S_vv14 *)v12;
    v15 = (int)0;
    v13 = (int)0xffff00;
    while (0xc > v15) {
        v16 = v16 << 8 & v13;
        t5 = call_8c12b944();
        t6 = call_8c12b570((float)t5 / 32768.0f * 255.0f);
        v16 |= (unsigned char)(unsigned int)t6;
        v15 = (int)(v15 + 1);
        v14->f00 = v16;
        v14 = (S_vv14 *)((char *)v14 + 4);
    }
}
