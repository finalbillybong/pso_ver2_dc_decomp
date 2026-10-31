typedef struct File {
    char pad00[8];
    int v08;
    int v0c;
    int size;
    int pos;
    char pad18[0x34];
    short open;
    short v4e;
} File;

int file_get_0c_8c369f08(File *f, int *out)
{
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto L1;
L1:
    if (f == 0 || f->open == 0)
        return 0;
    *out = f->v0c;
    return 1;
}

int file_get_size_8c369f22(File *f, int *out)
{
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto L2;
L2:
    if (f == 0 || f->open == 0)
        return 0;
    *out = f->size;
    return 1;
}

int file_get_08_8c369f3c(File *f, int *out)
{
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto L3;
L3:
    if (f == 0 || f->open == 0)
        return 0;
    *out = f->v08;
    return 1;
}

int file_seek_8c369f56(File *f, int off, int whence)
{
    int size;
    int pos;
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto L4;
L4:
    if (f == 0 || f->open == 0)
        return -10;
    size = f->size;
    switch (whence) {
    case 0:
        pos = off;
        break;
    case 1:
        pos = f->pos + off;
        break;
    case 2:
        pos = off + size;
        break;
    default:
        return -16;
    }
    if (pos < 0 || pos > size)
        return -17;
    f->pos = pos;
    return 0;
}

int file_tell_8c369fa2(File *f)
{
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto L5;
L5:
    if (f == 0 || f->open == 0)
        return 0;
    return f->pos;
}

int file_eof_8c369fb8(File *f, int *out)
{
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto L6;
L6:
    if (f == 0 || f->open == 0)
        return -10;
    if (f->pos >= f->size)
        *out = 1;
    else
        *out = 0;
    return 0;
}

int file_set_4e_8c369fe0(File *f, short v)
{
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto L7;
L7:
    if (f == 0 || f->open == 0)
        return -10;
    f->v4e = v;
    return 0;
}
