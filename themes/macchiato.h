/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#494d64",
	"#ed8796",
	"#a6da95",
	"#eed49f",
	"#8aadf4",
	"#f5bde6",
	"#8bd5ca",
	"#b8c0e0",

	/* 8 bright colors */
	"#5b6078",
	"#ed8796",
	"#a6da95",
	"#eed49f",
	"#8aadf4",
	"#f5bde6",
	"#8bd5ca",
	"#a5adcb",

[256] = "#cad3f5", /* default foreground colour */
[257] = "#24273a", /* default background colour */
[258] = "#f4dbd6", /*575268*/

};


/*
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;
