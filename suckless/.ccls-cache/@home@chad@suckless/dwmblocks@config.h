//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"",	"record",	0,	8},
	{"",	"dwmtor",	20,	7},
//	{"",	"trophie",	0,	4},
	{"",	"keyboard",	0,	2},
	{"",	"volume",	0,	10},
	{"",	"bright",	0,	11},
	{"",	"battery",	5,	8},
	{" ",	"date '+%H:%M'",	60,	0},
//	{"", "wifi",                                    5,                               5}
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
