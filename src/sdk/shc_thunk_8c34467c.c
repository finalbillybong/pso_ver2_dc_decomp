/* SDK pool group 0x8c34467c (Hitachi SHC): forwards to 0x8c344510. */
extern void target_8c344510(void);

void thunk_8c34467c(void)
{
    target_8c344510();
}
