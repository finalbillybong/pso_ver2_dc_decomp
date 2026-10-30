/* SDK pool group 0x8c3e9658 (Hitachi SHC): two forwarders around an empty
   function. */
extern void target_8c3e91ee(void);
extern void target_8c3e9238(void);

void forward_8c3e9658(void)
{
    target_8c3e91ee();
}

void nothing_8c3e965e(void)
{
}

void forward_8c3e9662(void)
{
    target_8c3e9238();
}
