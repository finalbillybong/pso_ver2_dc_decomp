/* SDK pool group 0x8c343ba4-0x8c343bd0 (Hitachi SHC): creates an object and
   registers it together with this function. */
extern int create_8c343938(void);
extern void register_8c346118(int (*owner)(void), int object);

int create_registered_8c343ba4(void)
{
    int object = create_8c343938();
    if (object) register_8c346118(create_registered_8c343ba4, object);
    return object;
}
