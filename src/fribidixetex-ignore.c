/* All the tags that their content 
 * should be ignored by fribidixetex */
const char *ignore_tags_list[] = 
{
	"begin", "end", "fribidixetexRLE", "fribidixetexLRE", "fribidixetexLatindigits",
	"input", "include", "includegraphics", "includeonly",
	"hspace", "vspace", "hspace*", "vspace*",
	"ref", "label", "includegraphics",
	"bibliographystyle",
        "parbox", "fribidixetexPersianArabicdigits",
        "newenvironment", "newtheorem",
        "persianmathdigitsfamily",
        "fontfamily", "fontseries", "fontshape",
        "rmdefault", "sfdefault", "ttdefault",
        "bfdefault", "itdefault", "sldefault", "scdefault",
        "pagenumbering", "pagestyle", "thispagestyle",
        "setcounter", "stepcounter", "setlength", "addtolength"
	"bibitem", "cite" ,""
};

