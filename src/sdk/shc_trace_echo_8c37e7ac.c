/* Pool group 0x8c37e7ac-0x8c37e7c8 (Hitachi SHC): forwards a word as a
   one-member struct passed by value (SHC copies it to a local and pushes
   it; the dead mov r4,r3 is the struct copy). */
typedef struct { int v; } Word;
extern int func_8c3b724e(Word);

void echo_8c37e7ac(int x)
{
    Word w;
    w.v = x;
    func_8c3b724e(w);
}
