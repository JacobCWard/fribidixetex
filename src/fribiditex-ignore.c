/* All the tags that their content 
 * should be ignored by fribiditex */
const char *ignore_tags_list[] = 
{
	"begin", "end", "fribiditexRLE", "fribiditexLRE", "fribiditexLREnumbers",
	"input", "include", "includegraphics", "includeonly",
	"hspace", "vspace", "hspace*", "vspace*",
	"ref", "label", "includegraphics",
	"bibliographystyle",
        "parbox",
        "newenvironment", "newtheorem",
        "persianmathdigitsfamily",
        "fontfamily", "fontseries", "fontshape",
        "rmdefault", "sfdefault", "ttdefault",
        "bfdefault", "itdefault", "sldefault", "scdefault",
        "pagenumbering", "pagestyle", "thispagestyle",
        "setcounter", "stepcounter", "setlength", "addtolength"
	"bibitem", "cite" ,""
};

