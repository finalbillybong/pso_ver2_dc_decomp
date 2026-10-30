typedef struct { char pad[0x12]; unsigned char v[2]; } Info;
extern unsigned char map_8c3f76a4[];
extern unsigned char d_8c3f767c[];
extern Info *func_8c36f2be(int);

int pair_lookup_8c371b30(int x)
{
    int m = map_8c3f76a4[x];
    Info *a = func_8c36f2be(m);
    Info *b = func_8c36f2be(x);
    int k;
    switch (x) {
    case 2:
    case 8:
    case 14:
    case 20:
        k = 1;
        break;
    default:
        k = 0;
        break;
    }
    return d_8c3f767c[a->v[k] * 4 + b->v[0]];
}

void empty_8c371b8a(void)
{
}
