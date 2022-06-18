#define CMDLENGTH 45
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("battery",    1800, 17),
	BLOCK("sb-memory",  10,   20),
	BLOCK("sb-volume",  0,    22),
	BLOCK("sb-battery", 5,    23),
	BLOCK("sb-date",    1,    24)
	{"",	"",	20,	7},
	{"",	"keyboard",	0,	2},
	{"",	"volume",	0,	10},
	{"",	"bright",	0,	11},
	{"",	"battery",	5,	8},
	{" ",	"date '+%H:%M'",	60,	0},

};
