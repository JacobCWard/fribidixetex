FriBidiTeX
========

FriBidiTeX is a pre-processor for TeX files to support unicode bidirectional algorithm.

Usage
-----

To use FriBidiTeX, run the `fribiditex` command on the TeX file, the resulting file
can then be processed by the TeX engine to produce the final output.

FriBidiTeX understands some special comments to control its behaviour:

* `%BIDION`: activate FriBidiTeX special handling.
* `%BIDIOFF`: stop it
* `%BIDILTR`: the document is mainly left-to-right with some right-to-left text.

Example
-------

Here a sample `xepersian` document:

    \documentclass{article}
    \usepackage{xepersian}
    \settextfont{Yas}
    \let\fribiditexLRE\lr
    \let\fribiditexRLE\rl
    \letfribiditexLREnumbers\relax
    %BIDION
    \begin{document}    
    ...
    \end{document}
    %BIDIOFF

This can be processed with FriBidiTeX, then by XeTeX to produce final PDF:

    fribiditex -n test.tex -o test.ltx
    xelatex test.ltx

