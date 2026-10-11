typedef struct Record { char unknown0[64]; } Record;
Record *record64_8c167fd4(int index)
{
    return (Record *)((char *)0x8c3175c8 + (index << 6));
}
