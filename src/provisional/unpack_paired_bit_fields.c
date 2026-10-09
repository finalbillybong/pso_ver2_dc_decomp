void unpack_paired_bit_fields(unsigned char *out,unsigned short value) {
 out[0]=value&3;out[0]|=(value&0x300)>>4;
 out[-1]=(value&12)>>2;out[-1]|=(value&0xc00)>>6;
 out[-4]=(value&48)>>4;out[-4]|=(value&0x3000)>>8;
 out[-5]=(value&192)>>6;out[-5]|=(value&0xc000)>>10;
}
