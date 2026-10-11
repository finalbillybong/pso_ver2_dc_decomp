typedef struct Record { char unknown0[8]; } Record;
Record *record8_8c19e67c(unsigned char index)
{
    return (Record *)((char *)0x8c287a30 + (index << 3));
}
