/* SDK pool group 0x8c3c64b0-0x8c3c6578 (Hitachi SHC): subsystem start-up
   (-1 if any stage fails), an open-and-verify helper and a flush-and-close
   helper. The goto/label structure reproduces the reference's register
   rotation (SHC numbers scratch registers per basic block). */
extern int init_8c3c83c4(void);
extern int init_8c3c5af4(void);
extern int init_8c3c6578(void);
extern int init_8c3c509c(void);
extern int init_8c3c4884(void);
extern int init_8c3c8e84(void);
extern int init_8c3c7fe4(void);
extern int open_8c3c5b6a(int a, int b, int c, int handle);
extern int check_8c3c65f2(int handle);
extern void close_8c3c5bd8(int handle);
extern void flush_8c3c663a(int handle);

int init_all_8c3c64b0(void)
{
    if (init_8c3c83c4() || init_8c3c5af4()) goto fail;
    if (init_8c3c6578() || init_8c3c509c()) goto fail;
    if (init_8c3c4884() || init_8c3c8e84()) goto fail;
    if (init_8c3c7fe4() == 0) goto ok;
fail:
    return -1;
ok:
    return 0;
}

int open_checked_8c3c6506(int a, int b, int c, int handle)
{
    if (open_8c3c5b6a(a, b, c, handle)) goto fail;
    if (check_8c3c65f2(handle) == 0) goto ok;
    goto close;
close:
    close_8c3c5bd8(handle);
fail:
    return -1;
ok:
    return 0;
}

int flush_close_8c3c6534(int handle)
{
    flush_8c3c663a(handle);
    close_8c3c5bd8(handle);
    return 0;
}
