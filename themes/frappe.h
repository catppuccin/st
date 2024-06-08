/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#51576D",
	"#E78284",
	"#A6D189",
	"#E5C890",
	"#8CAAEE",
	"#F4B8E4",
	"#81C8BE",
	"#B5BFE2",

	/* 8 bright colors */
	"#626880",
	"#E78284",
	"#A6D189",
	"#E5C890",
	"#8CAAEE",
	"#F4B8E4",
	"#81C8BE",
	"#A5ADCE",

[256] = "#C6D0F5", /* default foreground colour */
[257] = "#303446", /* default background colour */
[258] = "#F2D5CF", /*575268*/

};


/*
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;
