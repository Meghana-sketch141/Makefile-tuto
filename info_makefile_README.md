# Makefile-tuto
A makefile is nothing but a text file that is used or referenced by the ‘make’ command to build the targets. A makefile also contains information like source-level dependencies for each file as well as the build-order dependencies.
A makefile typically starts with variable declarations followed by a set of target entries for building specific targets. 

The general syntax of make is:

%make target_label             
#target_label is a specific target in makefile
For example, if we want to execute rm commands to clean up files, we write:
%make clean                
#here clean is a target_label specified for rm commands

Advantages Of Makefiles
When it comes to big projects, then using makefiles helps us to represent the project in a systematic and efficient way.
Makefiles make source code more concise and easy to read and debug.
Makefiles automatically compile only those files that are changed. Thus we need not regenerate the entire project when some of the portions of the project are modified.
Make tool allows us to compile multiple files at once so that all the files can be compiled in a single step.

Conclusion 
C++ Makefile allows us to represent the project systematically and efficiently thereby making it more readable and easy to debug.
