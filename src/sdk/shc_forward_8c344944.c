/* SDK pool group 0x8c344944 (Hitachi SHC): forwards to 0x8c344890. */
extern void target_8c344890(void);

void forward_8c344944(void)
{
    target_8c344890();
}
