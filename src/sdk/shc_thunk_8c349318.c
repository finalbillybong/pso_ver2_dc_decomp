/* SDK pool group 0x8c349318 (Hitachi SHC): forwards to 0x8c349248. */
extern void target_8c349248(void);

void thunk_8c349318(void)
{
    target_8c349248();
}
