/* SDK pool group 0x8c343050-0x8c34308c (Hitachi SHC): forwards to the general
   drawing routine with a halved, biased fourth argument. */
extern void draw_8c34409c(int a, int b, int c, int d, char e, char f, char g, int h, int i);

void draw_text_8c343050(int a, int b, int c, char d, char e, char f, char g)
{
    register int column = d / 2 + 0x40;
    draw_8c34409c(a, b, c, column, e, f, g, -1, 0);
}
