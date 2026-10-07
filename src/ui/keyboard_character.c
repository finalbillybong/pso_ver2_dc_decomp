/* Provisional keyboard-code translation observed at 0x8c01e1f4.
 * Preserve the original modifier mask and numeric/punctuation mappings. */
extern unsigned char key_state[];
int keyboard_character(void) {
    int code = key_state[8];
    int shift = key_state[0] & 0x22;
    if (code >= 30 && code <= 38) return code + 19;
    if (code >= 4 && code <= 29) return shift ? code + 61 : code + 93;
    switch (code) {
        case 39: return '0';
        case 40: return 13;
        case 41: return 27;
        case 42: return 8;
        case 43: return 9;
        case 54: return shift ? '<' : ',';
        case 55: return shift ? '>' : '.';
        case 51: return shift ? '+' : ';';
        case 52: return shift ? '*' : ':';
        case 135: if (shift) return '_';
        default: return 0;
    }
}
