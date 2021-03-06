#ifndef __NT35510_PARAM_H__
#define __NT35510_PARAM_H__

/* to be defined */
static const unsigned char SEQ_HX8394_POWER_0[] = {
	0xB9,
	0xFF, 0x83, 0x94
};

static const unsigned char SEQ_HX8394_POWER_1[] = {
	0xB1,
	0x41, 0x10, 0x70, 0x3D, 0xA4, 0x19, 0xF9, 0x87, 0x32, 0xA2,
	0x23, 0x80, 0xC0, 0xD2, 0x41,
};

static const unsigned char SEQ_HX8394_INIT_0[] = {
	0x3A,
	0x70, //0x00
};

static const unsigned char SEQ_HX8394_INIT_1[] = {
	0xBA,
	0x23, 0x82, 0xA0, 0x42, 0xB2, 0x89, 0x09, 0x40, 0x50, 0xFF,
	0x0F, 0x00, 0x08, 0x35, 0x20,
};

static const unsigned char SEQ_HX8394_INIT_2[] = {
	0xD2,
	0x11, //0x00
};

static const unsigned char SEQ_HX8394_INIT_3[] = {
	0xD3,
	0x00, 0x10, 0x00, 0x01, 0x07, 0x00, 0x00, 0x08, 0x10, 0x0E,
	0x00, 0x0E, 0x00, 0x15, 0x14, 0x15, 0x14, 0x05, 0x10, 0x10,
	0x08, 0x00, 0x45, 0x34, 0x12, 0x12, 0x47, 0x07, 0x00, 0x00,
	0x08, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x05, 0x05, 0x05, 0x02, 0x10, 0x07,
	0x07, 0x00,
};

static const unsigned char SEQ_HX8394_INIT_4[] = {
	0xD5,
	0x24, 0x25, 0x18, 0x18, 0x19, 0x19, 0x06, 0x07, 0x04, 0x05,
	0x02, 0x03, 0x00, 0x01, 0x20, 0x21, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18,
};

static const unsigned char SEQ_HX8394_INIT_5[] = {
	0xD6,
	0x21, 0x20, 0x19, 0x19, 0x18, 0x18, 0x01, 0x00, 0x03, 0x02,
	0x05, 0x04, 0x07, 0x06, 0x25, 0x24, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18,
};

static const unsigned char SEQ_HX8394_INIT_6[] = {
	0xB2,
	0x05, 0x64, 0x14, 0x09, 0x12, 0x1C, 0x08, 0x08, 0x1C, 0x4D,
	0x00, 0x04, 0x30, 0x44, 0x24,
};

static const unsigned char SEQ_HX8394_INIT_7[] = {
	0xB4,
	0x00, 0xFF, 0x64, 0x51, 0x64, 0x51, 0x64, 0x51, 0x01, 0x6A,
	0x1B, 0x70, 0x64, 0x51, 0x64, 0x51, 0x64, 0x51, 0x01, 0x6A,
	0x01, 0x64,
};


static const unsigned char SEQ_HX8394_INIT_8[] = {
	0xB5,
	0x35, 0x00
};

static const unsigned char SEQ_HX8394_INIT_9[] = {
	0xBC,
	0x04, //0x00
};

static const unsigned char SEQ_HX8394_INIT_10[] = {
	0xCC,
	0x05, //0x00
};

static const unsigned char SEQ_HX8394_INIT_11[] = {
	0xC0,
	0x30, 0x14,
};

static const unsigned char SEQ_HX8394_INIT_12[] = {
	0xC7,
	0x00, 0x00, 0x20,
};

static const unsigned char SEQ_HX8394_GAMMA_0[] = {
	0xE0,
	0x09, 0x22, 0x27, 0x34, 0x32, 0x3F, 0x32, 0x48, 0x08, 0x0B,
	0x0E, 0x18, 0x10, 0x13, 0x16, 0x13, 0x14, 0x06, 0x11, 0x13,
	0x14, 0x09, 0x22, 0x27, 0x34, 0x32, 0x3F, 0x32, 0x48, 0x08,
	0x0B, 0x0E, 0x18, 0x10, 0x13, 0x16, 0x13, 0x14, 0x06, 0x11,
	0x13, 0x14,
};

static const unsigned char SEQ_HX8394_GAMMA_1[] = {
	0xBD,
	0x00, //0x00
};

static const unsigned char SEQ_HX8394_GAMMA_2[] = {
	0xC1,
	0x01, 0x00, 0x07, 0x0F, 0x17, 0x1F, 0x27, 0x2F, 0x37, 0x3F,
	0X47, 0x4F, 0x57, 0x5F, 0x67, 0x6F, 0x77, 0x7F, 0x87, 0x8F,
	0x97, 0x9F, 0xA7, 0xAF, 0xB7, 0xBF, 0xC7, 0xCF, 0xD7, 0xDF,
	0xE7, 0xEF, 0xF7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static const unsigned char SEQ_HX8394_GAMMA_3[] = {
	0xBD,
	0x01, //0x00
};

static const unsigned char SEQ_HX8394_GAMMA_4[] = {
	0xC1,
	0x00, 0x07, 0x0F, 0x17, 0x1F, 0x27, 0x2F, 0x37, 0x3F, 0X47,
	0x4F, 0x57, 0x5F, 0x67, 0x6F, 0x77, 0x7F, 0x87, 0x8F, 0x97,
	0x9F, 0xA7, 0xAF, 0xB7, 0xBF, 0xC7, 0xCF, 0xD7, 0xDF, 0xE7,
	0xEF, 0xF7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00,
};

static const unsigned char SEQ_HX8394_GAMMA_5[] = {
	0xBD,
	0x02, //0x00
};

static const unsigned char SEQ_HX8394_GAMMA_6[] = {
	0xC1,
	0x00, 0x07, 0x0F, 0x17, 0x1F, 0x27, 0x2F, 0x37, 0x3F, 0X47,
	0x4F, 0x57, 0x5F, 0x67, 0x6F, 0x77, 0x7F, 0x87, 0x8F, 0x97,
	0x9F, 0xA7, 0xAF, 0xB7, 0xBF, 0xC7, 0xCF, 0xD7, 0xDF, 0xE7,
	0xEF, 0xF7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00,
};

static const unsigned char SEQ_HX8394_GAMMA_7[] = {
	0xBD,
	0x00, //0x00
};

static const unsigned char SEQ_BRIGHTNESS1[] = {
	0x51,
	0xFF
};

static const unsigned char SEQ_BRIGHTNESS2[] = {
	0x53,
	0x24
};


static const unsigned char SEQ_DISPLAY_SLEEP_OUT[] = {
	0x11,
	0x00, 0x00
};

/* Display On */
static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
	0x00, 0x00
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00, 0x00
};


#endif /* __NT35512_PARAM_H__ */
