/* SDK pool group 0x8c345b7c-0x8c345bb4 (Hitachi SHC). */
extern void prepare_8c3464c0(void);
extern void transfer_8c36e384(void *, int, int, int, int, int);
extern char buffer_8c3fac38[];

int load_block_8c345b7c(void)
{
    prepare_8c3464c0();
    transfer_8c36e384(buffer_8c3fac38, 0xa0800000, 4, 0x80000, 0, 1);
    return 0;
}
