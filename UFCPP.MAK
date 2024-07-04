Options = /W3 /c /Fd /Gd- /Ge+ /Gm+ /Re /Kbegp /DNULL=0 /Ti

$(a)uf.obj:	$(a)uf.Cpp
		ICC.Exe $(Options) $(a)uf.Cpp
		if exist $(a).exe del $(a).exe
