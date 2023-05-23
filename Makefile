all : nsexception crashinfo

nsexception : nsexception.m
	clang -framework AppKit nsexception.m -o nsexception

crashinfo : crashinfo.c
	clang crashinfo.c -o crashinfo
